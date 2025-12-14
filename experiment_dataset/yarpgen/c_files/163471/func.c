/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163471
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))) + ((~(((/* implicit */int) var_17)))))))));
        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) ((unsigned char) var_10))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] &= ((unsigned char) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_8))));
        var_22 = ((/* implicit */unsigned char) (((+((~(((/* implicit */int) var_7)))))) | (((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned char)127))))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)179)) / (((/* implicit */int) (unsigned char)129)))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
        {
            arr_12 [i_3] [i_3] [i_2] = var_10;
            var_24 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)96))));
            arr_13 [i_3] [i_2] [i_2] = ((unsigned char) var_11);
            arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
        {
            arr_18 [i_2] = var_0;
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) - (((/* implicit */int) ((unsigned char) (unsigned char)141))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned char)96))))));
            arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */int) ((unsigned char) var_19))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_14)) <= (((/* implicit */int) var_11))))))));
            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_10))));
        }
        arr_22 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))) & ((~(((/* implicit */int) var_12))))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_16))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            for (unsigned char i_8 = 3; i_8 < 20; i_8 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) var_5))) | ((~(((/* implicit */int) var_4)))))) + (((/* implicit */int) var_14))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        arr_36 [(unsigned char)20] [(unsigned char)10] [(unsigned char)20] [i_9] = ((unsigned char) ((unsigned char) var_2));
                        var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) var_12)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                    }
                    arr_37 [(unsigned char)6] [i_7] [i_8 + 1] &= ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) var_17)))) : ((~(((/* implicit */int) var_1))))));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((((((/* implicit */int) var_16)) * (((/* implicit */int) var_16)))) > ((~(((/* implicit */int) var_17)))))) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned char) (unsigned char)63))) : (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)204))));
    }
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17)))) & (((/* implicit */int) ((unsigned char) var_13)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)8))))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))))));
}
