/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142075
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
    var_17 = ((/* implicit */short) max((((/* implicit */int) var_11)), (((var_1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (!((((((_Bool)0) || (((/* implicit */_Bool) (signed char)-1)))) || (((((/* implicit */_Bool) arr_1 [i_0])) || (arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((_Bool) var_3));
        var_19 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
        var_20 = arr_1 [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) var_10);
                    var_21 = ((/* implicit */_Bool) ((unsigned short) var_15));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))));
                        arr_17 [i_1] [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_2] [i_1 + 1]))));
                    }
                    arr_18 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)47503)) << (((((/* implicit */int) arr_11 [i_1] [i_2 - 2] [i_3])) - (23))))) >> (((((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1])))) - (23169)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)47503)) << (((((((((/* implicit */int) arr_11 [i_1] [i_2 - 2] [i_3])) - (23))) + (28))) - (7))))) >> (((((((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1])))) - (23169))) + (20050))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_22 = ((/* implicit */short) ((arr_8 [i_1 + 1] [i_1]) ? (((/* implicit */int) arr_14 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_6]))));
                arr_23 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_22 [i_1] [i_1] [i_6]) ? (((/* implicit */int) arr_20 [i_1])) : (((/* implicit */int) arr_6 [i_1]))));
                arr_24 [i_1] [i_5] = ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_21 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
            }
            for (signed char i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) arr_8 [i_1] [i_1]);
                /* LoopSeq 3 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    arr_31 [i_1] [i_1 + 1] [i_1] [i_7] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (((/* implicit */int) arr_20 [i_1])) : (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_2))))));
                    arr_32 [i_1] [i_7] [i_5] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7 + 4] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (_Bool)0))));
                }
                for (short i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) arr_25 [i_1 + 1] [i_1 + 1] [i_7 + 1] [i_9]);
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16320)) && ((_Bool)1)))) | (((/* implicit */int) ((signed char) (signed char)-1)))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_37 [i_1] [i_7] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)22)))))));
                    var_26 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (signed char)89))))));
                    var_27 = ((/* implicit */unsigned short) arr_34 [i_10] [i_7 + 1] [i_1] [i_1] [i_5] [i_1]);
                    arr_38 [i_1 + 1] [i_1 + 1] [i_1] [i_7 - 1] [i_7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_10])) && (var_10)));
                }
                arr_39 [i_1] [i_5] [i_7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) var_8))));
            }
            for (signed char i_11 = 1; i_11 < 17; i_11 += 2) 
            {
                arr_43 [i_5] [i_1] [i_11] = var_8;
                arr_44 [i_1] = ((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) ^ (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-7089))))));
                arr_45 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
                arr_46 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1]))));
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_11 + 2] [i_1 + 1])) * (((/* implicit */int) arr_35 [i_11 + 1] [i_1 + 1]))));
                    arr_51 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_8 [i_1] [i_5]);
                    var_29 = ((/* implicit */signed char) arr_34 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1]);
                }
            }
            var_30 = ((/* implicit */short) (-(((/* implicit */int) var_3))));
        }
        /* LoopSeq 4 */
        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            var_31 = ((/* implicit */short) (signed char)13);
            var_32 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_30 [i_13] [i_13] [i_1 + 1] [i_1 + 1])) ^ (((/* implicit */int) arr_30 [i_13] [i_1] [i_1] [i_1 + 1])))));
        }
        for (signed char i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
        {
            arr_58 [i_1 + 1] [i_1] = ((/* implicit */unsigned short) var_9);
            arr_59 [i_1] = ((unsigned short) arr_28 [i_1] [i_1] [i_14] [i_1]);
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                for (short i_16 = 1; i_16 < 18; i_16 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_52 [i_1] [i_1]), (((/* implicit */short) (!(arr_35 [i_1] [i_16]))))))) ? (((((/* implicit */int) max((var_4), ((_Bool)1)))) * (((/* implicit */int) (_Bool)0)))) : ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))))));
                        arr_64 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((var_4) ? (((/* implicit */int) arr_40 [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)0)))))) != (((/* implicit */int) max((max(((unsigned short)38290), (((/* implicit */unsigned short) arr_57 [i_1])))), (var_8))))));
                        arr_65 [i_16] [i_15] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_16)))) - (((/* implicit */int) arr_40 [i_1 + 1] [i_1] [i_14]))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) (short)-12259)))) + (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_9 [i_1]))))) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_14] [i_15])) : (((/* implicit */int) arr_36 [i_15] [i_14] [i_15] [i_1])))))));
                    }
                } 
            } 
            arr_66 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)61482))) ^ (max((((/* implicit */int) arr_50 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1])), ((~(((/* implicit */int) (unsigned short)38163))))))));
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_56 [i_1] [i_14] [i_1 + 1])) == (((/* implicit */int) arr_7 [i_1])))) ? (((arr_47 [i_1] [i_1] [i_1] [i_14]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_14] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_14] [i_14] [i_14] [i_1] [i_1] [i_14])) || (((/* implicit */_Bool) (short)14194)))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_26 [i_1] [i_14] [i_14]))))) ? (((/* implicit */int) arr_34 [i_14] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (!(arr_22 [i_1] [i_1] [i_1])))))) : ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_21 [i_1] [i_14] [i_1])))))))));
        }
        for (signed char i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
        {
            var_36 = (unsigned short)31849;
            arr_70 [i_1] [i_1] = ((/* implicit */unsigned short) arr_11 [i_1] [i_17] [i_1]);
            var_37 = ((((/* implicit */_Bool) arr_60 [i_1] [i_1] [i_1] [i_1 + 1])) || (((/* implicit */_Bool) (unsigned short)0)));
        }
        for (signed char i_18 = 0; i_18 < 20; i_18 += 4) /* same iter space */
        {
            var_38 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_26 [i_1] [i_1 + 1] [i_1])))) * (((/* implicit */int) var_12))));
            arr_75 [i_1] = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_54 [i_1] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_1] [i_1])))))));
            var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        }
        arr_76 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) arr_71 [i_1 + 1] [i_1 + 1] [i_1 + 1])), (((((/* implicit */_Bool) arr_33 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_71 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_13))))));
    }
    var_40 = ((/* implicit */_Bool) (~((+((-(((/* implicit */int) var_15))))))));
    var_41 = ((/* implicit */_Bool) max((((/* implicit */int) var_14)), (((((((/* implicit */int) var_1)) | (((/* implicit */int) var_13)))) * ((+(((/* implicit */int) (_Bool)0))))))));
}
