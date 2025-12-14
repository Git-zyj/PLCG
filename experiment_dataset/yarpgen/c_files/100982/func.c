/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100982
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
    var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) (short)14180))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [i_2 + 4] [i_2] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-19014))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            arr_12 [i_3] = ((/* implicit */short) ((_Bool) (short)-19016));
                            arr_13 [i_4] [i_3] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)19016))));
                            var_16 -= ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */int) (short)-22162)) * (((/* implicit */int) (_Bool)0))))));
                            var_17 = ((/* implicit */_Bool) ((short) (short)-22461));
                            arr_18 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) var_5);
                            arr_19 [i_3] [i_3] [i_2] [i_1] [i_3] = ((((/* implicit */int) ((_Bool) ((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))) < (min((((/* implicit */int) (short)-1658)), ((((_Bool)0) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (short)293)))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                            arr_22 [i_0] [i_1] [i_6] [i_6] [i_3] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))));
                            var_19 ^= ((/* implicit */short) (((!(var_9))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) var_4))));
                        }
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */int) (!(var_3)))), (min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) max((var_11), (((/* implicit */short) var_3))))))))))));
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 13; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 3; i_10 < 14; i_10 += 2) 
                    {
                        var_21 ^= ((_Bool) var_5);
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(var_3))))));
                    }
                    arr_32 [i_9] [i_8 + 1] [(short)14] = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_6))))));
                    var_23 = ((/* implicit */short) (-(((((/* implicit */int) var_11)) | (((/* implicit */int) var_3))))));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_24 -= ((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_3))));
                        var_25 = ((short) var_2);
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) (short)-25505)))) : ((~(((/* implicit */int) var_13)))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */short) var_8);
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (~(((/* implicit */int) (short)-1)))))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */short) (~((+(((/* implicit */int) var_14))))));
        arr_39 [i_7] [i_7] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) (short)19001)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_3))))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_31 = ((/* implicit */short) (!((_Bool)1)));
        arr_44 [i_13] [(short)11] = ((short) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_11))));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(((/* implicit */int) (short)-1658)))))));
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (-(((/* implicit */int) ((short) var_2))))))));
        arr_47 [i_14] = ((/* implicit */short) ((((/* implicit */int) ((short) (_Bool)0))) > (((/* implicit */int) ((short) var_9)))));
    }
}
