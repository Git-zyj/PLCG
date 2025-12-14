/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10127
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
    var_10 = ((/* implicit */long long int) var_3);
    var_11 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)174)) ? (((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0]))) ? ((+(6708330001460565491ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_12 [i_1] [i_3] = ((/* implicit */signed char) (((+(((/* implicit */int) (short)-16306)))) > (((/* implicit */int) max(((unsigned short)13093), (((/* implicit */unsigned short) arr_8 [i_0] [i_2] [i_1 - 1] [i_3])))))));
                            var_12 = ((/* implicit */short) ((((((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) + (((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])))) ^ (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 - 1] [(_Bool)1] [i_1]))))));
                            var_13 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_4 [i_1 - 1] [i_3])))) + (((/* implicit */int) max((arr_6 [i_0] [i_1] [i_1]), ((unsigned short)65532))))));
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) arr_4 [i_3] [i_0])) : (((/* implicit */int) arr_4 [(short)5] [i_2])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) var_4)))))) - (((/* implicit */int) (unsigned short)65535)))))));
}
