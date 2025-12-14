/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146946
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned int) arr_7 [i_0]);
                            var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 2])) >> (((((/* implicit */int) arr_0 [i_0 - 3])) - (37597)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) : (min((((/* implicit */unsigned int) (signed char)-10)), (743366193U)))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_14))));
                        }
                    } 
                } 
                var_18 += ((/* implicit */unsigned short) var_10);
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)20262))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))) <= (var_4))))));
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) arr_5 [i_0]);
                            arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_12 [9ULL] [9ULL] [(unsigned char)0] [i_5])) ? (((/* implicit */int) arr_9 [i_0] [(unsigned short)0] [i_4] [i_5])) : (((/* implicit */int) (signed char)72)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_13)))) - (95)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (var_9))), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_5))))))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)0] [i_1] [i_0]))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned int) var_9);
    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (var_12)));
}
