/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13575
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_18 *= var_16;
                    var_19 = var_7;
                    var_20 *= (~(((((/* implicit */_Bool) 4095U)) ? (arr_3 [i_0]) : (arr_7 [i_0] [14U]))));
                }
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1]))) ? (((/* implicit */int) ((4294967295U) != (var_14)))) : (((/* implicit */int) ((var_17) >= (arr_0 [i_0])))))))));
                    arr_11 [i_1] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [3U])))) ? (arr_9 [i_1 - 1] [i_1] [13U] [i_1 - 1]) : (4294967295U)))) ? (678687181U) : (3319462830U));
                }
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (4294967295U)));
                    var_23 *= var_17;
                }
                var_24 = ((((/* implicit */_Bool) var_2)) ? (((arr_13 [i_0] [i_0] [i_0] [i_0]) & (arr_8 [i_1] [i_1] [0U] [i_1]))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((~(1928088822U))))));
                arr_16 [i_0] [i_1] [i_1 - 1] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (0U) : (1011766300U)))) ? (max((0U), (arr_13 [i_0] [i_0] [i_0] [i_0]))) : ((+(4294967295U))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned int i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        {
                            arr_24 [10U] [i_1] [i_1] [i_6] = ((((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(var_5))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (1011766300U) : (var_2))))) ^ (3653238226U));
                            var_25 = ((unsigned int) max(((~(arr_8 [i_1] [i_1] [1U] [i_6 + 1]))), (min((var_4), (arr_5 [i_6])))));
                            var_26 += ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) arr_21 [i_6] [i_5] [i_5] [13U] [0U] [i_0])) || (((/* implicit */_Bool) 4294967273U)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_13 [6U] [6U] [i_5] [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2945641581U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 4294967295U))))))))));
                        }
                    } 
                } 
                var_27 = max((((((/* implicit */_Bool) var_11)) ? (arr_19 [i_1] [i_1 - 1] [i_1 + 1] [i_1]) : (arr_6 [i_1] [i_1] [i_1] [i_1]))), (var_3));
            }
        } 
    } 
    var_28 = (-(0U));
}
