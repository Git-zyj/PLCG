/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152865
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) 2370784939U);
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_5))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_5] [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) max((arr_0 [i_1] [i_4]), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1924182344U)))))))), (var_12)));
                                arr_18 [i_0] [i_5] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */signed char) ((var_5) / (((/* implicit */long long int) var_16))));
                                var_20 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]);
                                var_21 = ((((/* implicit */_Bool) ((arr_10 [i_0] [i_0] [i_0] [i_1 + 2]) / (min((arr_10 [i_0] [i_0] [i_8] [i_8]), (((/* implicit */unsigned int) var_8))))))) ? (1924182344U) : (((/* implicit */unsigned int) arr_1 [i_0])));
                            }
                        } 
                    } 
                } 
                arr_28 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_0] [i_1 + 2] [i_0] [i_0] [i_0]))))), (arr_22 [i_1 + 2] [i_1 + 2] [i_1])))) ? (((arr_4 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4425))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (max((((/* implicit */int) (short)4423)), (var_16))) : ((-(((/* implicit */int) arr_26 [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        for (int i_11 = 2; i_11 < 17; i_11 += 2) 
        {
            {
                arr_34 [i_10] [i_11] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (short)-4427)), (var_4))) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_33 [i_10] [i_10] [i_10]))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 1; i_12 < 17; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((var_14) - (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                            arr_40 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) var_13);
                            var_23 = ((/* implicit */short) arr_38 [i_11] [i_12] [i_10]);
                            arr_41 [i_10] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_37 [i_12 - 1] [i_11 + 1] [i_12] [i_11 + 1] [i_13] [i_12]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))))) ? (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) arr_32 [i_10] [i_12] [i_13])) : (((/* implicit */int) arr_39 [i_11] [i_11] [i_10] [i_13] [i_11 - 2])))) : (((arr_38 [i_10] [i_10] [i_10]) / (((/* implicit */int) var_12)))))) - (((/* implicit */int) ((signed char) (unsigned char)141)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
