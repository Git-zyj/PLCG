/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169753
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) var_4);
                var_15 = ((/* implicit */int) min((var_15), (min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_13)))), ((+(339146191)))))));
                var_16 ^= ((/* implicit */unsigned short) 2770380462U);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~(var_11)));
    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_7)) : (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) < (var_8))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8327653742124383882LL))))), (min((((/* implicit */unsigned long long int) 2770380462U)), (var_1)))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        for (unsigned short i_3 = 4; i_3 < 14; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 15; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_16 [i_6] [i_6] [i_2] [i_4] [i_2] [i_3] [8ULL] = ((/* implicit */short) min((((((/* implicit */int) ((short) var_2))) != (((/* implicit */int) var_10)))), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_7)) : (arr_11 [i_2] [i_2] [i_4] [i_5]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_7))))))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) 16056825U))));
                                var_20 -= ((((var_9) > (var_8))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_2]), (((/* implicit */long long int) arr_10 [6] [i_4] [i_5] [i_6]))))) ? (arr_9 [i_2 - 1]) : (var_7)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65535)), (140644947U)))) ? (((((/* implicit */_Bool) 4154322341U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) : (var_11))) : (((/* implicit */unsigned long long int) ((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                                arr_17 [i_2] [i_5 - 2] [7ULL] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_14 [i_6 - 2] [i_2] [i_3] [i_2] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1236333568U)) ? (arr_11 [i_2] [i_3 + 2] [i_4] [i_5]) : (((/* implicit */long long int) arr_10 [i_2] [i_3] [i_4] [i_4])))))))) ? (((((/* implicit */unsigned long long int) min((117852040U), (arr_8 [i_6] [i_6 - 1])))) ^ (((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2 + 1] [i_4] [i_5])) ? (var_8) : (((/* implicit */unsigned long long int) arr_13 [i_6] [i_2] [i_3 - 2] [i_2])))))) : (min((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_6] [i_2])) : (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_1 [14]) : (((/* implicit */long long int) var_3)))))))));
                                arr_18 [i_2] [i_3] [i_4] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */int) (+(2770380471U)));
                            }
                        } 
                    } 
                    arr_19 [i_2 + 1] [i_3] [i_2] [i_4] = ((/* implicit */long long int) arr_2 [i_2]);
                    var_21 = ((/* implicit */unsigned int) arr_12 [i_2] [i_3] [i_3] [i_2]);
                }
            } 
        } 
    } 
}
