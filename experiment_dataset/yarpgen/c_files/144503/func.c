/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144503
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
    var_19 += ((/* implicit */short) ((((/* implicit */int) var_13)) << (((931447774U) - (931447761U)))));
    var_20 = ((/* implicit */signed char) max(((+(1199504162U))), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 *= ((/* implicit */short) max(((~(var_1))), (((/* implicit */int) (signed char)22))));
        arr_2 [i_0] [10U] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483647)), (((((/* implicit */_Bool) 1371819145U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)0)), (-1181035006)));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_22 = ((/* implicit */int) (~((-(arr_6 [i_1] [7U])))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3095463144U)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25412)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */int) var_18)) | (((/* implicit */int) var_11))))))) ? ((((!(((/* implicit */_Bool) (short)4108)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_5 [i_1])), (var_1)))) : (arr_4 [i_2 + 1] [i_2 + 1]))) : (((/* implicit */unsigned int) (~(var_17)))));
                    arr_12 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) ((1199504162U) <= (1199504160U)))), (max((arr_5 [i_1]), (((/* implicit */short) var_3))))))) & (((((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_12)))))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [9U] [9U]))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    var_24 *= ((/* implicit */signed char) var_0);
                    arr_20 [i_5] [i_4] [i_5] = (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)28896))))), ((((_Bool)1) ? (3095463130U) : (var_9))))));
                    var_25 = min(((-((-(var_16))))), (min((((/* implicit */int) var_18)), ((+(1756609593))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 19; i_6 += 4) 
    {
        var_26 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_4))))));
        /* LoopSeq 1 */
        for (int i_7 = 3; i_7 < 17; i_7 += 3) 
        {
            var_27 *= ((/* implicit */signed char) arr_21 [i_6] [i_6]);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    {
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [(_Bool)1] [i_7 - 3] [i_7 - 1]))));
                        var_29 += ((/* implicit */unsigned int) (short)-8883);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_10 = 1; i_10 < 18; i_10 += 2) 
            {
                var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_6 - 3]))));
                var_31 = ((/* implicit */unsigned int) max((var_31), ((~(var_4)))));
            }
        }
    }
    for (short i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        arr_39 [i_11] &= ((((/* implicit */_Bool) 3499308340U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1756609583) != (((/* implicit */int) ((signed char) var_14))))))) : ((+(1199504160U))));
        var_32 &= (((((!(((/* implicit */_Bool) 3095463151U)))) || (((/* implicit */_Bool) var_9)))) ? ((~(((/* implicit */int) var_13)))) : ((-(((/* implicit */int) arr_37 [i_11])))));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 22; i_12 += 4) 
        {
            for (signed char i_13 = 2; i_13 < 22; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 1; i_14 < 22; i_14 += 1) 
                    {
                        for (short i_15 = 2; i_15 < 22; i_15 += 1) 
                        {
                            {
                                var_33 *= ((/* implicit */short) (-(arr_51 [i_12])));
                                arr_56 [i_14] [i_12] [i_12] = ((var_13) ? (-1756609601) : (((/* implicit */int) ((((/* implicit */unsigned int) var_12)) <= (((unsigned int) var_18))))));
                                arr_57 [i_14] [i_14] = arr_46 [i_15 - 2] [i_12 - 2] [i_11];
                                arr_58 [i_14] [(short)9] = ((1199504160U) - (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3095463136U)) ? (((/* implicit */unsigned int) ((((1067455942) / (-1756609594))) * (((int) 4294967295U))))) : (((((/* implicit */_Bool) arr_55 [i_12] [i_13 - 1] [i_13] [i_13 - 2] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_11] [i_11] [i_11] [i_12 + 2]))) : (3095463122U)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            var_35 = ((max((arr_49 [i_11] [i_11] [i_11] [(_Bool)1]), (var_3))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_11] [i_11] [i_11] [i_11]))))) : (((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2074375166U))))))))));
            var_36 = ((415867818) / (((/* implicit */int) (signed char)-56)));
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_37 = ((/* implicit */short) ((unsigned int) max((((((/* implicit */_Bool) -146046213)) ? (3605600977U) : (((/* implicit */unsigned int) 1756609579)))), (((/* implicit */unsigned int) var_12)))));
                        var_38 = var_14;
                    }
                } 
            } 
        }
    }
    var_39 = ((/* implicit */short) max((((/* implicit */signed char) (_Bool)0)), (var_18)));
    var_40 = var_4;
}
