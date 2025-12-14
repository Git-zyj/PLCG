/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113421
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0]))));
            arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? ((-(((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)39192)) : (((/* implicit */int) (unsigned short)0)))) | (((/* implicit */int) ((((/* implicit */_Bool) (short)-2697)) || (((/* implicit */_Bool) arr_6 [i_1]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_10 [15U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned short)18] [i_2])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? ((~(var_2))) : ((-(arr_8 [i_0] [i_2])))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                var_20 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)7] [i_0])) ? (var_10) : (((/* implicit */int) (unsigned short)0)))) & (((/* implicit */int) arr_6 [i_3 - 1]))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_9 [i_0 + 3] [i_0] [i_3 + 1])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_3 - 1]))));
            }
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0 + 3]))));
        }
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
        {
            var_22 *= ((/* implicit */unsigned int) arr_12 [(_Bool)1] [(_Bool)1] [(unsigned char)2] [i_0]);
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */_Bool) 4294967295U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? ((((+(((/* implicit */int) var_1)))) + (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_16 [(unsigned char)15] [i_4] [i_0]))))))) : (((/* implicit */int) min(((unsigned short)46988), (arr_3 [7U] [i_0]))))));
        }
        var_24 ^= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [(unsigned short)10])))) ? (((/* implicit */unsigned int) ((arr_14 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (short)10199)) : (((/* implicit */int) (unsigned short)42790))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)18] [i_0 + 3] [i_0 + 3] [i_0 + 3])))))))) ? (min((var_6), (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_11)))) ? (((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) arr_5 [(unsigned short)11] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)56491)))) : (((((/* implicit */int) (unsigned char)244)) * (((/* implicit */int) (short)2697))))))));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3660)))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_16))))) ? (min((((/* implicit */int) min((((/* implicit */short) var_12)), (var_7)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((((/* implicit */int) var_1)) % (((/* implicit */int) (_Bool)1)))) <= (((var_16) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)61875)))))))));
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_4 [i_5]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            arr_24 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [i_6] [(unsigned short)0] [i_6]))) != (var_14)))) % ((~(((/* implicit */int) var_4))))));
            var_26 = ((/* implicit */int) ((3855715632U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 - 1])))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_6] [(unsigned short)18] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5]))) : (((var_16) ? (((/* implicit */unsigned int) 2147483643)) : (arr_8 [(short)18] [i_5])))));
        }
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            arr_28 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((arr_8 [i_7] [i_5]) < (((((/* implicit */_Bool) arr_8 [i_5] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2887244471U))))) ? (((((/* implicit */_Bool) ((var_16) ? (var_10) : (((/* implicit */int) arr_15 [(short)14]))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_16 [i_5] [i_7] [i_7])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_21 [i_7] [i_5] [(_Bool)1]) ? (((/* implicit */int) arr_21 [(_Bool)1] [i_5] [i_7])) : (((/* implicit */int) arr_5 [i_5] [i_7] [i_7]))))) || (((/* implicit */_Bool) arr_2 [i_5] [i_5])))))));
            var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
        }
        for (short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            arr_31 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_8])) != ((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [(unsigned char)15])), (arr_22 [i_5] [i_8] [i_8]))))))));
            arr_32 [9U] [(unsigned short)14] [(unsigned short)11] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_16 [i_5] [i_5] [i_8])), (((arr_8 [i_8] [i_5]) | (((/* implicit */unsigned int) 262143))))));
        }
        arr_33 [i_5] [i_5] = ((/* implicit */unsigned short) 3722882790U);
    }
}
