/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151294
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
    var_12 = ((/* implicit */signed char) ((32512U) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
        {
            arr_6 [i_1] [10] [i_1] &= ((/* implicit */int) (unsigned short)48493);
            var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
            var_14 += ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0] [i_1])) / (((/* implicit */int) arr_3 [i_0] [i_1]))));
            var_15 = ((/* implicit */_Bool) arr_2 [2LL]);
        }
        for (int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_8 [(short)4])) << (((8294629658137923586LL) - (8294629658137923573LL)))))));
            var_17 = ((long long int) arr_4 [i_0]);
            var_18 = ((/* implicit */unsigned long long int) ((unsigned short) -8398485607990401312LL));
            /* LoopNest 2 */
            for (unsigned char i_3 = 3; i_3 < 14; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_16 [i_0] [i_0] [i_2] [1U] [12ULL] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) ((1ULL) << (((1225000906981636070LL) - (1225000906981636040LL))))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1])) ? (((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 1] [12] [i_3 - 1])) : (((/* implicit */int) arr_13 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1]))));
                        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) 63488)) || (((/* implicit */_Bool) -8294629658137923587LL))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned short i_5 = 4; i_5 < 14; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((arr_22 [i_5 - 2] [i_5 - 3]) / (arr_14 [i_5 + 1] [i_5 - 4]))))));
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_12 [9U])) >= (var_9)));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 2; i_8 < 14; i_8 += 1) 
                        {
                            var_23 = (_Bool)1;
                            var_24 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_1))))));
                        }
                        for (unsigned char i_9 = 4; i_9 < 12; i_9 += 4) 
                        {
                            arr_33 [15U] [i_5] [15U] [i_6] [i_6] [i_7] [i_9 + 2] = ((/* implicit */unsigned char) (-(var_10)));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) 3700631628U))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_10 [i_5] [i_5] [i_5 - 1] [i_6])) * (11485752009903148332ULL)));
                        }
                    }
                } 
            } 
        } 
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_17 [i_0] [(short)6]) : (((/* implicit */int) (_Bool)1))));
    }
}
