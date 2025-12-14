/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124452
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
    var_14 = var_13;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0]))))));
        var_16 = ((/* implicit */unsigned char) 3490254955U);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_6)))))))));
            arr_9 [1ULL] = ((var_12) - (((/* implicit */long long int) ((((/* implicit */_Bool) 8637915330956742372LL)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_2] [i_1]))))));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1] [i_2 - 1])) | (((/* implicit */int) var_8))));
        }
        arr_11 [i_1] = ((/* implicit */int) (unsigned char)109);
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) var_6);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_0 [i_3] [i_3]))));
        var_19 *= ((/* implicit */int) (_Bool)1);
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_11))), (((/* implicit */unsigned long long int) 3371582056U)))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_4 [i_4] [i_4]))));
        arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_10))) % (((/* implicit */int) arr_7 [i_4] [i_4]))));
    }
}
