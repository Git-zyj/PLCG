/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169176
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
    var_20 = ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [20] [i_1 - 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 2])) ? (arr_1 [i_1 + 1] [i_1 + 2]) : (2060588320U)))) || (((/* implicit */_Bool) min((1277712444U), (arr_1 [i_1 + 1] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned int) arr_3 [8LL] [8LL])), (arr_7 [i_0] [i_1] [8ULL] [(short)20] [10] [14U]))))) >= (((((/* implicit */_Bool) arr_7 [i_2] [i_0 - 1] [i_2 - 1] [24U] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_11))) : (((/* implicit */unsigned long long int) arr_5 [(unsigned short)20]))))));
                            arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 940813356999561115ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85))) : (4294967273U)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (short)18516)), (arr_5 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)52)) ? (arr_9 [i_0 + 1] [i_0]) : (arr_9 [i_0 + 1] [i_0])))));
                            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_5 [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_5);
    var_24 = ((/* implicit */int) var_13);
}
