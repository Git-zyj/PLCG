/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115175
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_12))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            arr_5 [i_0] [i_1 - 1] = ((/* implicit */int) (unsigned short)43023);
            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2147483647)) ? (2147483647) : (2147483647))) != (-2147483647)));
        }
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2147483647), (-2147483647)))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1] [i_2 - 2])) ? (-2147483647) : (2147483647))) : (((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 1]))));
            var_18 = ((/* implicit */unsigned char) ((2147483646) > (2147483646)));
            var_19 = ((((((/* implicit */_Bool) 2147483647)) ? (-2147483647) : (2147483647))) | ((+(((/* implicit */int) arr_2 [(_Bool)1] [i_2])))));
        }
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) -2147483647)) ? (-2147483643) : (2147483647)));
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((2147483647), (2147483642)));
                        var_22 = arr_19 [i_3] [i_3] [(signed char)4] [(signed char)18] [i_3];
                        arr_21 [i_4] = ((/* implicit */signed char) (!((((+(2147483647))) < (-2147483643)))));
                        var_23 = ((/* implicit */signed char) arr_12 [18U]);
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) (+(2147483647)));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (min((((/* implicit */int) arr_17 [i_7 + 1] [i_4] [1LL])), (max((-2147483647), (2147483646))))) : (-2147483647)));
                        arr_24 [i_3] [i_3] [i_4 + 2] [i_5] [i_3] = ((/* implicit */short) min((((/* implicit */int) ((((((/* implicit */_Bool) -2147483647)) ? (2147483647) : (2147483646))) > (-2147483627)))), (min((2147483647), (((/* implicit */int) ((unsigned short) -2147483641)))))));
                        var_26 = ((/* implicit */_Bool) min((var_26), ((!(((/* implicit */_Bool) 2147483647))))));
                        var_27 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) 2147483647)))) ? (-2147483629) : (((/* implicit */int) ((short) -2147483618)))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                var_28 ^= ((/* implicit */signed char) max(((-(((unsigned int) arr_18 [i_8] [1U] [i_8] [i_3])))), (((/* implicit */unsigned int) min((2147483647), (-2147483647))))));
                                var_29 |= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) -2147483647)))));
                            }
                        } 
                    } 
                    arr_29 [5U] [5] = ((/* implicit */long long int) 2147483647);
                    var_30 = ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) -2147483647)) ? (min((-2147483646), (-2147483646))) : ((-2147483647 - 1)))) : (2147483647));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) arr_25 [i_4 + 1]))));
                }
            } 
        } 
        var_32 &= ((/* implicit */unsigned int) -2147483647);
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 10; i_10 += 1) 
    {
        var_33 |= ((/* implicit */short) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
        var_34 = ((/* implicit */_Bool) ((short) (-(2147483646))));
    }
    for (short i_11 = 1; i_11 < 21; i_11 += 1) 
    {
        arr_34 [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) (-2147483647 - 1)));
        var_35 = ((/* implicit */unsigned char) (-(2147483647)));
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (~(-2147483643))))));
    }
}
