/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132404
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned int) min((min(((_Bool)1), ((_Bool)1))), ((!(((/* implicit */_Bool) arr_3 [i_1 + 4] [i_1 + 3]))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [14ULL] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1 + 2]), (((/* implicit */short) (signed char)-95))))), (((unsigned long long int) (_Bool)1))));
                        arr_12 [i_2] [i_1] [(short)3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 458752U)) != (((((/* implicit */_Bool) arr_10 [i_1 + 4] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2 + 1]))) : (arr_10 [i_1 + 3] [i_2 - 1])))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                            var_18 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_2 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) : (4051037619U)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) (unsigned char)109))))) ? (arr_5 [i_0] [i_2] [i_2] [i_2]) : ((~(-6965149987312219730LL)))))));
                        }
                        arr_15 [i_0] [i_2] [i_1] [i_2] [(signed char)7] = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned char)156))))));
                        var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 3615385630379773464ULL)) ? (243929677U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-6965149987312219730LL)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)77), (((/* implicit */unsigned char) (_Bool)0))))))))));
                    }
                    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 458752U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1784316644U)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)239))))) : (4051037644U)));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned long long int) min((((var_3) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1))))) : (max((6965149987312219734LL), (((/* implicit */long long int) (short)12024)))))), (((/* implicit */long long int) var_9))));
}
