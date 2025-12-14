/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123032
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))));
        var_17 -= ((/* implicit */unsigned long long int) var_13);
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        for (short i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) max((var_18), (max((((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-4401051791654162992LL))), (((/* implicit */long long int) arr_1 [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) != (var_8)))) : (((/* implicit */int) var_15)))) >> (((/* implicit */int) (unsigned char)21))));
                    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_11 [i_1] [i_2 + 3] [i_3] [i_3]))))), (((((/* implicit */_Bool) (short)16612)) ? (((/* implicit */int) arr_11 [i_1] [i_2 + 3] [i_3] [i_3])) : (((/* implicit */int) var_15))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_12))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) -9223372036854775786LL);
}
