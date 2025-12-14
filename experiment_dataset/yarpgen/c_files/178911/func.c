/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178911
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_10 = var_2;
                            var_11 = (-((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_2 - 2] [i_3 + 1])))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((var_4) + (2147483647))) >> (((((/* implicit */int) var_5)) + (122)))))) & (2170632461U)));
                var_13 ^= ((/* implicit */short) ((max((((/* implicit */unsigned int) ((signed char) arr_7 [i_1] [i_1] [17] [i_1]))), (((2170632461U) | (((/* implicit */unsigned int) -1847457210)))))) != (((/* implicit */unsigned int) min((arr_0 [i_0] [i_1]), (min((((/* implicit */int) var_6)), (arr_2 [i_0] [1U]))))))));
                var_14 = ((((/* implicit */_Bool) (((-(2124334829U))) % (min((2124334831U), (((/* implicit */unsigned int) var_3))))))) ? (min((arr_10 [i_0] [i_1]), ((-(arr_0 [i_0] [13]))))) : (2147483647));
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (max((min((-1), (((((/* implicit */_Bool) (unsigned char)255)) ? (-2147483647) : (((/* implicit */int) var_5)))))), ((-(((/* implicit */int) var_7))))))));
}
