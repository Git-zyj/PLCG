/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188718
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_10))))));
                var_12 = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 12; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_19 [i_4] [i_2] [(unsigned char)11] [i_5] [i_6] [7ULL] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_8))) ? (var_8) : (((/* implicit */long long int) ((unsigned int) arr_0 [i_5])))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) << (((((/* implicit */int) arr_14 [i_3] [i_4] [i_5] [i_6])) + (117)))))));
                                var_13 = arr_7 [i_2];
                            }
                        } 
                    } 
                } 
                arr_20 [i_2 + 2] [i_2 + 2] [i_2] = ((/* implicit */long long int) arr_8 [i_2 + 1] [i_3] [i_2 + 2]);
                arr_21 [i_2] [i_2] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2])))) ? (((/* implicit */int) arr_12 [i_2 - 1] [i_3] [i_2] [i_2])) : (((/* implicit */int) ((arr_10 [i_2] [i_2 - 2] [i_2]) || (((/* implicit */_Bool) var_10)))))));
                var_14 = ((((/* implicit */_Bool) (-(((((/* implicit */int) var_6)) >> (((var_3) - (1947054625)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_3]))) : (var_9));
                arr_22 [i_2] = ((short) ((arr_10 [i_2] [i_3] [i_3]) ? (((arr_11 [i_2] [i_2] [i_3] [i_2]) & (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            {
                arr_27 [i_8] [i_8] &= ((/* implicit */short) var_2);
                arr_28 [i_7] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (arr_0 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [8] [i_8]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 4; i_9 < 14; i_9 += 3) 
    {
        for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            {
                var_15 ^= ((/* implicit */unsigned short) (+(((unsigned long long int) var_8))));
                var_16 -= ((/* implicit */signed char) ((((0U) % (6U))) >> (((((/* implicit */int) arr_1 [i_9 - 3] [i_9 - 2])) - (24604)))));
            }
        } 
    } 
    var_17 = var_1;
}
