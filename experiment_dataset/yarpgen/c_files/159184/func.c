/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159184
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
    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
    var_16 += ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) (signed char)91))) >> (((((/* implicit */int) var_3)) - (91))))) << (((((/* implicit */int) ((short) min((var_8), (var_11))))) - (8935)))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_8)))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5))));
                        var_19 = ((/* implicit */_Bool) min(((-(((/* implicit */int) ((unsigned char) var_13))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_0])) && (((/* implicit */_Bool) (signed char)-99)))))));
                        var_20 += ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)245))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 1; i_4 < 13; i_4 += 1) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */_Bool) var_5);
        arr_14 [i_4] = ((/* implicit */short) ((_Bool) ((arr_1 [i_4 - 1]) ? (var_6) : (((/* implicit */int) var_14)))));
    }
    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) (~((~(arr_17 [i_5 + 1] [i_6])))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 13; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_7))));
                            var_23 = ((short) ((int) max(((_Bool)1), ((_Bool)1))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                arr_31 [i_6] [i_6] [i_5] [i_5] = ((_Bool) ((short) arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 1]));
                var_24 = ((/* implicit */signed char) (_Bool)1);
                var_25 += (+(((var_4) & (((/* implicit */int) (unsigned char)149)))));
                var_26 = ((/* implicit */signed char) var_10);
            }
            var_27 += ((/* implicit */signed char) (+(((/* implicit */int) ((short) var_0)))));
        }
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (_Bool)1))));
        var_29 = ((/* implicit */signed char) 1912719412);
    }
    for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        arr_34 [i_11] [i_11] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_39 [i_11] = ((/* implicit */signed char) (((-((+(((/* implicit */int) var_1)))))) & (((((/* implicit */int) (unsigned char)153)) & (((/* implicit */int) (_Bool)1))))));
                    arr_40 [i_11] [i_12] = ((/* implicit */_Bool) ((unsigned char) (signed char)74));
                    var_30 += ((/* implicit */int) ((short) ((signed char) (-(((/* implicit */int) arr_36 [(_Bool)1] [i_11]))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            var_31 = ((/* implicit */signed char) (+(((/* implicit */int) arr_41 [i_14] [i_11] [(short)14]))));
            var_32 += ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_36 [i_11] [i_14]))))));
        }
        for (unsigned char i_15 = 1; i_15 < 16; i_15 += 3) 
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
                {
                    for (unsigned char i_18 = 1; i_18 < 17; i_18 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */short) (((~(((/* implicit */int) arr_35 [i_15 + 2])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_15 - 1])))))));
                            arr_56 [i_15] [i_11] [i_11] [i_15] [9] = ((/* implicit */short) (((+(((/* implicit */int) var_5)))) * (((/* implicit */int) (_Bool)0))));
                            var_34 = ((/* implicit */short) ((unsigned char) var_2));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */_Bool) arr_52 [i_15 + 1] [i_15] [i_15 + 1] [i_15 - 1]);
            /* LoopSeq 1 */
            for (int i_19 = 0; i_19 < 18; i_19 += 1) 
            {
                var_36 += ((/* implicit */unsigned char) (-(min((arr_42 [i_11]), (((/* implicit */int) arr_46 [i_15 + 1] [i_15 + 2] [i_15 + 1]))))));
                var_37 += ((/* implicit */short) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_5))))))));
                /* LoopSeq 1 */
                for (short i_20 = 1; i_20 < 14; i_20 += 3) 
                {
                    var_38 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)239)) % (((/* implicit */int) var_10)))))) : (((/* implicit */int) arr_54 [i_11] [(_Bool)1] [i_20] [i_20] [i_11]))));
                    var_39 += ((/* implicit */_Bool) arr_61 [i_11] [i_11]);
                }
                var_40 ^= (~((~(((/* implicit */int) arr_46 [i_11] [i_15 - 1] [(_Bool)1])))));
                var_41 = ((/* implicit */unsigned char) arr_61 [i_15] [i_15]);
            }
            var_42 ^= ((/* implicit */int) arr_53 [i_11] [i_11] [i_11]);
            arr_62 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) var_14);
        }
        for (unsigned char i_21 = 0; i_21 < 18; i_21 += 1) 
        {
            var_43 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_49 [(short)6] [(short)6] [(short)6])) : (((/* implicit */int) var_9))))) || ((!(((/* implicit */_Bool) arr_60 [i_11] [i_21] [6] [i_21]))))));
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_52 [i_11] [i_21] [i_21] [(unsigned char)14])) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((_Bool) (unsigned char)86)))))));
        }
    }
}
