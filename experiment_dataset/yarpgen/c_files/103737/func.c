/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103737
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0 - 1] [i_0 - 1] = ((/* implicit */short) arr_0 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (-(((arr_0 [i_0 + 1]) ? (((/* implicit */long long int) (+(var_5)))) : (min((arr_1 [i_0]), (var_7)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_8 [i_0 - 1]))) ? (((2495524325629166321ULL) * (((/* implicit */unsigned long long int) 2092916179U)))) : (min((arr_8 [i_0 + 1]), (arr_8 [i_0 - 1])))));
                    var_14 = ((/* implicit */short) arr_2 [i_0]);
                    var_15 = ((/* implicit */long long int) arr_7 [i_0 + 1] [i_0 + 1]);
                    var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4279266774U)) ? (((/* implicit */int) ((((/* implicit */_Bool) 2092916185U)) && (((/* implicit */_Bool) 15951219748080385293ULL))))) : ((~(((/* implicit */int) (signed char)24))))))) != (2495524325629166321ULL));
                }
            } 
        } 
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_3 - 1]) ? (((/* implicit */int) arr_2 [i_3 - 1])) : (((/* implicit */int) arr_2 [i_3 - 1]))))) ? (((((/* implicit */_Bool) arr_14 [i_3])) ? (((arr_8 [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))) : (((/* implicit */unsigned long long int) ((arr_0 [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3 - 1]))) : (arr_1 [i_3 - 1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_13 [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3]))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3])))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                for (short i_6 = 2; i_6 < 9; i_6 += 1) 
                {
                    {
                        var_17 ^= ((/* implicit */unsigned long long int) max(((+(((var_12) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_5] [i_6])) : (((/* implicit */int) arr_9 [i_3 - 1])))))), (((/* implicit */int) arr_3 [i_4]))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_18 = (+(((/* implicit */int) (signed char)0)));
                            var_19 ^= ((/* implicit */long long int) arr_11 [i_7 + 1] [i_6 + 2] [i_4] [i_3 - 1]);
                        }
                        arr_24 [4U] [i_4] [i_3] [i_6 + 1] = ((/* implicit */unsigned short) (+(arr_8 [i_3])));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_9 [i_3 - 1]))))));
                        arr_31 [i_3] [i_10] = ((/* implicit */signed char) arr_26 [i_3 - 1] [i_3] [i_3]);
                        var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)53827)), (-8LL))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) + ((+(((/* implicit */int) ((short) var_1)))))));
    var_23 = ((/* implicit */short) (~(var_8)));
}
