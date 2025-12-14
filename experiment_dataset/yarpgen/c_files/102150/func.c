/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102150
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = (_Bool)1;
        var_16 ^= ((((/* implicit */int) (short)-4284)) >= (((/* implicit */int) (_Bool)1)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_17 = ((/* implicit */_Bool) 1943742047);
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (_Bool)1))));
                        var_19 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)6948)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_12 [i_1] [(signed char)6] [i_2] [(signed char)6] [i_2])) : (var_10)));
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            var_21 = ((((((/* implicit */int) arr_13 [i_1] [i_5] [i_1] [i_5])) - (((/* implicit */int) (unsigned short)16897)))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(unsigned char)8])) && ((_Bool)1)))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_16 [i_6] [i_6]))));
                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            }
        }
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (_Bool)1))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((signed char) arr_12 [i_1] [8] [i_1] [i_1] [i_1])))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_26 |= ((/* implicit */unsigned char) arr_21 [i_7]);
        var_27 = ((/* implicit */unsigned char) arr_21 [i_7]);
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_7] [i_7])) == (((/* implicit */int) arr_6 [i_7]))))))), (((/* implicit */int) ((short) ((_Bool) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            for (int i_9 = 3; i_9 < 11; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((int) (-(((((/* implicit */int) arr_17 [i_11] [i_9 - 2] [i_8] [i_7])) / (((/* implicit */int) (_Bool)1))))))))));
                                var_30 *= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_9 - 1] [i_9 - 1] [i_9 - 3])) && (((/* implicit */_Bool) (unsigned char)117))))), (((((/* implicit */_Bool) arr_23 [i_9 - 3] [i_8])) ? (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) : ((((_Bool)1) ? (((/* implicit */int) arr_26 [i_7])) : (-1422085563)))))));
                                var_31 += ((/* implicit */int) (_Bool)1);
                                var_32 = (!(((arr_14 [i_9]) >= (arr_14 [i_9]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_12 = 1; i_12 < 12; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) arr_17 [i_7] [i_7] [i_9 - 2] [i_12 + 1])) : (((/* implicit */int) arr_28 [i_8] [i_9]))));
                        var_34 = ((/* implicit */signed char) ((arr_15 [i_9 - 3]) ? (((/* implicit */int) arr_15 [i_9 - 2])) : (((/* implicit */int) arr_15 [i_7]))));
                        var_35 = ((/* implicit */_Bool) ((arr_27 [i_7] [i_12 + 1] [i_12 + 1] [(unsigned char)4] [i_12 - 1] [i_7]) ? (((/* implicit */int) arr_11 [i_9] [i_8] [i_12 - 1])) : (((((/* implicit */int) (unsigned char)117)) + (((/* implicit */int) (_Bool)1))))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)139)) + (((/* implicit */int) (unsigned char)146))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_37 += ((arr_32 [(short)8] [i_9 - 2] [i_9 - 3] [i_9 - 2] [i_9 - 3]) ? (((/* implicit */int) ((((/* implicit */int) arr_32 [(unsigned short)2] [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 - 2])) >= (((/* implicit */int) arr_32 [(signed char)2] [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9 - 1]))))) : ((((_Bool)1) ? (((/* implicit */int) arr_32 [(_Bool)1] [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_32 [(_Bool)1] [i_9 + 1] [i_9 - 1] [i_9 - 3] [i_9 - 1])))));
                        var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_9 + 2]))))) ? (((/* implicit */int) (unsigned char)58)) : (((((((/* implicit */_Bool) arr_12 [i_13] [(_Bool)1] [i_8] [(_Bool)1] [i_7])) ? (((/* implicit */int) arr_32 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] [i_9] [i_13])) : (((/* implicit */int) var_13)))) & ((~(((/* implicit */int) var_4))))))));
                    }
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_23 [i_8] [i_8])))) ? (((/* implicit */int) arr_29 [i_7] [i_8] [i_9] [i_9] [i_7])) : (((((/* implicit */_Bool) arr_34 [i_9] [i_8] [i_8] [i_7])) ? (((/* implicit */int) arr_6 [i_8])) : (((/* implicit */int) arr_18 [i_8] [i_7]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 15; i_14 += 3) 
    {
        var_40 = ((((/* implicit */int) ((unsigned char) arr_38 [i_14]))) != (((/* implicit */int) arr_38 [i_14])));
        /* LoopSeq 1 */
        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            var_41 = ((/* implicit */int) (unsigned char)137);
            var_42 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (short)-20109)))));
        }
        var_43 = ((arr_39 [i_14] [i_14] [i_14]) && (((/* implicit */_Bool) arr_38 [i_14])));
    }
    var_44 = ((/* implicit */_Bool) min((var_44), ((_Bool)1)));
    var_45 = ((/* implicit */int) ((((/* implicit */int) max(((unsigned char)19), (((/* implicit */unsigned char) (_Bool)1))))) != (((((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (var_8)))) + (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_7)))))))));
}
