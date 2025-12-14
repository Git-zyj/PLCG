/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130663
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((unsigned long long int) 1723136072U))));
    var_15 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9291193341423775063ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-110))))) + (9291193341423775063ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((14826074504562317071ULL) - (3620669569147234555ULL)))) ? (((var_11) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)186)) ? (3620669569147234517ULL) : (14826074504562317071ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (1887579626)))))));
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) arr_1 [i_0]))));
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) ((9155550732285776552ULL) >= (9155550732285776553ULL))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((((/* implicit */_Bool) -1991115355)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) var_3))))));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-25)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) ^ (max((((/* implicit */unsigned long long int) (short)0)), (9291193341423775042ULL)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (signed char i_3 = 3; i_3 < 12; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            arr_14 [i_5] [i_1] [i_3 - 1] [i_3 - 2] [i_2] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_5] [i_2])) - (((/* implicit */int) arr_7 [i_3] [i_1] [i_3 - 1]))))) ? (((/* implicit */int) var_6)) : (var_8)));
                            var_19 = ((/* implicit */signed char) var_2);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            arr_17 [i_2] [i_6] [i_3] [i_1] [i_6] = ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_15 [i_1 - 1] [i_2] [i_3 - 3] [i_4 - 1] [i_1] [i_2]))));
                            var_20 = ((/* implicit */_Bool) ((arr_10 [i_6] [i_1 - 3] [i_3 - 1] [i_1] [i_6] [i_4 + 1]) - (arr_10 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1] [i_6] [i_4 - 1])));
                        }
                        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            arr_20 [i_1] [i_2] [i_3 - 1] [i_4 + 1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) -333905170);
                            var_21 += ((/* implicit */unsigned long long int) (short)31);
                            arr_21 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_7]))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)44)), (min((((/* implicit */unsigned short) var_10)), ((unsigned short)46350)))))) : (((/* implicit */int) arr_18 [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1 + 1]))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 231150272)) ? (14826074504562317064ULL) : (((((/* implicit */_Bool) arr_11 [i_1 + 3] [i_2] [i_3 - 3] [i_3 - 3] [i_1])) ? (((/* implicit */unsigned long long int) var_1)) : (8659866978575871437ULL)))));
                        }
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) -231150272))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 3; i_8 < 11; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            arr_27 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_8 - 2] [i_9] [i_9] [i_8] [i_9] [i_8 - 2]))))) ? ((~(231150271))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_8] [i_8 - 3] [i_8] [i_8] [i_9] [i_9])))))), (((/* implicit */int) var_3))));
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    {
                        arr_33 [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)49680)) - (1991115379)));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_25 [i_8 + 3]))))))) >= (((/* implicit */int) min((var_3), (((/* implicit */short) arr_5 [i_8 - 3]))))))))));
                        var_25 = ((/* implicit */unsigned long long int) ((_Bool) 9786877095133680179ULL));
                    }
                } 
            } 
            arr_34 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_11), ((!(((/* implicit */_Bool) 9155550732285776570ULL))))))) : (((((arr_12 [i_8 + 2] [i_8] [i_8 + 2] [i_9] [i_9] [i_9]) == (((/* implicit */int) arr_15 [i_8] [i_8 + 2] [i_8] [i_9] [i_9] [i_9])))) ? (min((arr_12 [i_8 + 1] [i_8] [i_8 + 2] [i_9] [i_9] [i_8 + 2]), (-1991115349))) : (((/* implicit */int) max(((short)0), (((/* implicit */short) (unsigned char)4)))))))));
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                arr_38 [i_9] = ((/* implicit */unsigned short) (+(((arr_7 [i_12] [i_9] [i_8 - 3]) ? (arr_26 [i_8 + 2] [i_8]) : (((/* implicit */int) arr_7 [i_9] [i_9] [i_8 - 3]))))));
                arr_39 [i_8 + 3] [i_9] [i_12] [i_12] = ((/* implicit */int) ((9291193341423775062ULL) >> (((arr_25 [i_8]) - (1162962790U)))));
            }
        }
        arr_40 [i_8 + 2] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)46456)))), (((/* implicit */int) var_3))));
    }
    /* vectorizable */
    for (signed char i_13 = 3; i_13 < 11; i_13 += 2) /* same iter space */
    {
        arr_43 [i_13] = ((/* implicit */unsigned short) var_5);
        var_26 = ((/* implicit */unsigned short) -459312745);
        arr_44 [i_13 - 2] [i_13] = ((/* implicit */signed char) (~(arr_32 [i_13 - 2] [i_13 - 3])));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), ((((!(((/* implicit */_Bool) -1991115377)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9291193341423775057ULL)))))) : (9291193341423775057ULL)))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
    {
        var_28 |= ((/* implicit */long long int) 18446743523953737728ULL);
        arr_48 [i_14] [i_14] &= ((/* implicit */unsigned short) (((-(arr_32 [i_14] [i_14]))) & (max((arr_24 [i_14]), (arr_24 [i_14])))));
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9291193341423775057ULL)) ? ((+(arr_32 [i_14] [i_14]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))) ? (((4274475173U) >> (((1991115376) - (1991115347))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_14] [i_14] [i_14] [i_14])) >= (((/* implicit */int) arr_30 [i_14] [i_14] [i_14]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))))))))));
    }
}
