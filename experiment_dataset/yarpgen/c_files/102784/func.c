/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102784
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
    var_17 = var_8;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */short) ((arr_2 [16U]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
        var_19 ^= ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(-1360027510)));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (short)-1546))));
        var_21 = ((/* implicit */unsigned char) arr_2 [i_0]);
    }
    for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        var_22 |= ((/* implicit */unsigned short) ((max((max((((/* implicit */unsigned long long int) var_14)), (arr_1 [0ULL] [0ULL]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1 - 2]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (6106310585712288505ULL))))))))));
        arr_6 [i_1] = ((/* implicit */short) arr_4 [i_1 - 1] [i_1]);
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1])) ? (arr_4 [i_1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 - 2]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned int) arr_2 [20U]);
            arr_10 [(_Bool)1] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (arr_5 [i_2]));
            var_25 = ((/* implicit */long long int) (+(arr_4 [i_1 - 1] [i_1 - 1])));
            arr_11 [i_1] [i_1 - 1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_2]))) : (arr_5 [i_1])))) ? (((/* implicit */unsigned long long int) (+(var_6)))) : (arr_2 [14LL])));
            var_26 = arr_5 [i_1];
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_27 += ((/* implicit */_Bool) ((short) (((_Bool)1) || (arr_13 [(_Bool)1]))));
            arr_14 [i_1 - 2] [(_Bool)1] [1U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))), (arr_2 [12])));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_28 ^= ((/* implicit */_Bool) arr_1 [i_5] [(unsigned char)22]);
                        var_29 *= ((/* implicit */unsigned char) (+(17811954465540460335ULL)));
                        var_30 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2]))));
                        arr_23 [i_6] [i_1] = (!(((/* implicit */_Bool) ((4277829657U) << (((arr_1 [i_6] [i_6]) - (15165269626688170361ULL)))))));
                    }
                } 
            } 
            arr_24 [i_1 - 2] [i_1] = arr_19 [i_1 + 1] [i_4] [i_4];
            var_31 += ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            arr_25 [i_1 - 1] [i_4] [i_1 - 1] = ((/* implicit */short) (!(arr_16 [i_1 - 2])));
        }
    }
}
