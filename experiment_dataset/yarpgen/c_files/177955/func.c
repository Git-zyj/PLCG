/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177955
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_3), ((-(arr_1 [(unsigned short)3]))))))));
        var_20 = ((/* implicit */int) min((((/* implicit */long long int) ((arr_3 [i_0 - 2]) < (arr_3 [i_0 - 2])))), ((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 - 1]))) : (var_15)))))));
        arr_5 [(unsigned char)17] [i_0] = min((((((/* implicit */_Bool) 7192222192086042352LL)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (3807121845U))), (((/* implicit */unsigned int) (~(2147483647)))));
        var_21 = ((/* implicit */int) min((((/* implicit */long long int) var_13)), (((arr_1 [i_0]) >> (((/* implicit */int) (!(var_9))))))));
        var_22 = ((/* implicit */int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)(-127 - 1)))));
    }
    for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        arr_8 [6ULL] [i_1] &= ((/* implicit */short) (~((~(arr_7 [0])))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) min(((+(var_16))), ((-(arr_7 [i_1])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            arr_13 [i_1] [i_1] [i_1 - 1] = ((/* implicit */short) (!(var_14)));
            arr_14 [11ULL] [i_1] [i_1] = ((/* implicit */unsigned short) ((var_8) ? (arr_7 [i_1]) : (((/* implicit */int) var_4))));
            arr_15 [i_1] = ((/* implicit */long long int) var_17);
            arr_16 [i_1] [i_2] [17LL] = ((/* implicit */long long int) arr_7 [i_1]);
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_19 [i_1] [14] [i_1] = ((/* implicit */unsigned int) ((((arr_11 [i_1 - 1]) != (((/* implicit */long long int) ((/* implicit */int) var_4))))) ? (((var_8) ? (arr_11 [i_1 + 3]) : (arr_11 [i_1 + 2]))) : (((arr_11 [i_1 - 1]) ^ (arr_11 [i_1 - 1])))));
            arr_20 [19LL] [i_1] [19LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) ((unsigned short) min((((/* implicit */short) var_6)), (arr_12 [i_1 + 1] [i_3]))))) : (((/* implicit */int) var_6))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_24 [i_1] [i_4] [i_4 - 1] = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_10 [i_1])))), (min(((~(((/* implicit */int) var_1)))), ((~(arr_7 [i_1])))))));
            var_23 += (-(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_23 [i_1 + 2]))))));
            arr_25 [i_1] = ((/* implicit */unsigned short) (~((+(7651155201911177173ULL)))));
        }
        for (long long int i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            arr_28 [i_5] [i_1] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9226)) == ((-2147483647 - 1))));
            var_24 -= ((/* implicit */unsigned int) (-(min((arr_11 [i_1 + 3]), (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_6)))))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_31 [i_1] [(unsigned short)4] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
            arr_32 [i_1] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_13);
            var_25 -= ((/* implicit */long long int) var_8);
        }
        for (short i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            arr_37 [i_1 + 3] [i_1] [i_1] = (~(((/* implicit */int) ((((/* implicit */long long int) arr_23 [i_1 - 1])) > (var_15)))));
            /* LoopSeq 3 */
            for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                arr_40 [i_1] [i_1] [i_1 + 3] = ((/* implicit */unsigned int) var_15);
                var_26 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1])))))) | (((arr_11 [i_1 + 3]) | (arr_11 [i_1 - 1]))));
            }
            for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_10 = 3; i_10 < 19; i_10 += 4) 
                {
                    arr_47 [i_1] [i_1] [i_10] = (-(((/* implicit */int) arr_44 [(signed char)20] [18LL] [i_1] [i_10 + 2])));
                    /* LoopSeq 1 */
                    for (int i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        arr_50 [i_1] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((signed char) var_0));
                        arr_51 [(signed char)19] [(unsigned short)20] [i_1] [i_10] [(unsigned short)20] [i_1] [i_10] = ((/* implicit */unsigned short) (!(arr_38 [i_1 - 1] [i_10 - 2])));
                        arr_52 [i_7] [i_7] [i_7] [i_7] [i_7] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                    }
                }
                for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_27 = ((/* implicit */int) ((long long int) var_2));
                    var_28 -= ((/* implicit */signed char) arr_54 [i_1] [i_1] [(_Bool)1] [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                    arr_55 [i_1] [i_1] [i_7] [i_9] [15LL] = ((/* implicit */signed char) var_11);
                }
                arr_56 [i_1] = ((/* implicit */_Bool) arr_7 [i_1]);
            }
            for (unsigned long long int i_13 = 2; i_13 < 19; i_13 += 3) 
            {
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_12 [i_1 + 2] [i_13 - 2])))) * (((/* implicit */int) ((((/* implicit */int) arr_39 [i_1 + 1])) > (((/* implicit */int) var_5))))))))));
                arr_60 [i_1] = min(((~(arr_33 [i_7] [i_13 + 1] [i_1]))), (min((((/* implicit */long long int) var_19)), (var_3))));
                arr_61 [i_1] = ((/* implicit */unsigned int) ((var_18) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_58 [i_1]))))) ? (((/* implicit */int) (!(arr_35 [i_1 + 2] [i_1] [i_1])))) : (arr_49 [i_13 + 3] [i_1] [i_13 + 2] [i_13 + 3] [i_13]))))));
                arr_62 [i_7] [i_7] [i_1] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_27 [21U] [i_1] [i_1 - 1])))), ((~(132120576)))));
                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) (short)-25899)))));
            }
            arr_63 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(var_0))), (((/* implicit */long long int) ((((/* implicit */int) var_14)) < (((/* implicit */int) var_1))))))))));
            var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_39 [i_1]))));
            arr_64 [i_1] [1] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_43 [i_1]), (arr_43 [i_1]))))));
        }
    }
    for (unsigned short i_14 = 2; i_14 < 17; i_14 += 4) 
    {
        arr_67 [i_14 - 2] = min(((+((+(((/* implicit */int) var_14)))))), (min((((/* implicit */int) arr_44 [i_14] [i_14] [i_14] [i_14 - 1])), ((+(((/* implicit */int) arr_44 [i_14] [i_14] [i_14] [i_14 - 1])))))));
        arr_68 [i_14] = ((/* implicit */unsigned short) var_5);
    }
    var_32 = ((/* implicit */unsigned short) var_4);
    var_33 = ((((/* implicit */_Bool) ((min((var_11), (((/* implicit */int) var_19)))) | ((-(((/* implicit */int) var_13))))))) ? (min((((var_13) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_17)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((4200106307U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
    /* LoopSeq 3 */
    for (int i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        arr_71 [i_15] [i_15] = ((/* implicit */unsigned char) (+((~((+(((/* implicit */int) var_9))))))));
        arr_72 [i_15] = ((/* implicit */unsigned char) ((min((arr_22 [i_15]), (arr_22 [i_15]))) & (min((arr_22 [i_15]), (arr_22 [i_15])))));
        arr_73 [i_15] [i_15] = ((/* implicit */int) ((((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_15] [i_15]))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_38 [i_15] [(signed char)21])) : (((/* implicit */int) var_4)))))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        arr_76 [i_16] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) ^ (var_18)))));
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) arr_3 [i_16]))));
    }
    for (unsigned char i_17 = 3; i_17 < 23; i_17 += 3) 
    {
        arr_79 [i_17 - 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((signed char) var_8))) ? (arr_77 [i_17]) : (((/* implicit */int) var_5)))) >= (var_10)));
        arr_80 [i_17] = ((/* implicit */_Bool) ((((arr_78 [i_17] [i_17 - 2]) & (arr_78 [i_17 - 2] [i_17 - 2]))) << (((min((arr_78 [i_17] [i_17 + 1]), (arr_78 [i_17 + 1] [i_17 - 2]))) - (1881399427)))));
        arr_81 [i_17] [(unsigned char)17] = ((/* implicit */signed char) var_12);
    }
}
