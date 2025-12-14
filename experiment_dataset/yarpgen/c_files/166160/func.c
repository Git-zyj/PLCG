/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166160
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */unsigned char) arr_3 [i_0 + 1] [i_4]);
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [i_2] [i_2])), (arr_10 [i_0] [i_0] [i_0])))) / (((/* implicit */int) ((signed char) arr_6 [i_1] [i_2] [i_4]))))) * ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)42639))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            arr_21 [i_6] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (((-(((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))) + (((/* implicit */int) ((unsigned short) arr_10 [i_2 - 1] [i_2] [i_5 + 1])))));
                            var_17 = max(((+(max((((/* implicit */unsigned int) var_4)), (var_14))))), (max((((unsigned int) var_2)), (((/* implicit */unsigned int) arr_20 [i_2 - 1] [i_2] [i_2] [i_5] [i_5 + 1])))));
                            var_18 += ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_12))));
                        }
                        for (short i_7 = 3; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            var_19 *= (unsigned char)122;
                            var_20 = ((/* implicit */signed char) var_3);
                            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_2]))))) <= (max((var_11), (((/* implicit */unsigned long long int) var_2)))))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_2])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) min(((short)21340), (((/* implicit */short) (signed char)62))))))) : (((/* implicit */int) ((arr_23 [i_7 - 3] [i_7] [i_7] [i_7] [i_5] [i_5 + 1] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                            var_22 = ((/* implicit */signed char) arr_5 [i_0 - 1] [i_0 + 1] [i_2]);
                        }
                        /* vectorizable */
                        for (short i_8 = 3; i_8 < 20; i_8 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_15 [i_5] [i_5 + 1] [i_2] [i_0 - 1] [i_0]))));
                            var_24 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_11)))));
                        }
                        var_25 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (signed char)-80)), ((~(879278787U)))))));
                    }
                    var_26 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_8))) ? (max((var_10), (((/* implicit */unsigned int) (unsigned char)122)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1]), (arr_3 [i_0] [i_0])))))))) + (max((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) (unsigned short)16384)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_9 = 1; i_9 < 9; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 2; i_11 < 8; i_11 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (+(max((min((((/* implicit */unsigned int) var_5)), (var_14))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)19540))))))))))));
                    var_28 = ((/* implicit */unsigned short) arr_17 [i_9] [i_10] [i_10] [i_10] [i_10]);
                    arr_34 [i_9] [i_9] [i_9] = ((/* implicit */short) (+((~(max((var_3), (((/* implicit */unsigned long long int) arr_22 [i_9] [i_10] [i_10] [i_10] [i_9] [i_9]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 7; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)122)), (((((/* implicit */_Bool) arr_6 [i_13] [i_12] [i_10])) ? (max((arr_23 [i_13] [i_12] [i_11] [i_11] [i_10] [i_10] [i_9]), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_29 [i_9] [i_9]))))))));
                                var_30 = ((/* implicit */unsigned int) max(((short)21340), (((/* implicit */short) (unsigned char)119))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [(short)10] [i_9])) ? (((/* implicit */int) arr_11 [(unsigned short)4] [i_9] [i_9] [(unsigned short)4])) : (((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9]))))), (var_0)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? ((+(((/* implicit */int) (signed char)126)))) : (((/* implicit */int) ((((/* implicit */int) (short)-22359)) == (((/* implicit */int) (signed char)-103)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [i_9])) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) arr_5 [(signed char)0] [i_9] [(signed char)0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_9]))))) : (min((((/* implicit */unsigned long long int) arr_31 [i_9] [i_9] [i_9])), (var_11)))))))));
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21301)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (short)21340))))) ? ((+(((((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_9]))) : (arr_33 [i_9] [i_9]))))) : (max((var_15), (max((var_15), (((/* implicit */unsigned int) var_2))))))));
        arr_40 [i_9] = ((/* implicit */short) max((((((((/* implicit */_Bool) 3415688508U)) ? (((/* implicit */int) arr_12 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_5 [i_9] [i_9] [i_9])))) % ((~(((/* implicit */int) (signed char)-103)))))), ((~(((/* implicit */int) arr_24 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_9] [i_9]))))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [(unsigned short)2] [i_9] [i_9] [i_9] [(unsigned short)2])), (arr_2 [i_9 + 1] [i_9])))) ? (((/* implicit */int) arr_2 [i_9] [i_9 + 1])) : (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [(unsigned char)16] [i_9] [i_9] [i_9] [i_9 - 1])))))))));
    }
    for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_15 = 2; i_15 < 18; i_15 += 3) 
        {
            for (short i_16 = 1; i_16 < 19; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) arr_24 [i_17] [(unsigned short)12] [i_15] [i_15] [i_15] [(unsigned short)12] [i_14]))));
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) max((((/* implicit */int) max((((unsigned short) arr_19 [i_17] [(short)2] [i_16] [(short)2] [i_14])), (((/* implicit */unsigned short) var_4))))), (((((/* implicit */int) arr_52 [i_14] [i_15] [i_16] [i_17] [i_17])) & ((+(((/* implicit */int) arr_49 [i_17] [i_16] [i_15] [i_14])))))))))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-57)))), (((/* implicit */int) (signed char)-30))))) ? ((~((~(((/* implicit */int) arr_44 [i_17] [(signed char)8] [i_14])))))) : (max(((~(((/* implicit */int) (short)10317)))), (((/* implicit */int) arr_4 [(_Bool)1])))))))));
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) max(((~(((/* implicit */int) arr_19 [i_15 + 1] [i_16 - 1] [i_17] [(unsigned short)4] [i_17])))), (((/* implicit */int) ((((/* implicit */int) arr_19 [i_15 - 1] [i_16 - 1] [i_16] [(unsigned short)14] [i_16])) <= (((/* implicit */int) var_1))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                for (signed char i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    {
                        arr_63 [i_14] = ((/* implicit */short) max((max((((unsigned int) 5590649339035940652ULL)), (((/* implicit */unsigned int) arr_3 [i_18 + 1] [i_18 + 1])))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_20] [i_14] [i_20] [i_19] [i_18] [i_14] [i_14]))))) <= (((unsigned int) var_7)))))));
                        var_38 = ((/* implicit */unsigned short) max((max(((short)6224), ((short)-19549))), (arr_4 [i_14])));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) / ((+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)83)), ((unsigned short)1))))))));
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_11 [i_14] [i_18] [i_19] [i_19]), (arr_11 [i_14] [i_18] [i_20] [i_19])))))))));
                    }
                } 
            } 
        } 
        var_41 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_14] [i_14]))));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_42 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_3)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) == (var_15)))), (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (var_10)));
        /* LoopNest 2 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (unsigned short i_23 = 0; i_23 < 18; i_23 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 1; i_24 < 17; i_24 += 4) 
                    {
                        for (signed char i_25 = 0; i_25 < 18; i_25 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_24 + 1] [i_21])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_21] [i_21] [i_21])) ? (((/* implicit */int) arr_16 [i_22] [i_25])) : (((/* implicit */int) arr_17 [i_21] [i_24] [i_24] [i_24] [i_24]))))) : (((((/* implicit */_Bool) arr_44 [i_21] [i_21] [i_21])) ? (arr_23 [i_25] [i_24] [i_24] [i_23] [i_22] [i_22] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_21])))))))), ((+(((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))) : (9791628432405682078ULL)))))));
                                var_44 = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-22374))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        var_46 = ((/* implicit */unsigned short) max((((short) 3056152678U)), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_26] [i_26] [i_26]))) : (var_3)))))));
        var_47 *= ((/* implicit */unsigned short) ((((_Bool) arr_12 [i_26] [6ULL] [i_26])) ? (((((/* implicit */_Bool) ((signed char) (short)22374))) ? (arr_76 [i_26] [6ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_64 [(short)12] [(short)12]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_26] [i_26] [i_26])) ? (((/* implicit */int) arr_6 [i_26] [i_26] [i_26])) : (((/* implicit */int) arr_6 [i_26] [i_26] [i_26])))))));
        /* LoopNest 3 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            for (short i_28 = 2; i_28 < 10; i_28 += 1) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        var_48 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)118))));
                        var_49 = ((/* implicit */unsigned short) var_3);
                        var_50 |= ((/* implicit */signed char) (short)-7950);
                    }
                } 
            } 
        } 
        var_51 ^= ((/* implicit */short) min((((arr_52 [i_26] [i_26] [i_26] [i_26] [i_26]) ? (((/* implicit */int) arr_59 [i_26])) : (((/* implicit */int) arr_47 [i_26])))), (((((/* implicit */int) (short)0)) - (((/* implicit */int) (_Bool)0))))));
    }
}
