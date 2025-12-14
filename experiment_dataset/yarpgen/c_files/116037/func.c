/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116037
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (!(((arr_8 [i_3] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_3] [i_0] [i_0])))))));
                                arr_14 [6U] [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_0]))));
                                var_17 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)4095)) ? (359393015U) : (2530181417U)))), (arr_3 [i_0] [i_0])));
                                var_18 = ((/* implicit */_Bool) arr_11 [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                arr_26 [i_0] [(unsigned char)2] [i_0] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1 - 1] [i_1 - 1] [14LL])) ? (((/* implicit */int) ((arr_23 [9] [9] [i_2] [i_2] [12U] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_8]))));
                                var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_21 [i_2] [i_7])) == (((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) var_9);
                    arr_27 [(unsigned char)13] [(unsigned char)13] [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) var_15)) || (((/* implicit */_Bool) (short)-2383))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 12; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_23 [i_9] [i_10] [i_10] [i_10] [i_11] [i_12]))));
                            arr_38 [i_11] [6ULL] = ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
                var_22 ^= (+(((/* implicit */int) ((-256407278294395752LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 134217600U)) || (((/* implicit */_Bool) 3935574281U))))))))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    for (unsigned short i_14 = 3; i_14 < 12; i_14 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((((var_13) <= (((/* implicit */long long int) ((((/* implicit */int) (signed char)4)) << (((133169152ULL) - (133169124ULL)))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (var_9)));
                            arr_44 [i_14] [i_10] = ((/* implicit */_Bool) ((unsigned long long int) (~(var_2))));
                        }
                    } 
                } 
            }
        } 
    } 
}
