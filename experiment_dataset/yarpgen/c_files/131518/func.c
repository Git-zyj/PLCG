/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131518
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
    var_15 = ((/* implicit */short) ((var_10) >> (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((unsigned int) var_4))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_2)) : (-7377904269695721155LL))))) - (43973165LL)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min(((signed char)-98), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) : ((~(((unsigned int) var_10))))));
                    arr_8 [i_0] [i_1] [i_0] [(unsigned char)20] = ((/* implicit */int) ((4155491689U) >> (((((((/* implicit */_Bool) (short)17527)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) : ((+(5U))))) - (221U)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (arr_4 [i_0]) : (((/* implicit */int) var_9))));
                                var_17 = ((/* implicit */unsigned int) arr_1 [i_1]);
                                var_18 ^= min((((/* implicit */unsigned int) (short)29302)), (((((unsigned int) 3749243031U)) >> (((min((var_7), (((/* implicit */unsigned int) var_1)))) - (26U))))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) 3547289285U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            {
                var_20 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_5]) <= (747678024U))))) <= (((3391390344U) << (((3630404658U) - (3630404638U)))))));
                var_21 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -5204138314793962209LL)))))));
            }
        } 
    } 
    var_22 = 245002399U;
    /* LoopNest 2 */
    for (long long int i_7 = 4; i_7 < 10; i_7 += 3) 
    {
        for (unsigned char i_8 = 4; i_8 < 11; i_8 += 4) 
        {
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(min((747678023U), (3630404666U))))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_7 + 2] [i_7 + 2] [i_8 - 4]))))) ? (((long long int) arr_23 [i_7 - 1] [i_7 - 4] [i_7])) : (((/* implicit */long long int) min((10), (((/* implicit */int) arr_23 [i_7 - 2] [i_7 + 2] [i_8 + 1])))))));
                var_25 = ((/* implicit */unsigned int) ((var_3) >> (((5204138314793962214LL) - (5204138314793962192LL)))));
                /* LoopNest 3 */
                for (unsigned int i_9 = 3; i_9 < 11; i_9 += 3) 
                {
                    for (short i_10 = 2; i_10 < 10; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            {
                                var_26 *= 1871470298U;
                                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_9)))));
                                var_28 = ((/* implicit */short) (((-(((/* implicit */int) arr_30 [i_8 - 3] [i_9 - 3] [i_9])))) == (((((/* implicit */int) (short)32756)) >> (((((/* implicit */int) (unsigned char)62)) - (57)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
