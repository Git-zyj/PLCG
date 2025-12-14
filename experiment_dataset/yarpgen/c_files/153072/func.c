/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153072
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 3])) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) arr_5 [i_1]))))))));
                    var_19 += ((/* implicit */signed char) (~((-(((/* implicit */int) arr_1 [i_1 + 1] [i_1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_2] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) arr_2 [i_1])))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)37))))))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(signed char)7] [(signed char)7] [(signed char)7])) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))));
                        arr_11 [(signed char)1] = ((/* implicit */unsigned long long int) (signed char)-32);
                        arr_12 [i_1] = ((signed char) arr_3 [i_1 + 4] [i_1 + 4] [(signed char)2]);
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-41)) % (((/* implicit */int) (signed char)1))))) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */_Bool) var_15)) ? (-188084819) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(signed char)4]))))));
                    arr_21 [i_0] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [(signed char)2] [i_5])) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (signed char)39)))) : (arr_15 [i_0] [i_0] [i_6])));
                    arr_22 [i_0] [i_0] [i_0] [i_0] [(unsigned short)3] [i_0] = (~(((((/* implicit */_Bool) 9282871)) ? (arr_8 [i_0] [i_4] [(signed char)15] [i_6]) : (((/* implicit */int) arr_13 [i_0] [i_4] [i_4])))));
                    arr_23 [i_5] [i_5] [i_5] = ((/* implicit */signed char) arr_14 [i_5] [i_4]);
                }
                for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    var_23 += ((/* implicit */short) (~(((/* implicit */int) arr_4 [0] [(short)4] [(short)4]))));
                    arr_27 [(signed char)7] [(signed char)7] [i_5] [(signed char)7] [i_0] = ((/* implicit */short) ((_Bool) arr_7 [i_5] [(signed char)11] [(signed char)11]));
                }
                var_24 = ((/* implicit */short) ((signed char) (signed char)-42));
                arr_28 [i_0] [i_0] [(signed char)7] = ((/* implicit */_Bool) 4);
            }
            for (short i_8 = 3; i_8 < 16; i_8 += 4) 
            {
                arr_31 [i_8 - 3] [i_8] = ((/* implicit */short) (+((+(((/* implicit */int) var_5))))));
                arr_32 [(signed char)5] [i_8] = ((/* implicit */_Bool) ((signed char) (~(16944584752007398277ULL))));
                arr_33 [i_0] [i_8] [i_0] [i_8] = var_2;
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_25 += ((/* implicit */_Bool) arr_29 [i_0] [i_4] [i_9]);
                arr_37 [i_9] [i_9] [i_9] [i_9] = arr_4 [i_0] [i_4] [i_0];
            }
            /* LoopSeq 4 */
            for (signed char i_10 = 3; i_10 < 13; i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 14; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        {
                            arr_46 [i_10] = ((/* implicit */_Bool) ((signed char) arr_15 [i_10 + 1] [i_10 - 1] [i_10 - 2]));
                            var_26 = ((/* implicit */unsigned long long int) ((signed char) (short)-17));
                            arr_47 [i_10] [i_4] [i_4] [i_4] [14] [14] [i_4] = arr_15 [i_0] [i_4] [i_0];
                            arr_48 [i_10] [i_4] [i_10] = var_2;
                        }
                    } 
                } 
                arr_49 [i_0] [i_0] [i_10] = ((/* implicit */signed char) arr_36 [i_0]);
            }
            for (signed char i_13 = 3; i_13 < 13; i_13 += 1) /* same iter space */
            {
                var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [(unsigned short)2] [4] [(unsigned short)2] [0ULL]))) : (arr_38 [i_13] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_51 [i_0] [i_13 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)77))))));
                var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-94))));
            }
            for (signed char i_14 = 3; i_14 < 13; i_14 += 1) /* same iter space */
            {
                arr_55 [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)48121)) ? (((/* implicit */int) arr_6 [i_0])) : (arr_15 [i_0] [10] [10]))) : (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [(short)8]))))));
                arr_56 [i_14] = ((/* implicit */signed char) arr_6 [(_Bool)1]);
            }
            for (signed char i_15 = 3; i_15 < 13; i_15 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_8 [i_0] [i_0] [i_4] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35)))))) : (((((/* implicit */_Bool) (signed char)108)) ? (var_15) : (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4] [i_4]))))));
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0])) ? (arr_38 [i_0] [i_15] [(signed char)6]) : (((/* implicit */unsigned long long int) 956288092))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2712))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)40)))))));
            }
        }
        var_31 += ((short) (!((!(((/* implicit */_Bool) arr_41 [i_0] [(signed char)5] [i_0] [(signed char)5]))))));
        arr_59 [i_0] = ((/* implicit */short) arr_52 [i_0] [i_0] [i_0] [i_0]);
        arr_60 [(signed char)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)9] [(signed char)6] [(short)9])) ? (arr_19 [i_0] [(signed char)0] [i_0] [i_0] [(signed char)10] [i_0]) : (((/* implicit */int) (signed char)39))))) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0]))) == (1781239842010982425ULL))))))) ? (((/* implicit */int) arr_39 [i_0])) : (((((/* implicit */_Bool) (signed char)101)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)4096))))));
    }
    /* LoopNest 2 */
    for (signed char i_16 = 4; i_16 < 21; i_16 += 4) 
    {
        for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_18 = 4; i_18 < 23; i_18 += 4) 
                {
                    for (short i_19 = 2; i_19 < 22; i_19 += 1) 
                    {
                        {
                            arr_71 [i_16] [11ULL] [i_17] [11ULL] [11ULL] [(signed char)18] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_62 [i_16] [(signed char)15])) : (arr_65 [i_16] [i_18] [(signed char)5])))) ? (((/* implicit */int) ((signed char) arr_69 [i_18]))) : (((((/* implicit */_Bool) arr_63 [i_19])) ? (((/* implicit */int) (signed char)79)) : (-106767141))))));
                            arr_72 [i_17] = ((/* implicit */signed char) ((short) 16665504231698569190ULL));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_65 [i_16] [i_16] [i_16]))) ? (((((/* implicit */_Bool) arr_61 [i_16])) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_69 [i_16])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)2))))))) ? (((/* implicit */int) arr_69 [i_16 + 1])) : (477605756)));
            }
        } 
    } 
}
