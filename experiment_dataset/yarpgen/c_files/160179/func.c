/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160179
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
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (short)22088)) && (((/* implicit */_Bool) (unsigned short)0))))))));
                                arr_13 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1] [i_2] [i_1] = ((/* implicit */short) ((410714522401208036ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9)))));
                                arr_14 [i_2] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_3] [i_1])) / (((((/* implicit */int) (short)22065)) * (((/* implicit */int) (short)-22084))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 ^= ((/* implicit */short) ((int) ((((/* implicit */int) min((arr_0 [i_0 + 3] [i_1 - 2]), ((_Bool)1)))) <= ((~(((/* implicit */int) (_Bool)1)))))));
                                arr_21 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) arr_9 [i_0 + 3] [i_1] [i_2] [i_5]);
                                var_16 = ((/* implicit */unsigned short) ((short) (_Bool)1));
                                arr_22 [i_2] [i_2] = ((/* implicit */short) (((+(arr_8 [i_0 - 1] [i_2] [i_6]))) > (((((/* implicit */_Bool) min((arr_19 [i_1] [i_1] [i_2] [i_5] [i_1 + 1] [i_5] [i_5]), (((/* implicit */signed char) arr_20 [i_6] [i_2] [i_0] [i_2] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_5] [i_6])) != (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5] [i_5] [i_6]))))) : ((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [i_0] [i_6] [i_1] [i_2]))))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26406)) + (((/* implicit */int) (unsigned short)9))))), (((unsigned long long int) (short)22088)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        for (signed char i_8 = 3; i_8 < 15; i_8 += 4) 
        {
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        for (long long int i_11 = 2; i_11 < 13; i_11 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_11] [i_7] [i_9] [i_8 + 1] [i_7] [i_7])) ? (arr_33 [i_7] [i_7] [i_7] [i_7 + 1]) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_10] [i_10] [i_10] [i_10]))))), (max((arr_4 [i_7] [i_8]), (((/* implicit */unsigned long long int) arr_17 [i_7 + 1] [i_8] [i_9 - 1] [i_11] [i_11] [i_11 - 1]))))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_7] [i_8 - 3] [i_10]))))) ? (((((/* implicit */int) arr_30 [i_10])) * (((/* implicit */int) arr_10 [i_7 - 1] [i_8] [i_9] [i_10] [i_11 + 1])))) : (((/* implicit */int) arr_30 [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_7 + 2] [i_11] [i_9] [i_7 + 2])) || (arr_0 [i_8] [i_11]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_11] [i_7])) ? (((/* implicit */int) arr_19 [i_7] [i_8 - 2] [i_7] [i_9] [i_10] [i_11 + 3] [i_11])) : (((/* implicit */int) arr_29 [i_10] [i_8 - 3] [i_10]))))) ? (arr_33 [i_7] [i_7] [i_7] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_9] [i_9 + 2] [i_7] [i_10])) ? (((/* implicit */int) arr_17 [i_7] [i_8] [i_9 + 2] [i_9 + 1] [i_10] [i_8])) : (((/* implicit */int) arr_10 [i_7] [i_8] [i_8] [i_10] [i_11]))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (long long int i_13 = 2; i_13 < 14; i_13 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_7] [i_9] [i_12] [i_13])))))))), (min((((long long int) arr_36 [i_7] [i_7] [i_13])), (((/* implicit */long long int) ((signed char) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7])))))));
                                arr_41 [i_8] [i_9] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_38 [i_13] [i_12] [i_9] [i_8] [i_7])) ? (((/* implicit */int) arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7 - 1])) : (((/* implicit */int) arr_29 [i_9 + 2] [i_9 + 2] [i_8])))))) ? (((/* implicit */int) ((_Bool) ((long long int) arr_25 [i_7] [i_8])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)100))))) != ((((_Bool)1) ? (((/* implicit */unsigned long long int) -3500073038159491165LL)) : (12251348353133751492ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
