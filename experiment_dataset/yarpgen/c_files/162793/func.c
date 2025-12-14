/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162793
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
    var_20 = ((/* implicit */long long int) ((unsigned int) 16082998403154324240ULL));
    var_21 ^= ((/* implicit */unsigned int) (~(var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((arr_5 [(unsigned char)9]) ^ (((/* implicit */int) (unsigned char)106))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : ((~(arr_1 [i_1 - 1])))))));
                var_23 ^= ((unsigned int) ((unsigned char) arr_3 [i_1 + 3] [i_1 + 3]));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) min((min((arr_3 [i_1 + 3] [i_1 + 1]), (arr_3 [i_1 - 2] [i_1 - 1]))), (((/* implicit */int) ((arr_3 [i_1 + 1] [i_1 + 3]) >= (arr_3 [i_1 - 2] [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    var_24 -= arr_11 [i_2] [i_3 + 3] [i_4];
                    var_25 = ((/* implicit */int) (unsigned char)25);
                    var_26 = ((/* implicit */unsigned int) (+(((long long int) arr_13 [i_3] [i_3 + 1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (arr_15 [i_2] [i_3 - 1] [i_2] [i_4] [i_5] [i_3 + 3])));
                        var_28 = (~(((/* implicit */int) ((var_10) >= (arr_10 [7])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2] [i_3 + 2])) ? (((unsigned long long int) -1266880437)) : (((/* implicit */unsigned long long int) 8388607U))));
                        arr_20 [i_2] [i_3] [i_2] [i_4] [i_3] = ((/* implicit */long long int) arr_17 [i_4] [i_4] [i_6] [i_3]);
                        var_30 = ((/* implicit */int) 16082998403154324247ULL);
                    }
                }
                for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    var_31 = min((arr_9 [i_2] [i_3 - 3] [1LL]), (max((arr_16 [i_2] [4] [i_3] [9U] [i_2]), (((/* implicit */unsigned int) -1907174664)))));
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [10] [i_7])) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_3] [i_7])) ? (var_4) : (arr_16 [i_2] [i_2] [i_2] [i_2] [6U]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (arr_17 [i_3] [i_3] [i_3] [i_7]) : (((/* implicit */int) arr_18 [i_2] [i_2] [i_3 + 3] [i_7] [i_7])))))))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_2])), (var_13))) : (2363745670555227382ULL)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_33 ^= ((/* implicit */unsigned char) arr_24 [i_8] [i_7] [i_3 + 1] [i_2]);
                        var_34 = ((/* implicit */int) arr_11 [i_2] [5] [i_8]);
                        var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1907174664)) | (511U)));
                        var_36 -= ((arr_25 [i_3] [i_3] [i_3] [i_3]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_7])) ? (var_6) : (var_2)))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                    {
                        var_37 |= ((int) -1907174667);
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1312323888)) ? (((int) -1907174667)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)140)) >= (var_6)))))))));
                        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */_Bool) 131068)) ? (arr_13 [i_2] [i_9]) : (arr_13 [i_7] [i_7]))))));
                    }
                    for (int i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */long long int) ((int) var_1));
                        arr_33 [i_2] [i_3] [i_3] [i_7] [i_10] [i_10] = ((/* implicit */int) (~((~(arr_21 [i_3] [i_3 + 3] [i_3 + 1])))));
                        var_41 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3 - 1] [i_7])) ? (((/* implicit */int) arr_18 [i_2] [i_3] [i_3] [i_10] [i_3])) : (max((var_14), (arr_8 [i_2])))))) != (((unsigned int) (-(arr_14 [i_2] [i_2]))))));
                        var_42 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 4294966780U)), (arr_24 [i_2] [i_2] [i_7] [i_10])))) ? (((((/* implicit */_Bool) arr_9 [i_7] [i_3] [12ULL])) ? (((/* implicit */unsigned int) arr_23 [i_2] [i_10] [i_7] [i_3])) : (var_18))) : (((/* implicit */unsigned int) arr_28 [i_3] [i_3 + 3] [1U] [i_7] [i_7] [i_3])))));
                    }
                }
                for (unsigned char i_11 = 1; i_11 < 14; i_11 += 1) 
                {
                    var_43 = ((int) (-(arr_23 [i_2] [i_2] [i_2] [i_3])));
                    var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_24 [i_3 - 1] [i_11] [i_11] [i_11 - 1])))) ? ((+(((var_7) / (((/* implicit */unsigned long long int) arr_22 [i_2] [i_2] [i_2])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_3 + 2] [i_3 + 3])) ? (arr_25 [i_3] [i_3] [i_3 + 2] [i_11]) : (arr_25 [i_3 + 2] [i_3 - 2] [i_3 + 4] [i_3])))))))));
                }
                var_45 = 2444700847U;
            }
        } 
    } 
}
