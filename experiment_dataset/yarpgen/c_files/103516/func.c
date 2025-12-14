/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103516
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
    var_16 = ((/* implicit */_Bool) (-(2147483647)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) ((arr_5 [i_0] [i_1] [(short)7]) == (((/* implicit */int) var_8))))), (arr_0 [i_0] [i_0]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-17266))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_17 [i_4] [i_3] [i_3] [i_2] |= ((/* implicit */long long int) var_5);
                    arr_18 [i_4] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(arr_8 [i_4])))), (max((var_3), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_3]))))))) ? (((unsigned long long int) (~(arr_13 [i_2] [i_4])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_2] [4U]))))));
                    arr_19 [i_4] = ((/* implicit */_Bool) (+(((arr_7 [i_2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((+(((/* implicit */int) arr_10 [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 20; i_5 += 1) 
    {
        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 4; i_7 < 21; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_8] [i_7] [i_7])))))));
                        arr_30 [i_5] [i_6 + 1] [i_7] = ((/* implicit */unsigned int) ((unsigned char) (~(arr_25 [i_5 + 2] [(unsigned short)3] [i_7] [20]))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_4)))))))));
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(0LL))))));
                    }
                    arr_33 [i_5] [21U] [i_7] [i_7] = ((/* implicit */int) var_14);
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (((+(arr_32 [i_5 - 2] [i_6] [i_5 - 2] [i_5 - 2]))) << (((var_3) - (11922960100871813448ULL))))))));
                }
                /* LoopNest 3 */
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            {
                                arr_44 [(_Bool)1] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_35 [i_6 + 2] [i_5 + 1] [i_5 + 1])))));
                                arr_45 [i_5] [i_5] [i_5] [i_11] [(short)12] [i_12] = ((/* implicit */int) var_15);
                                arr_46 [i_5 + 2] [8U] [i_11] [(unsigned char)12] [i_12] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5 - 2] [i_5 + 2] [i_5 + 4] [i_5 - 1])))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */int) ((unsigned int) (-(arr_26 [i_6] [i_5 + 3] [i_6 + 2]))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) arr_50 [i_14] [i_6]);
                            /* LoopSeq 2 */
                            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_5 + 3]))))))))));
                                var_25 -= ((/* implicit */unsigned long long int) arr_42 [i_5 + 2] [i_6] [i_13] [i_14] [i_6]);
                            }
                            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
                            {
                                arr_58 [i_14] = ((/* implicit */unsigned long long int) arr_39 [i_5]);
                                var_26 = ((int) max((var_14), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [(unsigned char)10] [1U] [i_13] [(unsigned char)18] [i_13] [i_13])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
