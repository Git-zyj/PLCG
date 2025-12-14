/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139116
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 3) 
                            {
                                arr_14 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_3);
                                var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
                                arr_15 [i_2] [i_1] [i_2] [16] [i_4] [i_4] = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2 + 1]);
                            }
                            for (signed char i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0] [i_2] [i_2 - 1] [i_3] [i_5] = ((/* implicit */short) var_5);
                                var_11 = ((/* implicit */unsigned char) (-((~(arr_7 [i_0] [i_3 + 1] [i_2 + 1])))));
                                arr_21 [i_0] |= ((/* implicit */_Bool) var_5);
                                var_12 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_8 [i_0] [(unsigned short)14] [i_0]))))));
                                var_13 |= var_8;
                            }
                            for (signed char i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                            {
                                arr_25 [i_6] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_2]))));
                                arr_26 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_2 - 2] [i_2] [i_2] [i_2] [i_2]))));
                            }
                            arr_27 [i_2] [i_2 - 2] [i_2] [i_2] = ((/* implicit */unsigned char) (+((-(2680999101U)))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_1]);
                arr_28 [9U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_0] [i_1] [i_1]))));
                var_15 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))))));
                var_16 *= ((/* implicit */short) (~((-(arr_3 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        {
                            arr_38 [i_7] [i_7] [i_7 - 2] [i_9] = ((/* implicit */unsigned int) var_5);
                            /* LoopSeq 1 */
                            for (unsigned char i_11 = 4; i_11 < 9; i_11 += 1) 
                            {
                                var_17 = ((/* implicit */int) var_1);
                                var_18 -= ((/* implicit */unsigned long long int) arr_39 [i_11 + 3] [i_8] [i_9 + 2] [i_7 - 2] [i_9 + 2]);
                                var_19 = ((/* implicit */unsigned char) arr_40 [i_7] [i_11 + 3] [i_9 - 2] [i_7] [i_7]);
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_22 [i_8] [i_8] [i_8] [i_7 - 3] [i_7 - 3] [i_8]))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 3; i_12 < 9; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        {
                            arr_47 [i_7] [3] [i_12] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_1 [i_12 - 1]))))));
                                arr_51 [i_7] [i_8] [i_7] [i_13] [i_7] = ((/* implicit */_Bool) var_9);
                                arr_52 [i_14] [i_8] [i_12] [i_8] [i_12] &= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_45 [i_7 - 1] [i_8] [i_14]))))));
                                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_39 [i_12 - 1] [i_12 - 1] [i_12 + 2] [i_12] [i_12]))))));
                                var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_8] [i_12] [i_13]))));
                            }
                            var_24 = ((/* implicit */long long int) var_6);
                            var_25 &= ((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned char)235))))));
                        }
                    } 
                } 
                arr_53 [i_7] = ((/* implicit */_Bool) arr_5 [i_7] [i_7 + 2] [i_7]);
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_8))));
            }
        } 
    } 
}
