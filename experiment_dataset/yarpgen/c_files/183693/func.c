/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183693
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [0U] [i_1 + 1])))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_2)), (var_19))) >> (((arr_3 [i_1 + 2] [i_1 + 1]) - (13374472238416944007ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))) : ((-(4294967293U)))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_1 [i_0] [(signed char)0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1] [i_1 + 2] [(unsigned short)13] [i_1] [i_2] [i_1 + 2] = ((/* implicit */short) var_10);
                            arr_12 [i_1 + 2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((((/* implicit */_Bool) 9060580207173757432ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -11)))))) : (8083074833753846641LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)166)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = var_6;
}
