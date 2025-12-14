/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117576
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_20 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))) ^ (((/* implicit */int) min((((/* implicit */short) ((_Bool) (_Bool)1))), (var_3))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)4735)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)146)) || (((/* implicit */_Bool) (signed char)-120)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)8996)))))) ? (((/* implicit */int) (unsigned short)8996)) : (((/* implicit */int) min((var_18), (((signed char) (signed char)11)))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((((+(var_0))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))));
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 4; i_3 < 7; i_3 += 4) 
            {
                var_22 ^= ((/* implicit */signed char) arr_3 [i_2]);
                /* LoopSeq 1 */
                for (signed char i_4 = 3; i_4 < 7; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 4; i_5 < 9; i_5 += 3) 
                    {
                        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-69)) ? (min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) arr_15 [i_4] [i_4 + 1] [i_4] [i_4] [i_5 - 4])))) : (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))))));
                        arr_19 [(_Bool)1] [i_2] [i_3 + 2] [i_4] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_5] [i_0] [i_4 - 2] [i_2] [i_0] [i_0]))));
                        arr_20 [i_0] [i_4 + 2] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)56541)) == (((/* implicit */int) var_13)))))))) ? ((-(((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0] [6U])) ? (((/* implicit */int) arr_14 [i_0] [1U] [i_0] [i_4 - 1] [i_5])) : (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_3] [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2]))))));
                        arr_21 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)8)) && (var_6)))) / (((((/* implicit */_Bool) (unsigned short)8996)) ? (((/* implicit */int) arr_16 [i_0] [i_3 + 1] [(unsigned short)9])) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_24 [i_0] [i_2] [i_3] [i_2] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) arr_1 [i_0]))))))))));
                        var_24 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [(unsigned short)2])) * (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 1]))) == (var_0)))), ((signed char)-43))))));
                    }
                    var_25 = ((/* implicit */_Bool) (signed char)68);
                }
                var_26 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_2] [i_0])) / (((/* implicit */int) arr_23 [i_0] [(_Bool)1] [(short)3] [i_3] [i_3 - 2])))) | (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_27 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)68)), (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_27 [i_0] = ((/* implicit */signed char) (-(((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_7])) : (((/* implicit */int) (signed char)68))))));
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_3] [i_0] [i_8])) ? (((/* implicit */int) (short)-22965)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) var_11)))))));
                        var_29 = arr_5 [i_0];
                        var_30 = ((/* implicit */_Bool) (unsigned short)8996);
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) min((arr_13 [i_8] [i_7] [i_2] [i_2]), (arr_2 [i_0])))), ((unsigned short)56534)))) / (((/* implicit */int) ((_Bool) var_6)))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_2] [i_7] [i_7] [(short)6] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_31 [(_Bool)1] [i_0] [i_3 - 4] [i_7] [i_9] [(unsigned char)5])) ^ (((/* implicit */int) arr_31 [i_2] [i_0] [i_3 + 2] [i_3] [(unsigned short)0] [i_7])))));
                        var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22965)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_29 [i_2] [i_3 - 3] [i_3 - 3] [i_7] [i_9])), ((unsigned short)18368)))) : (((/* implicit */int) var_15))));
                        var_33 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_32 [i_3 - 1] [i_0] [i_3 + 1])) ? (((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_7])) : (((/* implicit */int) arr_32 [i_3 - 1] [i_0] [i_3 + 1]))))));
                        arr_34 [i_7] [i_0] [(signed char)3] [i_7] [i_7] = ((/* implicit */_Bool) (unsigned short)0);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_2] [i_2] [(signed char)3] [i_2] [i_3 - 2]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (max((((/* implicit */unsigned short) arr_29 [i_0] [i_2] [i_2] [(_Bool)1] [i_10])), ((unsigned short)56539)))))) : ((-(((/* implicit */int) arr_13 [i_3 - 4] [i_3 - 3] [i_3 - 4] [i_3 + 3]))))));
                        arr_40 [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                        arr_41 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_3 + 3])) * (((/* implicit */int) (signed char)6))))) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) min((var_2), (((/* implicit */short) arr_14 [i_3 + 2] [i_3 + 3] [i_3 + 1] [i_3 + 1] [(_Bool)1])))))));
                        var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 907021323U)))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_3))) | (((/* implicit */int) arr_3 [i_3]))));
                        arr_46 [i_11] [i_0] [(unsigned short)9] = ((/* implicit */_Bool) arr_35 [i_3 - 1] [i_0]);
                    }
                    arr_47 [i_0] [i_2] [i_0] = (_Bool)1;
                }
                /* LoopSeq 3 */
                for (signed char i_12 = 2; i_12 < 8; i_12 += 3) /* same iter space */
                {
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)-127)))))));
                    var_37 |= ((/* implicit */short) (unsigned short)0);
                }
                for (signed char i_13 = 2; i_13 < 8; i_13 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) ((_Bool) arr_44 [i_2] [i_2] [i_3 - 1] [i_3 - 1] [i_13 + 2] [i_13])))));
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        arr_56 [i_0] [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */_Bool) arr_23 [i_0] [i_2] [(_Bool)1] [i_13] [i_14]);
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (short)-13757))));
                        var_40 = ((/* implicit */signed char) (_Bool)1);
                    }
                    for (signed char i_15 = 4; i_15 < 7; i_15 += 3) 
                    {
                        var_41 = (_Bool)0;
                        var_42 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_18 [i_0] [i_3 - 3] [i_13] [i_13] [i_0] [i_15 + 3])) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) ((_Bool) arr_31 [(_Bool)1] [i_0] [i_3] [i_0] [(_Bool)1] [i_15 + 1]))))), (((/* implicit */int) max((arr_28 [i_3 - 2] [i_3 - 2] [i_0] [i_15 - 4] [i_15]), (var_19))))));
                        var_43 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)16)))) ? (((/* implicit */int) min((arr_54 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) >= (var_0)))))), (((/* implicit */int) (!(((1446656604U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8201))))))))));
                        var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_0] [i_0] [i_15 - 4]))));
                        arr_59 [i_15] [i_13] [i_0] [i_2] [(_Bool)1] = ((/* implicit */_Bool) (unsigned short)56552);
                    }
                    arr_60 [4U] [(signed char)6] [i_0] [i_13] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_37 [i_0] [i_3 - 1] [i_3] [i_0] [i_2] [i_13 + 1] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_36 [i_3 - 3] [i_13] [i_3 - 3] [i_13 + 2] [i_13])))), ((-(((/* implicit */int) var_5))))));
                }
                for (signed char i_16 = 2; i_16 < 8; i_16 += 3) /* same iter space */
                {
                    arr_63 [(short)4] [i_0] [i_2] [i_0] [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1))))))));
                    var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                }
            }
            var_46 = min((((((/* implicit */int) arr_32 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_32 [(signed char)8] [i_0] [i_0])))), (((((/* implicit */int) (signed char)10)) >= (((/* implicit */int) arr_32 [i_0] [i_0] [i_2])))));
            var_47 |= ((/* implicit */signed char) arr_25 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0]);
        }
    }
    var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) var_0))));
}
