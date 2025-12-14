/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156391
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
    var_12 = min((((/* implicit */int) var_8)), (((((/* implicit */int) max((var_10), (((/* implicit */short) var_0))))) + ((-(((/* implicit */int) var_6)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_13 = min(((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) var_2)));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_2 = 4; i_2 < 19; i_2 += 4) /* same iter space */
            {
                var_14 *= ((/* implicit */short) (!(max(((!(((/* implicit */_Bool) var_7)))), (var_8)))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_2))));
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_16 = var_4;
                        var_17 = ((/* implicit */int) var_5);
                        var_18 = ((/* implicit */unsigned char) min((min((max((((/* implicit */int) var_0)), (var_7))), (((/* implicit */int) max((var_2), (var_3)))))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) var_6))))) ? ((+(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))));
                    }
                    for (short i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        var_19 |= (+(((((/* implicit */int) var_6)) * (((/* implicit */int) var_4)))));
                        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) max(((unsigned char)40), ((unsigned char)215)))))) && (min((((((/* implicit */_Bool) var_9)) || (var_8))), (var_6)))));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_2)))) <= ((+(((/* implicit */int) var_3))))));
                        arr_16 [i_0] [i_1] [i_1] [(unsigned char)7] [i_5 + 1] [i_0] = ((/* implicit */short) min(((+(((/* implicit */int) var_10)))), ((((+(((/* implicit */int) var_4)))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))));
                    }
                    for (short i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        var_22 = ((max(((-(((/* implicit */int) var_5)))), ((+(((/* implicit */int) var_1)))))) - ((-(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_5)))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) var_0))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */short) var_8))))) && (((var_0) && (var_8)))))) : (((((((/* implicit */int) var_2)) != (((/* implicit */int) var_0)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (var_7)))))));
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_6)) + (((/* implicit */int) var_5)))), (((((/* implicit */int) var_8)) + (((/* implicit */int) var_9)))))))));
                    }
                    for (unsigned short i_7 = 3; i_7 < 19; i_7 += 2) 
                    {
                        var_25 *= ((/* implicit */unsigned char) min(((+(var_7))), (((/* implicit */int) var_9))));
                        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */int) max((var_10), (var_4)))) ^ ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))));
                    }
                    var_27 = ((/* implicit */unsigned char) min((var_27), (var_9)));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) max(((-(((/* implicit */int) var_11)))), ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_5)))))))))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_6))));
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (var_7))))));
                }
                var_31 *= ((/* implicit */unsigned char) var_6);
            }
            /* vectorizable */
            for (int i_9 = 4; i_9 < 19; i_9 += 4) /* same iter space */
            {
                var_32 *= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)));
                var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))));
                var_34 = ((/* implicit */short) (+(((((/* implicit */int) var_9)) - (((/* implicit */int) var_6))))));
                arr_27 [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_1))));
                var_35 = ((/* implicit */_Bool) (+(var_7)));
            }
            var_36 = ((/* implicit */int) var_5);
            var_37 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))), (max((((((/* implicit */int) var_1)) / (((/* implicit */int) var_9)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_9))))))));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) var_1)), (var_10)))) ? (min((var_7), (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_10))))));
            var_39 = (~(((/* implicit */int) var_0)));
        }
        for (short i_10 = 1; i_10 < 20; i_10 += 3) /* same iter space */
        {
            arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), (var_3))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_4)) + (1176))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))));
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    {
                        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */int) var_8)) % (((/* implicit */int) var_6))))))))))));
                        var_41 = ((/* implicit */unsigned char) min((max((((((/* implicit */int) var_0)) - (var_7))), (((var_7) - (((/* implicit */int) var_5)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) var_8))))))))));
                    }
                } 
            } 
        }
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_8))))) | (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_6)))))));
    }
    for (unsigned char i_13 = 1; i_13 < 14; i_13 += 2) 
    {
        var_43 = ((/* implicit */short) max((var_7), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        arr_38 [i_13 + 3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) < (((/* implicit */int) var_0))));
    }
    for (short i_14 = 0; i_14 < 13; i_14 += 1) 
    {
        var_44 = ((/* implicit */int) ((max((((((/* implicit */int) var_0)) * (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))) <= (((/* implicit */int) var_0))));
        arr_43 [i_14] [i_14] = ((/* implicit */short) max((max((((/* implicit */int) (unsigned char)204)), (((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)33526)))))), (min(((+(var_7))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))));
    }
    var_45 = var_7;
    var_46 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((var_9), (var_1)))) : (((/* implicit */int) var_4))))));
}
