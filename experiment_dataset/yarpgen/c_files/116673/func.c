/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116673
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))));
        arr_5 [i_0] [i_0] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (short)-12425)) : (46232048)))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -46232074)) ? (((/* implicit */int) (unsigned char)4)) : (var_8)))));
        var_12 |= (!(((/* implicit */_Bool) (~(var_6)))));
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            arr_14 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (~((~(var_8)))));
            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_1] [19]))));
        }
        var_14 = min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_8 [i_1])))))));
    }
    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (((-(((((/* implicit */int) (unsigned char)63)) / (var_6))))) != (((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_3) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)22)))))));
            var_17 = ((/* implicit */unsigned short) arr_16 [i_3 - 1]);
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) -46232042)) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_4] [i_3]), (((/* implicit */unsigned short) (short)5999))))))))) ? (min((((/* implicit */unsigned int) min((var_9), ((signed char)58)))), ((~(arr_16 [i_4]))))) : (((/* implicit */unsigned int) var_6))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_19 ^= ((/* implicit */int) arr_9 [(unsigned char)19]);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16389))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5])))))) : (3230582833U)))))));
        arr_23 [i_5] = ((/* implicit */long long int) (~((-(var_0)))));
        var_21 = ((/* implicit */long long int) var_8);
        arr_24 [i_5] = ((/* implicit */signed char) var_2);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_6 = 2; i_6 < 15; i_6 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_25 [i_6] [i_6]) : (((/* implicit */int) (signed char)4))))) ? ((~(18446603336221196288ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (var_3))))));
        var_23 = (~(((/* implicit */int) arr_21 [i_6 + 1] [i_6 - 2])));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) var_9)))));
        var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [(unsigned char)14])) ? (arr_13 [i_7] [i_7 + 1] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7])))));
        var_26 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (var_11) : (var_6)))));
    }
    var_27 = (signed char)29;
    var_28 = ((/* implicit */int) var_10);
    var_29 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (max((((/* implicit */unsigned int) (_Bool)1)), (var_3)))))));
}
