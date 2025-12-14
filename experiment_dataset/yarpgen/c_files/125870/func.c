/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125870
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
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 4; i_2 < 11; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned long long int) arr_3 [i_1 - 1]);
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_7 [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned int) arr_7 [i_0]);
                                var_15 = ((/* implicit */signed char) ((unsigned char) ((short) arr_1 [i_0] [i_1 - 1])));
                                arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_2 - 3] [i_3 - 1] [i_4] = ((/* implicit */unsigned short) ((_Bool) arr_7 [i_0]));
                                var_16 = ((/* implicit */short) ((unsigned long long int) arr_0 [i_0]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        for (signed char i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) ((unsigned short) arr_4 [i_0] [i_0] [i_0]))));
                                arr_17 [i_1 - 1] [i_1 + 2] [i_0] [i_5 - 3] [i_6 - 1] [i_0] = ((unsigned short) arr_11 [i_6 + 4] [i_5 + 2] [i_0] [i_2 - 1] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_7] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0] [i_1 - 1]));
                            var_18 = arr_7 [i_0];
                            /* LoopSeq 2 */
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                var_19 = ((/* implicit */_Bool) ((unsigned short) ((_Bool) ((unsigned short) arr_24 [i_0] [i_7] [i_0] [i_8 + 1] [i_9]))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((short) ((unsigned short) arr_21 [i_1 - 1]))))));
                                arr_26 [i_9] [i_0] [i_8 + 1] [i_7] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((signed char) arr_5 [i_0] [i_7] [i_9])));
                                arr_27 [i_8 + 1] [i_0] = ((/* implicit */short) ((unsigned int) ((short) arr_10 [i_9] [i_7] [i_1 + 1])));
                            }
                            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                            {
                                arr_31 [i_0] [i_1 + 1] [i_7] [i_0] [i_10] = ((/* implicit */short) arr_0 [i_7]);
                                arr_32 [i_0] [i_1 + 1] [i_7] [i_0] [i_10] = ((/* implicit */unsigned long long int) ((short) arr_21 [i_0]));
                                arr_33 [i_0] [i_7] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_7 [i_10]));
                                var_21 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)215));
                            }
                        }
                    } 
                } 
                arr_34 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((_Bool) ((unsigned char) arr_8 [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((unsigned short) var_1));
    /* LoopNest 2 */
    for (unsigned char i_11 = 1; i_11 < 22; i_11 += 4) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                arr_40 [i_11] [i_11] = ((/* implicit */unsigned int) arr_37 [i_12] [i_11 + 1]);
                arr_41 [i_11] [i_12] = ((/* implicit */unsigned long long int) ((short) 9223372036854775807LL));
                arr_42 [i_11] [i_12] = ((/* implicit */unsigned long long int) ((unsigned short) arr_39 [i_11 - 1]));
                arr_43 [i_11] [i_12] = ((/* implicit */unsigned int) ((unsigned char) ((short) arr_36 [i_11 + 1] [i_11])));
                arr_44 [i_11] [i_11 + 1] [i_11] = ((/* implicit */unsigned char) arr_37 [i_11 - 1] [i_12]);
            }
        } 
    } 
}
