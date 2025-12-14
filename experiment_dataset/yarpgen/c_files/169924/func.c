/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169924
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_11 -= ((/* implicit */long long int) var_9);
                            var_12 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                            var_13 -= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 2])) ^ (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 2]))))));
                            arr_11 [i_3] [i_2] [(unsigned char)0] [i_0] = ((/* implicit */short) (~(((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_6 [i_2 - 1]))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_7))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 22; i_6 += 2) 
            {
                {
                    arr_20 [i_4] [i_6] = (+((-(((/* implicit */int) arr_19 [i_6 + 1] [i_6] [i_6 + 2] [21])))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_7)), ((+(min((((/* implicit */unsigned long long int) arr_16 [i_5])), (var_6))))))))));
                    var_16 -= ((/* implicit */short) min((arr_17 [i_4] [10LL] [i_6 + 1] [i_5]), (((((/* implicit */_Bool) ((arr_13 [i_6]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [(unsigned short)15] [i_6 + 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_6])) & (((/* implicit */int) arr_18 [i_4] [i_5] [i_6 - 1]))))) : ((~(arr_13 [i_6])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        for (signed char i_8 = 1; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) var_10);
                                var_18 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) ((unsigned char) arr_22 [i_5] [i_8]))), (arr_22 [i_5] [i_8])))));
                                arr_26 [i_4] [i_5] [i_5] [i_7] [i_8] |= min((min((((var_6) >> (((arr_16 [i_6 + 2]) - (2017739278))))), (((/* implicit */unsigned long long int) arr_14 [i_6 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_4] [i_5] [i_6]))))) <= (arr_22 [i_8 - 1] [i_6 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
