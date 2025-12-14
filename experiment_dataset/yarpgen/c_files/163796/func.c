/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163796
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) (unsigned short)32821);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_2] = ((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_2]);
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_0] [i_1]))))) & ((+(arr_3 [i_1 - 2] [i_1 - 2])))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_12 [i_1 - 1] [i_1 - 1])));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) (signed char)96);
                        arr_18 [i_0] [i_1] [i_1] [i_4] [i_0] = ((((/* implicit */_Bool) (signed char)96)) ? (((var_12) ? (arr_14 [i_0] [i_1] [i_4]) : (((/* implicit */long long int) arr_15 [i_1 + 3] [i_1 - 2] [i_1 + 1] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 4 */
                        for (long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            var_17 = arr_5 [i_5] [i_1] [i_0];
                            arr_22 [i_0] [i_1 + 1] [i_0] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1])) && (arr_19 [i_5 - 1] [i_1 - 1] [i_1])));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)219)) : (((((/* implicit */_Bool) 861335121428049943LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))));
                            var_19 = ((/* implicit */long long int) ((_Bool) (_Bool)1));
                            var_20 = arr_2 [i_0];
                        }
                        for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            var_21 = (-(arr_5 [i_1 + 2] [i_1 + 2] [i_3]));
                            var_22 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) var_3))));
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)3980))));
                            var_24 = ((/* implicit */signed char) arr_2 [i_0]);
                        }
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            arr_33 [i_8] [i_8] [i_8] [i_0] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_11) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4] [i_0] [i_0]))) : (var_11)))));
                            var_25 = ((/* implicit */unsigned int) ((((_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_3] [i_0])) : ((~(((/* implicit */int) arr_2 [i_0]))))));
                            var_26 = ((/* implicit */long long int) ((unsigned int) (unsigned short)255));
                        }
                        arr_34 [i_0] [i_1 + 3] [i_1 - 2] [i_1 - 1] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? ((+(((/* implicit */int) (unsigned char)212)))) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_1] [i_1 + 3] [i_0] [i_3] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
                        var_27 = ((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_1 + 3] [i_0] [i_1]));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-103))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) / (arr_9 [i_1 - 2] [i_0] [i_1 + 2])));
                    }
                    arr_42 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_1 + 1] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_3] [i_1] [i_1 - 2])) : ((-(arr_29 [i_0] [i_1 - 2] [i_3])))));
                    arr_43 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (~(13004862573556281787ULL)));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_47 [i_0] [i_1] [i_1 - 1] [i_11] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_16 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1])))), (((/* implicit */int) var_12))));
                    var_30 = ((/* implicit */_Bool) ((((arr_14 [i_0] [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? ((-(arr_14 [i_0] [i_11] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) % (arr_14 [i_0] [i_0] [i_0])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_51 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)1);
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_1 + 2] [i_1 - 2] [i_1] [i_1 - 2])) ? (((/* implicit */int) arr_30 [i_1 + 2] [i_1] [i_1 - 2] [i_1 + 3])) : (((/* implicit */int) arr_30 [i_1 + 3] [i_1 - 2] [i_1 - 2] [i_1 + 1]))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11)));
                    }
                }
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) var_14);
}
