/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145114
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (((int) (~(((/* implicit */int) var_11)))))));
    var_17 *= ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */_Bool) (short)32767);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) arr_2 [i_2]);
                            var_19 ^= ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) var_2)))));
                        }
                    } 
                } 
                var_20 |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_10)) ? (6359359110290470034LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
            }
            for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-19)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1]))))) : (((/* implicit */int) ((arr_3 [i_5] [i_0 + 1]) >= (((/* implicit */int) arr_17 [i_0])))))));
                arr_18 [i_0 + 1] [i_1] [i_1] = ((/* implicit */int) ((max((((/* implicit */long long int) max(((unsigned short)17474), (var_5)))), (arr_16 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))) / (((/* implicit */long long int) max((((var_6) ? (arr_3 [i_5] [i_0 + 1]) : (((/* implicit */int) var_2)))), (((/* implicit */int) (short)1199)))))));
            }
            arr_19 [i_1] = ((/* implicit */signed char) var_5);
            var_23 = ((((/* implicit */_Bool) max((arr_12 [i_0 + 1] [i_1] [i_0] [i_1] [i_0 + 1]), (arr_12 [i_0 + 1] [i_1] [i_0] [i_1] [i_0 + 1])))) ? (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)48061)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))) >= (arr_16 [i_0 + 1] [i_1] [i_0] [i_0]))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_22 [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) -416304114))) ? (((/* implicit */long long int) max((arr_3 [i_0 + 1] [i_0 + 1]), (((/* implicit */int) arr_15 [(unsigned short)6] [(unsigned short)6]))))) : (max((arr_16 [i_6] [i_6] [i_6] [i_0 + 1]), (arr_16 [i_0 + 1] [i_0] [i_0] [i_0 + 1])))));
            var_24 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (unsigned short)17492))))) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0])) : (max((((/* implicit */int) (unsigned short)48062)), (-1839171447))))));
        }
        for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_25 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_0 + 1] [i_0 + 1])), (max(((unsigned short)17474), (((/* implicit */unsigned short) arr_7 [i_7]))))))));
            arr_26 [i_0] [i_7] [i_7] = ((/* implicit */unsigned short) ((max((max((((/* implicit */int) (unsigned short)65529)), (1291331852))), (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1])))) < (max((((/* implicit */int) arr_10 [i_0] [i_7] [i_0 + 1] [i_0] [i_7])), (((((/* implicit */int) arr_23 [i_7] [i_7] [i_7])) << (((((/* implicit */int) (short)-32765)) + (32778)))))))));
            arr_27 [i_0 + 1] [i_0 + 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_7])) ? (max(((-(-1427059857))), (((/* implicit */int) var_1)))) : (max((((/* implicit */int) ((unsigned short) (unsigned short)24925))), ((~(((/* implicit */int) var_8))))))));
        }
    }
    var_26 = ((/* implicit */signed char) max((max((((((/* implicit */int) (unsigned short)48043)) - (((/* implicit */int) var_13)))), (((/* implicit */int) max((((/* implicit */short) var_3)), (var_1)))))), (((((/* implicit */_Bool) (unsigned short)48083)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)1920)))) : (max((((/* implicit */int) (unsigned short)63615)), (1839171447)))))));
    var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((_Bool) var_4))) : ((~(-1463993896))))), (max((((/* implicit */int) ((_Bool) var_1))), ((+(((/* implicit */int) (unsigned short)65529))))))));
}
