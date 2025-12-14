/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157788
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
    var_10 = ((/* implicit */unsigned short) (~(max((max((var_4), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */int) (unsigned short)1536)) : (((/* implicit */int) (short)-16910)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_14 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_1] [(unsigned char)10] = ((/* implicit */unsigned int) var_4);
                                arr_15 [i_1] [i_1] [(signed char)10] [(signed char)10] [(unsigned char)19] = ((/* implicit */short) ((((min((min((var_3), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) / (var_2)))))) + (9223372036854775807LL))) >> (((((unsigned int) arr_7 [i_4])) - (3461575671U)))));
                                var_11 = ((/* implicit */short) (~(((/* implicit */int) (short)16910))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (short)-16900)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16893))) : (-8626956138639723581LL)))));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_1)), ((~(16185782066938585951ULL))))))));
                                var_14 = ((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1] [i_2] [i_2] [14] [i_6]);
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((~(((long long int) var_3)))) : ((~(min((var_0), (var_0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
