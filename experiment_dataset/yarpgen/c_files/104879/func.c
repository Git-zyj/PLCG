/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104879
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
    var_19 = ((unsigned short) var_16);
    var_20 &= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)960)), (((((/* implicit */int) var_13)) << (((((/* implicit */int) min(((unsigned short)65535), (var_1)))) - (46246)))))));
    var_21 &= ((/* implicit */unsigned short) max((((/* implicit */int) var_1)), ((+(((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned short)4096)) : (((/* implicit */int) (unsigned short)12))))))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)65527)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60835)))))))) ? ((((~(((/* implicit */int) var_17)))) ^ (((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (unsigned short)25634)))))) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_2)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)14920))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14961)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) (unsigned short)8918))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)32708))));
                                arr_15 [i_0] [i_0] [i_2 + 1] [i_3] [(unsigned short)0] [i_0] [i_2] &= ((/* implicit */unsigned short) ((max(((-(((/* implicit */int) (unsigned short)45623)))), (((/* implicit */int) (unsigned short)16383)))) != (max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)13873)))), ((+(((/* implicit */int) var_12))))))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4] = var_17;
                                var_25 = var_14;
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_1] = arr_0 [i_0];
                            }
                        } 
                    } 
                    var_26 |= var_4;
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_6 [i_0])))) << (((((((/* implicit */_Bool) arr_10 [(unsigned short)2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [(unsigned short)2] [i_0] [i_0])) : (((/* implicit */int) arr_7 [(unsigned short)14] [i_0] [i_0])))) - (43044)))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [(unsigned short)4] [(unsigned short)10] [i_0]))))) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) (unsigned short)34456)))))))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) (unsigned short)17))))) < (((/* implicit */int) var_7))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_30 = (unsigned short)21774;
        var_31 = arr_7 [i_5] [i_5] [i_5];
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
    {
        var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28672)) ? ((+(((/* implicit */int) (unsigned short)248)))) : (((/* implicit */int) (unsigned short)8))));
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)4701)) - (((/* implicit */int) (unsigned short)31209)))))))));
            var_34 = var_5;
            var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)61440), (var_11)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4701)))))))) ? (max(((+(((/* implicit */int) (unsigned short)4700)))), (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) max((var_12), (arr_8 [(unsigned short)4] [(unsigned short)0] [i_7]))))))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_6]))))) ? (((/* implicit */int) arr_6 [i_6])) : (((((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_3 [i_6])))) >> (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_13)))))))));
            arr_25 [i_6] [i_7] [(unsigned short)11] = (unsigned short)60834;
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 2; i_9 < 17; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    {
                        var_37 = arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6];
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17728)) ? (((/* implicit */int) arr_10 [i_6] [(unsigned short)9] [i_9 - 1] [i_9 - 1])) : ((-(((/* implicit */int) (unsigned short)0))))));
                    }
                } 
            } 
            arr_35 [i_6] [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)17742)))) ? ((+(((/* implicit */int) arr_24 [i_6] [i_6])))) : (((/* implicit */int) arr_31 [i_8] [i_8] [i_8] [i_8] [i_6]))));
        }
        var_39 |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6] [(unsigned short)16] [i_6]))));
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_6] [i_6] [(unsigned short)4] [i_6] [i_6] [(unsigned short)9])) ? (((/* implicit */int) ((unsigned short) max((var_0), (arr_7 [i_6] [(unsigned short)13] [(unsigned short)9]))))) : (((/* implicit */int) arr_24 [i_6] [i_6]))));
    }
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned short) min((var_41), (max(((unsigned short)49153), ((unsigned short)61448)))));
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned short)65527)))))) ? (((/* implicit */int) max(((unsigned short)49153), ((unsigned short)61440)))) : ((-((~(((/* implicit */int) arr_28 [i_11]))))))));
    }
}
