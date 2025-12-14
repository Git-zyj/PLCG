/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165778
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
    var_20 = ((/* implicit */short) (+(((/* implicit */int) var_17))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2 - 1] = ((unsigned int) min((arr_0 [(short)7] [i_0 + 1]), (arr_0 [i_0] [i_0 + 1])));
                    var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned int) max((var_13), (((/* implicit */int) arr_5 [i_1]))))) : (arr_2 [i_0 + 3] [(unsigned short)6])))), (min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1366302965)) / (22U))))))));
                    arr_11 [i_0] [(unsigned char)6] [(unsigned char)6] [i_0] = ((/* implicit */unsigned int) max(((unsigned short)2959), ((unsigned short)65521)));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 3])) ? (arr_0 [i_2 + 3] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))));
                    arr_12 [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 2]))) ^ (var_14))))) / ((~(arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_2])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned int) var_7);
                arr_17 [i_3] [i_4] |= ((var_0) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7908)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2970)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [8LL] [i_4 - 2] [i_4] [i_4])) << (((-770717933) + (770717946)))))) : (var_14))) - (696267U))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    for (short i_6 = 2; i_6 < 8; i_6 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (short)9070);
                            arr_23 [i_6] [(short)1] [(short)1] = ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_3] [(unsigned short)3]));
                        }
                    } 
                } 
            }
        } 
    } 
}
