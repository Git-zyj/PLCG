/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102556
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
    var_19 = (signed char)15;
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */short) ((signed char) ((short) (signed char)-1)));
            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)15))));
            arr_7 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1]))));
            arr_8 [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (signed char)16)))))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [(signed char)10] &= var_3;
            var_21 ^= ((signed char) var_0);
            arr_12 [(short)21] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_0] [i_0] [i_2])) + (2147483647))) << (((((((/* implicit */int) (signed char)-42)) + (63))) - (21)))));
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
            var_23 = var_18;
            /* LoopSeq 4 */
            for (signed char i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) arr_13 [i_3] [i_3])))));
                arr_17 [i_0] [i_3] [(signed char)11] = ((signed char) arr_15 [i_4 + 2] [i_3] [i_0]);
            }
            for (signed char i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_5 + 1])) < (((/* implicit */int) (short)-10018))));
                var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) arr_3 [i_5] [i_5] [i_5 + 1]))));
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_27 = ((/* implicit */signed char) var_4);
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)59)) ? ((+(((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_0]))))));
                }
                var_29 = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
            }
            for (signed char i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */short) var_12);
                /* LoopSeq 3 */
                for (signed char i_8 = 2; i_8 < 21; i_8 += 3) 
                {
                    var_31 = ((/* implicit */signed char) var_10);
                    var_32 = ((signed char) (~(((/* implicit */int) var_16))));
                    arr_27 [i_0] [i_7] [i_7] [i_7] = ((/* implicit */signed char) arr_13 [i_8 - 1] [i_8 - 2]);
                    arr_28 [i_8] [i_7] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_3] [i_7 - 1] [i_8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((short) arr_24 [i_0] [i_3] [i_0])))));
                }
                for (signed char i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    arr_32 [i_0] [i_7] [i_7] [i_9 + 3] = ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((short) arr_13 [i_7 + 2] [i_9 + 1])))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_0] [i_7 + 1] [i_7] [i_9 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-48))));
                    arr_33 [i_9] [i_3] [i_3] [i_0] |= ((/* implicit */signed char) arr_24 [i_7] [i_7 - 1] [i_7 - 1]);
                }
                for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    var_35 = ((/* implicit */short) (~(((((/* implicit */int) var_18)) ^ (((/* implicit */int) arr_30 [i_0] [i_3] [i_7]))))));
                    var_36 = ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)107))));
                }
                arr_36 [i_7] = ((/* implicit */signed char) ((short) (signed char)96));
                arr_37 [i_7] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-21621))))) ? (((/* implicit */int) arr_15 [(signed char)21] [i_3] [i_7 + 1])) : (((/* implicit */int) var_2))));
            }
            for (signed char i_11 = 1; i_11 < 20; i_11 += 1) /* same iter space */
            {
                arr_41 [(signed char)10] [i_3] [i_3] [i_3] = ((/* implicit */short) var_12);
                arr_42 [i_0] [i_3] [i_3] = ((signed char) ((signed char) arr_15 [(short)5] [(short)5] [i_11]));
                arr_43 [i_0] [i_3] [i_0] = var_7;
                var_37 -= ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
            }
        }
        arr_44 [i_0] [i_0] &= ((/* implicit */short) var_1);
    }
    for (short i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
    {
        var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (signed char)-40))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_20 [i_12] [i_12] [i_12] [i_12] [(short)7])) : (((/* implicit */int) arr_21 [i_12] [i_12] [i_12] [i_12])))))) - (((/* implicit */int) var_17))));
        arr_49 [i_12] = ((signed char) var_1);
        arr_50 [i_12] [i_12] = ((/* implicit */signed char) ((short) (((+(((/* implicit */int) (signed char)106)))) * (((((/* implicit */_Bool) (short)-10018)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-6)))))));
        var_39 = ((/* implicit */signed char) min((((/* implicit */int) var_15)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    }
    for (short i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
    {
        var_40 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_13]), (arr_4 [i_13])))) ? (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)0)))), (((/* implicit */int) ((signed char) arr_9 [i_13] [i_13]))))) : (((/* implicit */int) var_3))));
        var_41 -= ((/* implicit */signed char) ((((((/* implicit */int) (short)0)) / (((/* implicit */int) arr_45 [(signed char)16] [(signed char)2])))) / (((/* implicit */int) var_17))));
        var_42 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (signed char)7)))), ((+(((/* implicit */int) (signed char)-15)))))), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (signed char)-95))))));
    }
    var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
    var_44 = var_7;
}
