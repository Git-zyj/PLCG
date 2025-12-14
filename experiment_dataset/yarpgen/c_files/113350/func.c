/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113350
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */_Bool) var_10);
                            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)51))))) ? (arr_8 [i_2] [i_1] [i_2] [i_0 + 3]) : (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) var_9)))))));
                            var_19 = (+(((int) arr_4 [i_0 - 2] [i_0 - 2] [i_0 + 1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)3828)) : (arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 1])))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3828)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)3828)) : (((/* implicit */int) (short)-5549))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_1] [i_0] [i_5])))) : (((((/* implicit */_Bool) ((int) arr_16 [i_0] [i_4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [4]))) : (var_14)))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) && (((((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 2] [i_0 - 1])) <= (-463148488)))));
                            var_22 = ((/* implicit */short) var_0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) arr_23 [i_7] [i_6] [i_1] [i_0]);
                            arr_25 [i_0] = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */unsigned long long int) var_8)) * (1613373207330068973ULL))) << (((((/* implicit */int) arr_21 [i_7] [i_6 + 1] [i_0 - 1] [i_0])) + (15351))))));
                        }
                    } 
                } 
                arr_26 [i_0] [i_0] = ((/* implicit */int) arr_4 [i_0] [(short)3] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_8])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (max((((/* implicit */unsigned long long int) arr_39 [i_12] [(unsigned short)15] [i_8] [i_8] [i_9] [i_8])), (var_6))))))));
                                arr_41 [i_8] [i_8] [i_8] [i_12] [i_8] &= ((/* implicit */unsigned int) ((((((/* implicit */int) min((arr_39 [i_10 - 2] [i_10 + 3] [i_12] [i_10 + 3] [i_10] [i_10 - 2]), (arr_39 [i_10 - 2] [i_10] [i_10] [i_10] [i_10] [i_10 - 2])))) + (2147483647))) >> (((var_8) - (1647016668)))));
                                arr_42 [i_8] [i_8] [i_10] [i_11] [i_11] = ((/* implicit */signed char) var_11);
                                var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_8])) && (((/* implicit */_Bool) arr_39 [i_8] [i_9] [i_12] [i_10] [i_11] [i_12]))));
                                var_26 = ((/* implicit */int) (+(((arr_35 [i_8] [i_9] [i_10 - 1]) | (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3828)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 4; i_13 < 17; i_13 += 2) 
                {
                    for (unsigned short i_14 = 1; i_14 < 16; i_14 += 1) 
                    {
                        {
                            var_27 = ((((var_0) >> (((/* implicit */int) arr_45 [i_14 + 2] [i_13 + 1] [i_13 - 1] [i_13 - 4])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_45 [i_14 - 1] [i_13 - 2] [i_13 - 3] [i_13 - 4]))))));
                            arr_48 [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_40 [i_8]) >> (((arr_46 [i_13 - 3] [i_13 - 3] [i_13 - 1] [i_14 + 1]) + (1677035479)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))));
                            var_28 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (2320508066U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) arr_38 [i_14] [i_13] [11ULL] [i_8])) : (((/* implicit */int) var_5)))))));
                            arr_49 [i_8] [i_13] [i_8] [i_8] = ((unsigned short) ((((/* implicit */_Bool) arr_39 [i_13 - 2] [i_13 - 2] [i_8] [i_13] [i_13] [i_13 - 4])) ? (((/* implicit */int) arr_39 [i_13] [i_13] [i_8] [i_13] [i_13] [i_13 - 3])) : (((/* implicit */int) var_9))));
                            var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 3438574503U)) ? (var_14) : (((/* implicit */unsigned long long int) ((int) (short)-26909))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
