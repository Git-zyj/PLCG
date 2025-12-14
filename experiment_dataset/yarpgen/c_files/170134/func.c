/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170134
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)228)) : (var_6))))) / (arr_1 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_0 [(unsigned char)9])) > (((/* implicit */int) var_10)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) -2076398170))))) == (min((((((/* implicit */_Bool) 1772203165)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (unsigned char)232)))), (min((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_5 [i_1] [10] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_1])), ((unsigned char)48)))) ? (min((((/* implicit */int) arr_4 [i_1])), (var_7))) : (max((0), (var_7))))) <= (((int) var_9)));
        var_12 = ((/* implicit */unsigned char) arr_0 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        var_13 -= ((arr_4 [i_2 + 3]) ? (var_1) : (((/* implicit */int) arr_4 [i_2 + 2])));
        var_14 -= ((/* implicit */unsigned char) ((_Bool) -646322464));
        arr_8 [i_2] |= ((((/* implicit */_Bool) ((int) arr_7 [i_2] [(_Bool)1]))) ? ((~(arr_3 [i_2]))) : (((((/* implicit */int) arr_7 [i_2] [i_2])) * (((/* implicit */int) arr_7 [i_2] [i_2 - 1])))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = (((((-(((/* implicit */int) var_3)))) + (2147483647))) << ((((((-(((/* implicit */int) (_Bool)1)))) + (32))) - (31))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 10; i_5 += 2) 
            {
                {
                    var_15 *= ((/* implicit */int) ((((((/* implicit */_Bool) -2147483637)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_14 [i_4] [i_5])))) >= (((/* implicit */int) ((_Bool) (unsigned char)123)))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_0))));
                    arr_16 [(unsigned char)9] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)16)) * ((+(((/* implicit */int) (unsigned char)23))))));
                    var_17 += ((((((/* implicit */int) (unsigned char)228)) * (((/* implicit */int) (unsigned char)228)))) <= (((/* implicit */int) (unsigned char)223)));
                }
            } 
        } 
        var_18 -= ((/* implicit */int) ((unsigned char) ((536870911) << (((((-536870908) + (536870919))) - (10))))));
    }
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (-924832451)));
    /* LoopSeq 2 */
    for (int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min(((((~(((/* implicit */int) (unsigned char)0)))) & (((arr_18 [i_6]) ? (((/* implicit */int) arr_17 [(unsigned char)4])) : (((/* implicit */int) var_0)))))), (((/* implicit */int) arr_18 [i_6]))));
        var_21 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (!((_Bool)0)))) : (max((var_1), (((/* implicit */int) (unsigned char)9))))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_22 [i_7] [i_7] = ((/* implicit */int) ((_Bool) arr_19 [i_7]));
        arr_23 [i_7] [i_7] = ((/* implicit */int) (unsigned char)240);
        /* LoopSeq 2 */
        for (unsigned char i_8 = 2; i_8 < 12; i_8 += 3) 
        {
            arr_27 [i_7] [i_8] [i_7] &= ((/* implicit */unsigned char) ((_Bool) (unsigned char)62));
            var_22 = ((/* implicit */int) ((((/* implicit */int) ((var_9) != (((/* implicit */int) var_8))))) == (((/* implicit */int) ((((/* implicit */_Bool) 1962915022)) && (((/* implicit */_Bool) arr_24 [i_7] [i_8] [i_8])))))));
        }
        for (int i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            arr_31 [i_7] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -536870908)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (_Bool)1))));
            arr_32 [i_9] = ((/* implicit */int) var_10);
        }
    }
}
