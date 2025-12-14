/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125904
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
    var_14 ^= ((/* implicit */unsigned long long int) min((min((((var_4) & (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_8)), (var_9)))))), (((/* implicit */long long int) max((((/* implicit */int) ((var_10) == (var_10)))), (max((((/* implicit */int) var_11)), (var_7))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_2 [i_1] [(short)19]) + (2147483647))) >> (((var_12) - (3733326081U)))))) ? (max((((/* implicit */int) var_8)), (var_7))) : (((/* implicit */int) var_8))))), (((((((/* implicit */_Bool) arr_14 [i_3] [i_1])) ? (arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_1)))))))));
                                var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                                var_18 = ((/* implicit */short) var_11);
                                var_19 = ((/* implicit */signed char) min((max((((/* implicit */long long int) max((((/* implicit */int) var_2)), (var_7)))), (((var_0) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned char)22] [i_5] [i_0])) - (((/* implicit */int) var_1))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */short) arr_23 [(unsigned char)14] [i_1] [i_7] [i_8]);
                        arr_26 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_2)))) + (((/* implicit */int) max((arr_7 [(unsigned char)5] [(signed char)13] [i_8]), (arr_10 [i_1])))))) == (((((((((/* implicit */int) arr_8 [i_8] [i_7] [i_1] [i_0])) + (2147483647))) >> (((var_7) - (1246847462))))) >> ((((-(arr_12 [(signed char)18] [3ULL] [i_0]))) - (4586345626203222043LL)))))));
                    }
                    arr_27 [i_0] [i_0] [i_7] [i_1] = ((/* implicit */short) min((var_4), (((((var_10) | (var_4))) | (var_4)))));
                    var_21 = ((/* implicit */signed char) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (arr_0 [i_7]))))) >= (var_13))))));
                }
                arr_28 [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_1] [9])))) && (((/* implicit */_Bool) min((arr_8 [i_0] [(unsigned short)6] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_1] [(signed char)0]))))));
            }
        } 
    } 
}
