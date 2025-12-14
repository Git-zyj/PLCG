/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165087
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
    var_17 -= ((/* implicit */unsigned int) var_6);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_18 |= ((/* implicit */unsigned int) var_6);
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) var_6))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned int) (((+(arr_8 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0]))) != (2748486455U)));
                                var_21 = (~(((/* implicit */int) var_5)));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_1] [i_2] &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 1546480839U))))));
                    var_22 *= ((/* implicit */unsigned short) ((var_14) == (7173026193652580142LL)));
                }
            } 
        } 
        var_23 = ((/* implicit */short) ((long long int) ((signed char) arr_13 [i_0] [i_0])));
    }
    for (short i_5 = 1; i_5 < 18; i_5 += 2) 
    {
        arr_17 [i_5 + 1] = ((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_16))));
        var_24 = var_6;
        arr_18 [i_5] [i_5 - 1] = ((/* implicit */int) 1546480839U);
    }
    for (signed char i_6 = 4; i_6 < 21; i_6 += 1) 
    {
        var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-7859)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))), (((-2147483630) & (-2147483630)))));
        var_26 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_3))) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) && (((/* implicit */_Bool) var_8)))))))) / (((/* implicit */int) ((short) ((((/* implicit */int) arr_20 [i_6])) >= (((/* implicit */int) var_6))))))));
        arr_23 [i_6 - 1] [i_6 - 2] = ((/* implicit */unsigned short) ((int) var_16));
    }
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        var_27 ^= ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) var_4)))));
        var_28 = ((/* implicit */short) (+(((var_14) - (var_14)))));
        var_29 = var_16;
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (short)7838)) && (((/* implicit */_Bool) (unsigned char)176))));
    }
}
