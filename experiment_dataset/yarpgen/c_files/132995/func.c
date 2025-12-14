/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132995
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_1])))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) arr_2 [5U]);
                                var_14 = ((/* implicit */unsigned int) arr_0 [i_3 + 1] [i_3]);
                                var_15 = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_1] [i_1] [(unsigned char)12] [i_1] &= var_1;
                            arr_23 [(_Bool)0] [i_1] [(signed char)0] [(_Bool)0] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)9]))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min(((~(max((((/* implicit */unsigned long long int) 4036461205U)), (8976748988153478823ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_21 [i_6] [6LL] [i_2] [i_1 + 3] [i_0])))))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_9))));
                        }
                        var_18 ^= ((/* implicit */signed char) arr_14 [i_2]);
                        arr_24 [i_2] [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (var_8)))) ? (((/* implicit */unsigned int) 2147483626)) : ((-(var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_0] [i_2] [i_5]))) : ((+(var_0))));
                        arr_25 [i_2] [i_1] = arr_13 [i_1] [i_2] [i_1] [i_1] [i_0];
                        var_19 = ((/* implicit */long long int) (_Bool)1);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) (_Bool)1);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1))))))), (((((((/* implicit */unsigned long long int) -632218818)) / (8976748988153478822ULL))) * (((/* implicit */unsigned long long int) (+(2147483626)))))))))));
                            var_22 = ((/* implicit */signed char) min(((-(((((/* implicit */unsigned int) -2147483627)) + (4036461205U))))), (((4036461202U) >> ((((+(4036461205U))) - (4036461188U)))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            arr_34 [i_0] [4ULL] [i_0] [i_0] &= var_6;
                            var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_1] [i_1] [i_2] [i_9])))))))) + ((+((+(((/* implicit */int) arr_10 [1U] [(signed char)1] [1U] [i_9])))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) ((arr_31 [i_1 + 2] [(_Bool)1]) + (arr_31 [i_1 + 3] [(unsigned char)2])));
                        var_25 = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned short)34586))))) == (((/* implicit */int) (signed char)0)))))));
                    }
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        arr_41 [i_1] [i_2] [8LL] [i_1] [i_1] = ((/* implicit */unsigned short) (+(1140662869775790440LL)));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_26 [i_0] [i_1] [i_2] [(unsigned char)9]))));
                    }
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) (_Bool)1);
}
