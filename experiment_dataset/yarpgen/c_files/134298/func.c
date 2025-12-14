/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134298
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned int) var_12)), ((~(var_0)))))));
    var_17 = ((/* implicit */short) var_14);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_18 = min((((((/* implicit */_Bool) var_14)) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6226))))), (var_8));
                        var_19 = ((/* implicit */unsigned int) arr_6 [(unsigned short)9] [i_1] [i_3] [(unsigned short)9]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)6243)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)17930))))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (unsigned short i_5 = 2; i_5 < 23; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)14607))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((arr_12 [i_5] [i_4]), (arr_0 [i_4]))), (((/* implicit */unsigned int) arr_6 [i_5] [i_5 + 2] [i_5 + 1] [i_5]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_4] [(unsigned short)21] [i_4])) % (((/* implicit */int) (unsigned short)19))))) : ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65024))) : (arr_0 [i_0])))))));
                    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_11 [(short)4] [(short)4])), (arr_10 [(unsigned short)17] [23U] [23U]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_5])) ? (((/* implicit */int) arr_14 [i_0] [i_4] [i_5] [(unsigned short)9])) : (((/* implicit */int) (unsigned short)43718)))))))) ? (max((min((arr_4 [i_0] [i_4] [i_5]), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_4] [i_5])))) : (max((var_14), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (1707552838U)))))));
                    var_24 = ((/* implicit */unsigned short) (short)17399);
                    var_25 = ((/* implicit */unsigned short) min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_11))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 3) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)23] [i_6])) ? (min((arr_0 [(short)4]), (arr_4 [i_6] [i_6] [i_6]))) : (arr_4 [(short)17] [i_6] [i_6])))) ? (var_1) : (var_1)));
        var_27 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [i_6] [i_6]), (((/* implicit */unsigned int) arr_1 [i_6] [i_6]))))) ? ((+(arr_4 [i_6] [(unsigned short)19] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [(unsigned short)5] [i_6] [i_6]))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        var_28 = (unsigned short)30654;
        var_29 = arr_4 [i_7] [i_7] [i_7];
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_8])) ? (1162738538U) : (arr_3 [i_8] [(short)6])));
        var_31 = ((/* implicit */unsigned short) (((~(arr_7 [2U] [2U] [i_8]))) & (arr_20 [(unsigned short)15])));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 1; i_9 < 20; i_9 += 3) 
        {
            var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(short)2] [(short)2] [i_8] [i_8])) ? (arr_4 [i_8] [i_8] [i_8]) : (4220783315U)))) ? (var_1) : (arr_0 [i_9]));
            var_33 = ((/* implicit */unsigned int) var_10);
        }
        var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_10 [(short)15] [i_8] [i_8])))) ? (arr_16 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_8] [i_8]))));
    }
}
