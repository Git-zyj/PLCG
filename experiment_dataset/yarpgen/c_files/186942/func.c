/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186942
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
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) min((arr_3 [i_1]), ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-979553115))))))));
                            var_11 = ((/* implicit */_Bool) max((var_11), (((_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 3] [i_2] [i_1 + 2]))) : (arr_0 [i_1 - 1] [i_3 + 1]))))));
                            var_12 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [14]);
                            arr_9 [i_1] [i_1 + 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10996474469596772723ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) : (215624370U)));
                            var_13 = arr_8 [i_1] [i_2];
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                {
                    arr_13 [i_1] [i_1] [12U] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2] [i_1 - 1] [i_4 - 2]))) | (((215624370U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                    arr_14 [i_0] [i_1] = ((((((/* implicit */unsigned long long int) arr_3 [i_1])) > (((((/* implicit */_Bool) 2758292283U)) ? (10996474469596772738ULL) : (((/* implicit */unsigned long long int) var_8)))))) ? ((-(((/* implicit */int) ((signed char) var_6))))) : (((/* implicit */int) ((_Bool) (unsigned char)14))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 347255989)) && (((/* implicit */_Bool) var_5))));
                        arr_19 [15ULL] [i_1] [10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)24164)) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_1 + 2] [i_1] [i_4 - 2] [i_4] [i_5])) : (((/* implicit */int) (signed char)67))))) & (((unsigned long long int) var_2))));
                        var_14 += ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_6 [i_5] [i_1] [i_0] [i_1] [i_1] [i_1])));
                        var_15 = ((/* implicit */unsigned char) (~(((unsigned long long int) 0))));
                        arr_20 [12ULL] [i_5] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_12 [i_0 - 1] [i_0 - 1] [i_4 - 1] [i_5]) : (arr_0 [i_1 - 1] [i_5]))) : (((/* implicit */unsigned long long int) 15U))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned int) var_5)))));
                        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)76)) ? (arr_10 [i_0 - 2] [i_4] [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_1 + 1] [i_1 + 1]) : (((/* implicit */int) var_4)))))))) ? ((-(max((arr_8 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) var_8)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (((((/* implicit */_Bool) (short)-17272)) ? (7450269604112778887ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
                    }
                    arr_23 [i_1] = ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_4 - 2] [i_0 - 3]))) > (1LL))) ? (min((((/* implicit */int) arr_4 [i_1 + 2] [i_4 + 1] [i_0 - 2])), (-1794068243))) : (((/* implicit */int) ((unsigned char) var_7))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_6 [i_1] [i_1] [i_0] [i_1 + 2] [i_1] [i_1 + 2]))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_5))));
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_17 [(_Bool)1] [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) var_2))))) ? (((unsigned long long int) arr_21 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_8)) ^ (4294967278U)))))))));
        var_21 = var_3;
        var_22 = ((/* implicit */_Bool) ((int) 2150875734U));
        arr_27 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_15 [i_7])) / (((/* implicit */int) var_9))))))) ? ((~(((/* implicit */int) var_9)))) : (((min((((/* implicit */int) var_4)), (-347255989))) / (arr_22 [i_7] [i_7])))));
    }
}
