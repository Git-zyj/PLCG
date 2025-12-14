/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149418
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
    var_12 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (short)-1)) / (((((/* implicit */int) (short)32350)) / (((/* implicit */int) (unsigned char)255)))))));
    var_13 = ((/* implicit */unsigned short) (-(((long long int) (~(var_3))))));
    var_14 &= ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (unsigned char)1))));
                            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_7)))) : (max((var_9), (var_3))))) + (((((long long int) var_0)) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647LL)) ? (((/* implicit */int) arr_8 [i_3] [i_0] [i_1] [i_0])) : (((/* implicit */int) (short)-32348)))))))));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(-2147483641)))) & (((((/* implicit */_Bool) 5LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240)))))))) : (var_8)));
                /* LoopNest 3 */
                for (long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_6 [i_4] [(unsigned char)20] [i_6 + 1])))) ? (max((0LL), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_4 + 3])))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_7 [i_5] [7LL]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-32328), (((/* implicit */short) (unsigned char)13)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)28)), ((unsigned short)6)))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_5] [i_6] [i_1] = ((/* implicit */unsigned char) var_5);
                                var_19 = ((/* implicit */unsigned long long int) var_7);
                                arr_18 [(signed char)8] [i_1] [i_0] [i_4] [i_4 + 3] [9] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned long long int) 6599425416307060124LL)), (((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_4 + 3] [i_5]))))) ? ((+(arr_11 [i_1 + 2] [i_4 + 2] [i_5] [i_6]))) : (max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)243))))), (((-6599425416307060123LL) ^ (9223372036854775807LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
