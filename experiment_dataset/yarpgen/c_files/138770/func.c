/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138770
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2 + 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65521)), (((((/* implicit */int) (unsigned short)65534)) | (((/* implicit */int) var_15))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)27959)) + (((/* implicit */int) arr_1 [i_3])))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65502)))))))));
                            arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_16);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4]))) | (arr_4 [i_0]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 23; i_9 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_21 [i_0] [i_8] [i_9 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_9 - 1] [i_9 - 3]))) : (((unsigned int) var_14))))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned short)7249))));
                                var_23 = ((/* implicit */unsigned char) min((arr_9 [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_8]), (((/* implicit */unsigned int) min(((unsigned short)65521), (((/* implicit */unsigned short) arr_27 [i_8] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_9 + 1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    for (unsigned short i_11 = 1; i_11 < 24; i_11 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_6 [i_1] [i_10] [i_11 - 1]))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_10] [i_11 - 1])))))));
                            var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) var_12);
                                var_28 = ((/* implicit */unsigned long long int) arr_0 [i_15]);
                                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_2 [i_13] [i_13])))))))));
                                var_30 = ((/* implicit */unsigned int) max((var_30), (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_13] [i_13] [i_16] [i_16] [i_13] [i_12])) < (((/* implicit */int) (unsigned char)46))))), (arr_33 [i_15])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    for (unsigned int i_18 = 2; i_18 < 20; i_18 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)5815)) : (((/* implicit */int) var_4))))))) && ((!(((/* implicit */_Bool) arr_22 [i_18 + 3])))))))));
                            var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                            arr_50 [i_12] [i_12] [i_12] [i_12] = (-(((arr_45 [i_18 + 3] [i_18 + 3] [i_18 + 3] [i_12] [i_18 + 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7253581201417579198ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_18 - 2] [i_18] [i_18 + 3] [i_18] [i_18 + 2] [i_18] [i_18 + 1])) ^ (((/* implicit */int) arr_27 [i_18 - 1] [i_18] [i_18 + 1] [i_18 + 2] [i_18] [i_18 - 1] [i_18 - 2]))))) : ((+(arr_9 [i_18 + 3] [i_13] [i_17] [i_12])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
