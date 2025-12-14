/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111464
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
    var_10 += ((/* implicit */int) (unsigned char)64);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 += ((/* implicit */unsigned char) arr_4 [i_0]);
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (~(((/* implicit */int) ((((long long int) arr_0 [i_0] [i_0])) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 3] [(unsigned char)0])))))))))));
                arr_5 [12U] &= ((/* implicit */signed char) 4169077935751549615LL);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (unsigned int i_3 = 3; i_3 < 21; i_3 += 2) 
        {
            for (long long int i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned int) (((+(4169077935751549615LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_3 + 4] [i_4 + 2])) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_4])))))))))));
                    arr_15 [i_2] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 1] [i_4 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 4] [i_4 + 3])) + (118))) - (9)))))), (((arr_6 [i_2]) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_0)) + (arr_8 [i_2]))))))));
                    arr_16 [i_3 - 2] [i_3 - 2] [i_2] = ((((/* implicit */long long int) ((unsigned int) arr_11 [i_2] [i_3 + 2]))) | (((arr_8 [i_4 - 2]) & (arr_11 [i_2] [i_4]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_23 [i_4] [i_4] |= ((/* implicit */unsigned char) 8691169402147088367ULL);
                                arr_24 [i_2] [i_3 + 3] [i_4] [i_3 + 3] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_9 [i_2] [i_5])))))) ? (((((/* implicit */_Bool) 255U)) ? (arr_8 [i_2]) : (-4169077935751549616LL))) : (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_0))))))));
                                var_15 += var_4;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
