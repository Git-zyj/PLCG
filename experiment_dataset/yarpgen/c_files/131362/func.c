/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131362
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23972)) ? (arr_1 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72)))))) ? (arr_0 [i_0 - 1] [i_0 - 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))));
        arr_2 [i_0] = ((((arr_1 [(unsigned char)5]) / (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) << (((arr_0 [i_0] [i_0 + 2]) + (549243684))));
    }
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_5))));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) -58706764);
        var_15 = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (979997790U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))))), (((/* implicit */unsigned int) arr_4 [(unsigned short)16]))))));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) (unsigned short)8851)) ? (3314969505U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52)))))));
            var_17 |= ((/* implicit */short) (+(arr_9 [i_2])));
            arr_10 [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2] [(unsigned char)12])) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
        }
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 24; i_4 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 1]))) * (6851876748777123363ULL)))));
            var_19 += ((/* implicit */_Bool) arr_12 [6]);
        }
        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-65))))) ? (min((1484549488U), (((/* implicit */unsigned int) arr_8 [i_2] [i_5] [i_5])))) : ((+(1286959902U)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 2) 
            {
                var_21 |= ((/* implicit */unsigned char) ((signed char) arr_18 [11U] [i_5] [i_6 - 1]));
                arr_20 [i_2] [(short)5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) : (2948264445U)))) ^ (((((/* implicit */_Bool) arr_19 [i_2] [(short)19] [i_6] [i_2])) ? (arr_17 [i_6]) : (((/* implicit */long long int) 1208066065U)))))))));
            }
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 4; i_8 < 22; i_8 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) min(((short)-29958), (((/* implicit */short) (signed char)-52))))), ((unsigned short)24299)));
                    var_23 ^= ((/* implicit */unsigned int) (unsigned short)27809);
                }
                arr_26 [(short)16] [20] [i_7] [i_7] &= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)52))));
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_5] [i_7]))) + (((((/* implicit */_Bool) 36265290)) ? (1260565496644862749ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))))))))))));
                var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_17 [i_2]), (arr_17 [i_2])))) ? (((((/* implicit */_Bool) 3286300711U)) ? (arr_17 [i_7]) : (arr_17 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_17 [i_5]))))));
            }
            for (unsigned int i_9 = 1; i_9 < 24; i_9 += 4) 
            {
                var_26 = ((/* implicit */signed char) 18014398509481984LL);
                /* LoopSeq 4 */
                for (short i_10 = 4; i_10 < 23; i_10 += 1) 
                {
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)89)) ? (arr_24 [i_9 + 1] [i_10 - 4] [(_Bool)1]) : (arr_24 [i_9 + 1] [i_10 - 2] [i_2])))) < (min((((/* implicit */unsigned int) (_Bool)1)), (3314969501U))))))));
                    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_11 = 2; i_11 < 24; i_11 += 2) 
                    {
                        arr_37 [i_2] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_10 - 3] [i_10 - 3] [i_11 - 2] [i_9 - 1])) ? (arr_19 [i_10 - 3] [i_5] [i_11 + 1] [i_9 - 1]) : (arr_19 [i_10 - 4] [(_Bool)1] [i_11 - 1] [i_9 + 1])));
                        arr_38 [i_2] [i_5] [i_2] [i_5] [i_5] = (+((-(var_6))));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (-(1702682862U))))));
                        var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        arr_39 [i_2] [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23698)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(short)18] [i_5] [i_9]))) : (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                    }
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (((-(arr_17 [i_10 + 1]))) % (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                }
                for (int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    arr_42 [i_12] &= ((/* implicit */short) min((5096140282031668153ULL), (((/* implicit */unsigned long long int) (unsigned short)37726))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
                    {
                        var_32 += ((/* implicit */short) -36265291);
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_36 [i_2] [i_12] [i_2] [i_12] [i_13] [i_9 + 1] [i_2]))));
                        var_34 &= ((/* implicit */int) ((((/* implicit */unsigned int) var_6)) * (1023069304U)));
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                    for (short i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)3488)), (1138080277)));
                        var_37 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_2] [i_5] [i_2] [i_12] [i_14] [i_9 + 1]))))), (max((arr_32 [i_2] [(unsigned char)23] [i_9 - 1] [i_14] [19U] [i_9 - 1]), (((/* implicit */unsigned long long int) arr_47 [i_14] [i_14] [i_9 + 1] [i_9 + 1] [i_14]))))));
                    }
                    for (short i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 889980303)) ? (151740556U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))))) > (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_2] [i_2] [i_5] [i_5] [13U] [i_12] [i_15]))) : (var_10))) + (0U))))))));
                        var_39 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_2] [i_2]))) - (((((/* implicit */_Bool) arr_32 [i_2] [i_5] [i_9] [i_12] [(unsigned char)0] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) : (var_3)))));
                    }
                    var_40 = (short)-31933;
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_27 [i_9 - 1])) : (((/* implicit */int) arr_29 [(unsigned char)20] [i_5] [1U]))))) ? (5155132769302123029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46372))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)96)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1639740521)) ? (((/* implicit */int) (short)10364)) : (((/* implicit */int) (_Bool)1))))))))) : (arr_30 [i_2] [i_2] [(short)3] [i_2])));
                    var_42 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_9 + 1] [i_12])) ? (((/* implicit */int) arr_18 [i_12] [i_9 - 1] [i_9 + 1])) : (((/* implicit */int) arr_18 [i_12] [i_9 + 1] [i_9 + 1]))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13291611304407428587ULL)))));
                }
                for (signed char i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
                {
                    var_43 = ((int) (-(arr_23 [i_2] [i_5] [13U] [8])));
                    var_44 = ((/* implicit */unsigned short) (+(arr_35 [i_2] [i_2] [(short)21] [(short)21] [i_2])));
                }
                for (signed char i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        arr_61 [i_9 + 1] [i_9 + 1] [(signed char)13] [(signed char)13] [i_9 - 1] [i_9 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_18 - 1] [i_2] [i_9 + 1])) % (((/* implicit */int) ((((/* implicit */int) (signed char)-56)) != (((/* implicit */int) arr_46 [i_18] [i_17] [0] [i_9] [(short)17] [i_5] [(short)7])))))));
                        arr_62 [i_2] [i_5] [i_9] [i_9] [(_Bool)1] [i_18 - 1] = (~(((/* implicit */int) var_1)));
                        arr_63 [i_2] [(_Bool)1] [i_2] [i_2] [i_9] [i_17] [i_2] = ((/* implicit */short) (+((+(((/* implicit */int) (unsigned short)59610))))));
                    }
                    var_45 = ((/* implicit */_Bool) min((((/* implicit */short) ((min((((/* implicit */unsigned int) (_Bool)1)), (var_0))) < (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (-2110058307))))))), (((short) (!(((/* implicit */_Bool) (unsigned char)53)))))));
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)37495)) && ((_Bool)1))) ? (((/* implicit */long long int) arr_30 [i_17] [i_9 + 1] [i_2] [i_2])) : (((((/* implicit */_Bool) var_6)) ? (6833161690746170926LL) : (((/* implicit */long long int) 511U))))))) ? (((/* implicit */long long int) arr_23 [i_2] [i_2] [i_9] [i_17])) : (min((((long long int) (unsigned short)18290)), (((/* implicit */long long int) max((arr_46 [i_2] [i_2] [3U] [3U] [3U] [i_2] [i_2]), (var_5))))))));
                    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_9 - 1] [i_9] [i_9 + 1]))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (short)14981)) ^ (((/* implicit */int) (short)-8683)))))) : (min(((-(((/* implicit */int) (signed char)55)))), ((~(((/* implicit */int) arr_47 [1U] [i_9] [i_5] [i_2] [i_2]))))))));
                    arr_64 [i_2] [(short)1] [i_9] [(unsigned short)4] = arr_31 [i_17] [i_9] [i_2];
                }
            }
        }
        arr_65 [i_2] [i_2] = ((/* implicit */short) (+(((arr_52 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2])) : ((~(2147483647)))))));
        var_48 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_40 [i_2] [i_2] [i_2])) != (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_8 [i_2] [7] [7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (9189737814545566687ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188)))))));
    }
}
