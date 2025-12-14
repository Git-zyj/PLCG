/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175817
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(199492188)))) / (min((var_8), (((/* implicit */unsigned int) arr_5 [i_0] [i_1]))))))) ? (max(((+(var_2))), (arr_1 [i_0]))) : (((/* implicit */long long int) (-((-(1861112507U))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        {
                            arr_15 [3ULL] [3ULL] [i_2] [i_2] [9] [(signed char)6] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)38))));
                            arr_16 [i_0] [i_2] [i_2] [i_3] [(unsigned char)2] [i_2] = ((/* implicit */short) (signed char)-60);
                        }
                    } 
                } 
                var_19 = ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(short)3] [i_0 - 1] [i_1]))))) >= ((~(949662603)))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)38)) - (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_1 - 1]))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_7))))), (max((((/* implicit */long long int) 330528919)), (arr_12 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0]))));
            }
        } 
    } 
    var_21 = ((((/* implicit */int) (((+(2075482639U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) >= ((~(((/* implicit */int) var_5)))));
    var_22 = ((/* implicit */unsigned short) (~(2075482639U)));
}
