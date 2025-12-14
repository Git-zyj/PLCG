/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119379
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_12 = ((/* implicit */short) max((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = arr_5 [i_3] [i_2] [i_1] [i_0];
                        var_13 = arr_5 [i_0] [i_1] [i_2] [i_3];
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_6 [i_1] [i_2] [i_3])))), (((/* implicit */int) max((arr_5 [i_0] [i_3] [i_2] [i_2]), (var_10))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [(short)10])) <= (((/* implicit */int) min((arr_3 [i_3] [i_1] [(short)7]), (arr_6 [(short)3] [i_1] [i_2]))))))) : (((/* implicit */int) ((((/* implicit */int) (short)-26157)) <= (((/* implicit */int) (short)27731)))))));
                        var_15 = ((short) ((((/* implicit */int) arr_7 [i_0] [i_0])) | ((+(((/* implicit */int) (short)0))))));
                        arr_12 [(short)14] [(short)14] [i_2] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_0])) != (((/* implicit */int) arr_4 [i_0]))))) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-27732)) && (((/* implicit */_Bool) (short)0))))) >= (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) (short)2)))))))));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_4] = arr_4 [i_0];
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_0])))))));
                    }
                    arr_18 [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)-4893)) * (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_2])))))));
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_6 = 3; i_6 < 17; i_6 += 1) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_21 [i_6 + 2] [i_6 + 1])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) (short)-23)))))))));
            arr_24 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16231))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) var_10)) == (((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_20 [i_6])))))))));
        }
        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            arr_27 [i_5] [i_7] [i_7] = ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (short)-24031))))) ? (((/* implicit */int) arr_25 [(short)11] [(short)11])) : ((-(((/* implicit */int) arr_26 [i_5]))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    {
                        var_18 = ((short) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) arr_29 [(short)9] [i_7] [i_7] [i_7])) : (((/* implicit */int) (short)-1))));
                        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_26 [i_7])) ? (((((((/* implicit */int) (short)-13605)) + (2147483647))) << (((((/* implicit */int) arr_26 [i_8])) - (26672))))) : (((/* implicit */int) var_1)))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)0)) : (((((/* implicit */int) var_5)) - (((/* implicit */int) (short)-21596))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                for (short i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    for (short i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        {
                            arr_40 [(short)0] [i_7] = min((arr_31 [i_7] [i_12] [i_12 + 1] [i_12 - 1] [i_10] [i_7]), (((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_12] [i_12] [i_12 + 2] [i_12 + 1] [i_11] [i_11])) && (((/* implicit */_Bool) arr_31 [i_12 + 2] [i_12] [i_12 + 1] [i_12 + 2] [i_7] [i_5]))))));
                            var_20 ^= (short)-17306;
                            arr_41 [i_5] [i_5] [(short)10] [i_5] [i_11] [i_12] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_38 [i_12 + 1] [i_12 + 1] [(short)4] [i_12] [(short)1])) || (((/* implicit */_Bool) arr_38 [i_12 + 2] [i_12 + 1] [(short)8] [i_12] [i_12])))), ((!(((/* implicit */_Bool) arr_38 [i_12 + 1] [i_12 - 1] [i_12 + 2] [i_12 + 2] [i_12 + 2]))))));
                            arr_42 [i_5] [i_7] [i_10] [i_11] [i_12] [i_7] = ((short) ((((/* implicit */_Bool) ((short) arr_37 [i_12] [i_11] [i_5]))) ? (((/* implicit */int) arr_23 [(short)16] [(short)16])) : ((~(((/* implicit */int) arr_28 [i_5]))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (short i_13 = 2; i_13 < 18; i_13 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) min((((/* implicit */int) min(((short)-27732), ((short)-27732)))), (((((/* implicit */int) min((arr_44 [(short)8]), (var_5)))) * (((/* implicit */int) (short)7))))));
            arr_46 [i_5] [i_5] [(short)17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_13 + 1] [i_13 - 2] [i_13 - 1])) ? (((((/* implicit */int) (short)0)) + (((/* implicit */int) arr_19 [i_5])))) : (((((/* implicit */_Bool) arr_38 [(short)13] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_38 [i_13 - 2] [i_13 - 1] [i_13] [i_5] [i_5])) : (((/* implicit */int) arr_38 [i_5] [i_5] [i_5] [i_5] [(short)1]))))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)2), ((short)-13605)))) ? (min((((/* implicit */int) arr_34 [i_13 - 1] [i_13 - 2] [i_13 - 1])), (((((/* implicit */_Bool) arr_44 [(short)0])) ? (((/* implicit */int) arr_29 [(short)10] [(short)0] [(short)0] [i_13])) : (((/* implicit */int) arr_22 [i_13])))))) : (((((((/* implicit */int) ((short) (short)-1))) + (2147483647))) << (((((/* implicit */int) arr_35 [i_5] [(short)10] [i_13] [(short)11])) - (32605)))))));
        }
        for (short i_14 = 2; i_14 < 18; i_14 += 1) /* same iter space */
        {
            var_23 = var_10;
            arr_49 [i_5] = var_0;
            /* LoopSeq 3 */
            for (short i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_16 = 3; i_16 < 18; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_48 [i_5] [i_14 - 2] [(short)14])) / (((((/* implicit */int) (short)-27591)) * (((/* implicit */int) (short)-2729))))));
                            arr_56 [i_17] [i_14 - 1] [i_15] [i_14] [i_14 - 1] [(short)14] [i_5] = ((/* implicit */short) ((((/* implicit */int) max((arr_52 [i_5] [i_5] [i_14 - 1] [i_15] [i_16 - 3] [i_17]), (arr_28 [i_15])))) * (((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_17])) ? (((/* implicit */int) arr_35 [i_5] [i_15] [i_16] [i_15])) : (((/* implicit */int) arr_31 [i_14 + 1] [i_14 + 1] [i_16] [i_15] [i_14 + 1] [i_5])))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_50 [i_5] [i_15] [i_17])) : (((/* implicit */int) var_1)))))))));
                            var_25 = (short)2747;
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_17])) ? (((((/* implicit */int) arr_31 [i_5] [(short)8] [i_15] [i_16 - 3] [i_17] [i_17])) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) max(((short)-1), (arr_19 [i_5])))))))));
                        }
                    } 
                } 
                arr_57 [i_14] [i_14] = ((/* implicit */short) (-(((/* implicit */int) max((min((arr_51 [i_5]), (arr_48 [i_5] [i_14 + 1] [(short)2]))), (max(((short)0), ((short)(-32767 - 1)))))))));
                arr_58 [i_15] [i_14] [i_14] [i_5] = var_9;
            }
            for (short i_18 = 0; i_18 < 19; i_18 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((/* implicit */int) ((short) (short)0))), (((((/* implicit */_Bool) arr_23 [i_14 - 2] [i_14 - 2])) ? (((/* implicit */int) ((short) (short)2047))) : (((/* implicit */int) var_8)))))))));
                arr_61 [i_5] [i_14] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_14] [i_18])) ? ((+(((/* implicit */int) ((short) arr_44 [i_14]))))) : ((~(((/* implicit */int) arr_34 [(short)16] [i_14 + 1] [i_14 - 1]))))));
            }
            for (short i_19 = 0; i_19 < 19; i_19 += 2) /* same iter space */
            {
                arr_64 [i_5] [i_14] [i_14] [i_19] = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_5])) * (((/* implicit */int) arr_48 [i_5] [i_5] [i_5]))));
                arr_65 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */int) (short)-27261)), ((-(((/* implicit */int) (short)10001))))));
                arr_66 [i_5] [i_14] [i_19] = var_1;
            }
            var_28 -= ((/* implicit */short) ((((/* implicit */int) (short)23079)) | (((/* implicit */int) ((short) arr_63 [i_14] [i_14 + 1] [i_14] [i_14])))));
        }
        arr_67 [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)27731)) ? (((/* implicit */int) max((var_0), (arr_37 [i_5] [i_5] [(short)0])))) : (((/* implicit */int) arr_43 [i_5])))), (((((/* implicit */_Bool) (short)-27732)) ? (((/* implicit */int) (short)-27731)) : (((/* implicit */int) (short)-1))))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)22))) ? ((+(((((/* implicit */_Bool) (short)-27732)) ? (((/* implicit */int) (short)-26617)) : (((/* implicit */int) (short)-10420)))))) : (((((/* implicit */int) ((short) arr_50 [i_5] [i_5] [i_5]))) * ((+(((/* implicit */int) (short)23074))))))));
        /* LoopNest 2 */
        for (short i_20 = 0; i_20 < 19; i_20 += 4) 
        {
            for (short i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                {
                    var_30 += ((/* implicit */short) ((((((((/* implicit */int) arr_54 [i_21])) + (((/* implicit */int) arr_73 [(short)14] [i_20] [i_5])))) + (2147483647))) << (((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_73 [i_5] [i_20] [i_21])) : (((/* implicit */int) arr_54 [(short)8])))) + (22462))) - (29)))));
                    /* LoopSeq 1 */
                    for (short i_22 = 1; i_22 < 16; i_22 += 1) 
                    {
                        var_31 = arr_59 [i_5];
                        arr_76 [i_22] [i_21] [i_21] [i_20] [i_20] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-26617)) ? (((/* implicit */int) (short)128)) : (((/* implicit */int) (short)-23068)))) - (((/* implicit */int) (short)-23068)))))));
                    }
                    arr_77 [i_5] [i_20] [(short)5] = ((short) ((((((/* implicit */int) arr_44 [i_20])) > (((/* implicit */int) arr_45 [(short)16])))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_63 [i_5] [i_20] [i_21] [i_21])) + (2147483647))) << (((((/* implicit */int) arr_39 [i_20] [i_5])) - (6541))))))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */short) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_6))));
    var_33 = max((var_1), (max((((short) var_5)), (var_6))));
}
