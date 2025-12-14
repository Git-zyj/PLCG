/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184385
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (-(var_6))))));
                            arr_11 [(unsigned char)14] [(unsigned short)13] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_6 [15ULL] [i_1] [i_2] [i_3]);
                            var_12 -= ((/* implicit */unsigned long long int) var_10);
                            arr_12 [i_0] [i_0] = ((/* implicit */signed char) var_8);
                            arr_13 [i_0] [i_0] [i_1] [i_0] [(unsigned short)6] [i_3] = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1))))))))));
                            var_14 = ((/* implicit */int) max(((~(var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (arr_1 [i_0 + 1] [i_0 + 2]) : (((/* implicit */int) (unsigned char)91)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 16; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned char) (~((-(arr_30 [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_7] [i_10])))));
                                var_16 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_30 [i_9 + 1] [i_9] [i_9 + 1] [i_9] [i_9 - 1])))), ((!(((/* implicit */_Bool) var_10))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 2) 
                    {
                        {
                            arr_39 [i_12] [i_11] [(unsigned char)2] [i_12] [i_11] [(unsigned short)16] = ((/* implicit */unsigned int) (-(arr_16 [i_12 + 1] [i_12 + 1])));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_16 [i_11] [i_7]))));
                            var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) : ((+(var_8)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_3);
}
