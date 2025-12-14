/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152739
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
    var_19 = ((/* implicit */short) min((max((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_13)))), (max((var_2), (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned char)1] [(unsigned char)1] = ((/* implicit */_Bool) (short)0);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) var_11);
                                arr_14 [i_4] [(signed char)5] [(signed char)5] [i_2] [(unsigned char)12] [(unsigned char)12] = ((/* implicit */int) var_8);
                                arr_15 [i_0] [0ULL] [i_2] [6] [i_0] = ((/* implicit */unsigned int) (+(max((var_14), (((/* implicit */unsigned long long int) var_11))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) & (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(short)4] [10]))))) || (((/* implicit */_Bool) var_7)))))) : (((31LL) >> (((((/* implicit */int) var_0)) - (80)))))));
                                var_22 = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_1]))))), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                                arr_21 [i_0] [(_Bool)0] [(_Bool)0] [(_Bool)0] [7LL] = ((/* implicit */long long int) ((var_6) && (((/* implicit */_Bool) (short)0))));
                                arr_22 [14ULL] [i_1] [10ULL] [i_6] [i_1] [i_0] [(unsigned char)2] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_18))))), (var_5)));
                                arr_23 [i_0] [(signed char)12] [i_1] [(signed char)12] [(_Bool)1] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_17)) >> (((var_14) - (6212798361962352786ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_3 [i_6] [i_2])))) / (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    arr_24 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_5 [i_2] [i_2] [(unsigned char)4] [(signed char)5])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2])) : (arr_6 [(short)8] [(unsigned char)0] [i_2]))), (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_12)))) + (((/* implicit */int) arr_9 [i_0]))))));
                    var_24 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_20 [i_0] [(signed char)14] [i_1] [4LL])) ? (((/* implicit */int) arr_20 [(_Bool)1] [i_1] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)252))))));
                }
            } 
        } 
    } 
}
