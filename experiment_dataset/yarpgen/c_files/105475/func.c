/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105475
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_4 [(unsigned char)6] [i_1] = ((/* implicit */signed char) ((unsigned char) arr_1 [i_1]));
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
    }
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (signed char)15);
        var_20 = ((/* implicit */int) max((arr_8 [i_2]), (((unsigned long long int) max((((/* implicit */unsigned char) (signed char)55)), ((unsigned char)198))))));
        arr_9 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-4951))) == (var_15))))));
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] = ((((/* implicit */int) (unsigned char)57)) + (((/* implicit */int) (unsigned char)198)));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
        {
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_15 [i_3] [i_4]), (arr_15 [i_3] [i_4])))) ? (((int) arr_15 [i_3] [i_4])) : ((-(((/* implicit */int) (short)28477))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)72)) * (((/* implicit */int) (signed char)-9))));
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            var_23 &= ((/* implicit */unsigned int) ((signed char) (-(((((/* implicit */int) arr_16 [(unsigned short)1])) / (((/* implicit */int) (unsigned char)58)))))));
            arr_20 [i_3] [i_5] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) var_11)))));
        }
        var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((long long int) arr_15 [i_3] [i_3]))), (((arr_15 [i_3] [i_3]) ^ (6994008668401405626ULL)))));
    }
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((arr_18 [i_6] [i_6] [i_6]), ((+(((/* implicit */int) (_Bool)1))))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_14 [i_6] [10U]))))))));
        arr_23 [i_6] = (signed char)17;
    }
    var_26 = ((/* implicit */short) var_16);
}
