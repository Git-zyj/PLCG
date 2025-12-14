/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142829
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
    var_13 &= ((/* implicit */short) ((((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_14 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_3)) : (var_6)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */short) max((var_10), (((/* implicit */unsigned long long int) (~(var_12))))));
                    arr_10 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_1 - 1] [i_2] [i_0 - 2]))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0] [i_1] [i_1]) : (var_4)))) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)79)))), (((/* implicit */int) (_Bool)1)))))));
                    arr_11 [i_2] [i_1] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned long long int) ((unsigned char) (((-(var_6))) == (((/* implicit */long long int) ((((/* implicit */_Bool) 601056737)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_1 - 1] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            {
                var_15 = ((/* implicit */int) arr_12 [i_3] [i_4]);
                arr_17 [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */int) (short)6248)) <= (((/* implicit */int) arr_15 [i_3] [i_3] [i_3])))) ? (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) arr_13 [i_4]))))) & (arr_12 [i_4 - 1] [i_4 - 1])))));
            }
        } 
    } 
}
