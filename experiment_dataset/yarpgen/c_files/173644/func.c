/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173644
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
    var_15 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((var_8) / (((/* implicit */int) arr_2 [i_0 - 4] [i_0]))));
                            var_17 = ((/* implicit */short) var_4);
                            var_18 = var_1;
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((var_5), (max((var_6), (arr_8 [i_0 - 4] [i_0 + 1])))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)47493)) <= (((/* implicit */int) var_2)))))) : (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)856)))))))) ? (arr_11 [i_1] [i_4] [i_5]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_0 - 3] [i_0] [i_0 - 4])))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (((((/* implicit */long long int) ((/* implicit */int) (signed char)64))) & (var_7))))));
                /* LoopNest 3 */
                for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) arr_6 [i_1] [i_6] [i_7] [i_8])))), (((/* implicit */int) ((short) 18446744073709551615ULL)))))) ? (((((/* implicit */_Bool) 1ULL)) ? (max((((/* implicit */long long int) var_9)), (arr_0 [i_1] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                                arr_25 [i_0] [i_1] [i_1] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_11)) ? (arr_5 [i_0 + 1] [i_6 + 1] [4]) : (arr_5 [i_0 - 1] [i_6 + 3] [14LL]))), (min((var_4), (arr_5 [i_0 + 1] [i_6 - 2] [(unsigned short)5])))));
                                var_23 = ((/* implicit */unsigned short) arr_6 [i_8] [i_7] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
