/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151879
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((unsigned char) ((unsigned int) arr_4 [i_0] [i_0])));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) (unsigned short)65521)) >> (((/* implicit */int) arr_1 [i_2 + 1]))))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((1470297282) == (arr_7 [i_0] [i_2 + 2] [i_0]))))));
            }
            for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), ((unsigned char)0)));
                var_23 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned char)19)) & (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_10))))))));
                var_24 = ((/* implicit */short) ((((((/* implicit */int) ((_Bool) arr_10 [i_0] [i_1]))) < (((/* implicit */int) var_13)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [13] [i_1]))) * (0U)))) ? (arr_11 [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3 - 1] [i_3 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16)))))));
                arr_12 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2U)) % (max((72057594033733632ULL), (((/* implicit */unsigned long long int) (unsigned char)8))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            arr_17 [i_0] = ((/* implicit */unsigned short) var_12);
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)15110)) : (((/* implicit */int) (unsigned char)193))));
            var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4 + 2] [i_4 - 1])) ? (arr_13 [i_4 + 2] [i_4 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        }
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) 19U))));
        arr_18 [i_0] &= ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 4) 
    {
        var_28 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (unsigned short)15110))))) << (((((/* implicit */int) (unsigned char)193)) - (185)))));
        var_29 = ((/* implicit */int) arr_22 [i_5] [i_5]);
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_5 - 1])) - (((/* implicit */int) (unsigned short)50425))));
            var_31 = (~(((/* implicit */int) (unsigned char)255)));
            var_32 = var_6;
        }
    }
    var_33 |= var_5;
    var_34 = ((/* implicit */unsigned int) (_Bool)1);
}
