/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163810
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
    var_10 -= ((/* implicit */unsigned long long int) var_1);
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) min((((/* implicit */int) var_8)), (var_5)))), (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)5935))))))) : (((/* implicit */long long int) var_2))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) max(((+(((/* implicit */int) arr_1 [i_0 - 2])))), (((/* implicit */int) min((arr_0 [i_0 + 3]), (arr_1 [i_0 + 3]))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_9 [i_3] [i_3] [i_2] [i_3] [i_2 + 1] [i_2] = ((/* implicit */int) var_8);
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_1 + 2] [i_2 + 1] [i_3 + 3]), (arr_8 [i_0] [i_0] [i_2] [i_3 - 2])))) ? ((+(arr_8 [i_0] [i_1 + 1] [i_2] [i_3 + 1]))) : (arr_8 [i_0 + 1] [i_1 + 3] [i_2 + 1] [i_2 + 1])));
                        arr_10 [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-84)), (((((/* implicit */int) (unsigned short)1008)) + (var_4)))));
                        arr_11 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_2] [i_2])) ? (arr_8 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 + 3]) : (arr_8 [i_0 - 2] [i_1 - 1] [i_2] [i_3 + 1]))), ((+(arr_8 [i_3 - 2] [i_3] [i_3 + 1] [i_3 + 1])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 19; i_4 += 1) 
    {
        arr_14 [i_4 - 1] = ((/* implicit */unsigned long long int) var_9);
        arr_15 [i_4 - 1] [i_4 - 1] |= ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_4 - 1]))));
        /* LoopNest 2 */
        for (short i_5 = 3; i_5 < 19; i_5 += 1) 
        {
            for (short i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 19; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_13 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_4 - 1] [i_5 - 2] [i_5 - 3] [i_6 - 1] [i_6 + 3] [i_7 - 2]))));
                                var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_19 [i_6 + 2]))));
                                var_15 += ((/* implicit */int) arr_12 [i_5]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)1008)) + (((/* implicit */int) (unsigned short)64540)))))));
                }
            } 
        } 
        arr_27 [i_4] [i_4] = arr_23 [i_4] [i_4 - 1] [16] [i_4 - 1] [i_4 - 1] [i_4 + 1];
        arr_28 [i_4] = ((/* implicit */long long int) arr_19 [i_4]);
    }
}
