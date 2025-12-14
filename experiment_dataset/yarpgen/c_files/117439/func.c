/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117439
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
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_7 [10U] [i_0 + 1] [(unsigned short)2] |= ((/* implicit */unsigned long long int) max((var_10), (arr_3 [i_0 + 2] [(unsigned short)2])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_12 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_0] [(unsigned short)12] [i_0] [i_1])) << (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_7))))) <= ((-(arr_12 [i_0 - 2] [i_1 - 2] [i_2] [i_2] [i_1 - 2] [i_4 + 1])))))) : (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((((/* implicit */int) arr_9 [i_0] [(unsigned short)12] [i_0] [i_1])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) / (((/* implicit */int) var_7))))) <= ((-(arr_12 [i_0 - 2] [i_1 - 2] [i_2] [i_2] [i_1 - 2] [i_4 + 1]))))));
                                arr_15 [i_0] [(unsigned short)10] [i_0] [i_3] [i_1] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_0 + 2])) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_0])))), (((((/* implicit */int) arr_5 [i_1 - 4] [i_1] [i_1 - 1])) % (((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_0 + 3]))))));
                                arr_16 [i_0 + 2] [7] [i_1] [i_2] [i_1] [i_4] [i_4] = arr_2 [i_0];
                                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    arr_17 [(short)1] [i_1] [(short)1] = ((/* implicit */signed char) var_8);
                    var_14 = ((/* implicit */unsigned int) (((+((-(((/* implicit */int) (_Bool)1)))))) % (((/* implicit */int) (unsigned char)255))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            {
                var_15 = ((/* implicit */short) arr_21 [i_5]);
                var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 + 3])))))) ? (((unsigned int) arr_21 [i_5 + 3])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 + 1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max(((-(var_8))), ((-(min((var_4), (var_0)))))));
}
