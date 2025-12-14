/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125353
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) 4076669655U)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    var_14 = ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_1] [i_1 + 1])) > (((long long int) var_8))));
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                var_16 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [(_Bool)1])) ? (var_6) : (((/* implicit */unsigned long long int) 1474354020U)))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned long long int) var_5)))));
            }
            var_18 = ((/* implicit */_Bool) ((long long int) arr_3 [i_0]));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 218297641U)) && (((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) ((signed char) var_3)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) + (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11)))))));
        var_21 = ((/* implicit */unsigned long long int) (-(arr_10 [i_3])));
    }
    for (int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_12), (var_4)))) && (((var_1) <= (arr_9 [i_4])))));
        var_23 = ((((/* implicit */long long int) ((((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ? (var_1) : ((+(218297648U)))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (4633193485503706399LL) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 4076669655U)))))) : (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */long long int) 1474354020U)) : (var_11))))));
    }
}
