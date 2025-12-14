/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165390
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
    var_20 = 2147483647;
    var_21 = ((/* implicit */int) var_19);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) ((4294967287U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526)))))), (var_4)))));
                                var_23 = ((/* implicit */unsigned long long int) (((+(((var_10) ? (((/* implicit */long long int) var_16)) : (arr_7 [i_0] [i_1] [i_4 - 1]))))) <= (((/* implicit */long long int) (~(((/* implicit */int) min((arr_2 [i_2] [i_2]), (arr_3 [i_2 - 1])))))))));
                            }
                        } 
                    } 
                    var_24 *= arr_12 [i_0] [i_2] [i_2 + 1] [i_0] [i_0] [i_0];
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (min((var_17), (((/* implicit */unsigned long long int) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 8; i_7 += 1) 
                {
                    for (unsigned short i_8 = 3; i_8 < 7; i_8 += 2) 
                    {
                        {
                            arr_24 [8] [i_6] = ((/* implicit */long long int) arr_6 [i_6] [i_7] [i_8]);
                            var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_23 [i_7])))) ? ((-(((/* implicit */int) arr_11 [i_7])))) : (((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */int) arr_13 [i_5] [i_6] [i_7] [i_7] [i_8])) : (arr_8 [(unsigned short)17] [i_6] [i_7])))))));
                            var_27 = ((/* implicit */unsigned char) arr_13 [i_5] [i_6] [i_7] [i_7 + 3] [i_8]);
                            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_5]))) - (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_4)))) ? ((+(min((2147483643), (((/* implicit */int) (_Bool)1)))))) : (max((min((((/* implicit */int) (unsigned short)0)), (-56073481))), (((((/* implicit */int) arr_5 [i_5])) - (((/* implicit */int) arr_11 [i_6]))))))));
                            var_29 = ((/* implicit */unsigned short) var_5);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
            }
        } 
    } 
}
