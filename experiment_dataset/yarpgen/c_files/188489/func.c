/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188489
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned char) (unsigned short)0))) ? (min((arr_0 [i_0 - 3] [i_0]), (((/* implicit */unsigned int) (unsigned char)255)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) arr_2 [i_1 + 1]))));
                    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_0 - 4]))))) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_7 [i_0 + 2]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 13; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_10 [(unsigned char)10] [i_4]);
                    arr_17 [i_3] [10LL] [i_3] &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) arr_15 [i_3])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            {
                arr_24 [i_6] [i_7] = ((/* implicit */unsigned char) (unsigned short)0);
                var_15 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_7]))))) ? ((+(1033808245U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_6] [i_6] [i_6])) <= (((/* implicit */int) arr_21 [i_7])))))));
            }
        } 
    } 
}
