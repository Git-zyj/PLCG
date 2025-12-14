/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179840
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 4939857548908306530ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) 70368744177663LL))))) : (var_12)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_16 += ((/* implicit */unsigned int) ((signed char) (+(min((((/* implicit */long long int) var_9)), (-70368744177664LL))))));
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_5 [(short)6] [(short)6]))) ? (((var_14) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8001))))))));
                    arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [i_0]) ? (((arr_2 [i_0] [i_0]) + (arr_2 [i_2] [i_1]))) : (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_2] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_0] [(signed char)0] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) -1677999257908687950LL)) && (((/* implicit */_Bool) min((1677999257908687934LL), (((/* implicit */long long int) (signed char)78)))))))));
                                arr_12 [i_4] [(signed char)12] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_0] [i_1] [i_4]);
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_1] = (+((~(arr_7 [(signed char)9] [(signed char)9] [i_1] [i_0]))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [10U] [i_1] [(signed char)0] = (!(((/* implicit */_Bool) min((arr_3 [i_2] [(signed char)9] [i_0]), (9054410024214099899ULL)))));
                }
                var_18 = ((/* implicit */signed char) (_Bool)1);
                var_19 = ((/* implicit */signed char) min((arr_1 [i_1]), (((/* implicit */unsigned long long int) min((((var_1) >> (((var_5) + (8958537639818909801LL))))), (((/* implicit */long long int) ((signed char) var_9))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (var_10)));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_13))));
}
