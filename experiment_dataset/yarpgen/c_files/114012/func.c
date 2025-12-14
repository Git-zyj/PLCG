/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114012
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_11 = ((/* implicit */long long int) -2078621588);
            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) + (17449154255131322823ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [(unsigned short)12] [i_1])))))))));
            var_13 = ((/* implicit */short) ((unsigned short) (short)29352));
        }
        var_14 = ((/* implicit */int) (-(997589818578228793ULL)));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                {
                    arr_11 [i_0] [i_3] [i_0] = ((/* implicit */int) ((unsigned long long int) arr_10 [i_0] [i_0] [i_2] [i_3]));
                    arr_12 [i_0] [i_2] [i_3 + 1] [i_2] = ((((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 + 1] [i_3] [i_3 + 3])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_3] [i_3 + 1])) : (((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 1] [i_2] [i_3 + 3])));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (short)4095)))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4]))));
        var_17 = ((/* implicit */unsigned long long int) ((short) var_6));
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 24; i_5 += 2) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((signed char) arr_17 [i_5 + 1])))));
        /* LoopNest 2 */
        for (signed char i_6 = 4; i_6 < 24; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_20 [i_6 + 1]);
                    var_20 = (+(17449154255131322803ULL));
                    arr_25 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_20 [i_7]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6))) : (((((/* implicit */_Bool) arr_23 [11] [i_6] [i_6] [i_6])) ? (arr_19 [i_5 + 1] [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_6])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5]))));
                        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_5] [i_6 - 4] [21U] [i_8]))))) : (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5 - 1] [i_6] [i_7] [i_8])))))));
                        var_23 -= ((/* implicit */unsigned int) arr_27 [i_5 + 1] [i_6 - 4] [i_6 - 2] [i_6]);
                        var_24 = ((/* implicit */int) arr_24 [i_6] [i_6] [i_6 - 3]);
                    }
                }
            } 
        } 
    }
    var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((max((2120998468), (((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned char) (unsigned short)8)))))), (((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_3))) : (var_4)))));
}
