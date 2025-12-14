/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163572
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)54892)))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (signed char)18))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (arr_4 [i_1]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_14 = arr_6 [(unsigned char)13] [i_2 - 1];
                        var_15 = ((/* implicit */unsigned long long int) ((min((arr_7 [i_2] [i_2 - 1]), (((/* implicit */long long int) var_3)))) > (arr_7 [i_2] [i_2 - 1])));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) 
        {
            var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (arr_7 [i_1] [i_5 - 1])));
            arr_18 [i_5] [i_5 + 2] [i_1] = ((/* implicit */signed char) var_6);
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                arr_22 [i_6] [i_5 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_5] [i_6] [i_5] [i_5] [i_1])) ? (arr_20 [i_1] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))))) & (((((/* implicit */_Bool) var_1)) ? (arr_10 [i_6] [i_5] [i_1]) : (((/* implicit */unsigned long long int) arr_20 [i_6] [2] [i_1]))))));
                arr_23 [i_1] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((arr_15 [i_5 - 2] [i_5 + 2] [i_6]) ^ (((/* implicit */unsigned long long int) arr_7 [i_6] [i_1]))))));
                var_18 = (short)3043;
                arr_24 [i_1] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_5 - 2] [i_5 + 2])) ? (arr_11 [i_5 - 3] [i_6] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5 - 3] [i_5 - 3])))));
            }
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                arr_29 [i_1] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */int) (short)-3070)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_28 [i_1] [(unsigned char)13] [i_1])) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)5295))));
                var_19 = ((/* implicit */unsigned char) arr_26 [i_1] [1ULL] [i_1]);
                var_20 = ((/* implicit */int) (unsigned short)65534);
                var_21 = ((/* implicit */short) arr_15 [i_1] [i_1] [i_7]);
            }
            arr_30 [i_1] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned char)48)))))));
            var_22 = ((/* implicit */unsigned short) arr_15 [i_5 + 3] [i_5 + 3] [i_5 + 3]);
        }
        arr_31 [i_1] = ((/* implicit */_Bool) (unsigned short)46670);
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_8] [i_8])) / (((/* implicit */int) arr_16 [i_8] [i_8]))))) * (((((35184372088831ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) * (((unsigned long long int) (unsigned char)53))))));
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)1536)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_17 [i_8] [i_8] [i_8])))))));
        var_24 = ((/* implicit */unsigned long long int) var_2);
    }
    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13735)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) max(((unsigned short)3), ((unsigned short)64021))))))) : (((((/* implicit */_Bool) 8796093022207ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-3026)) && (((/* implicit */_Bool) arr_38 [i_9] [i_9]))))) : (((((/* implicit */_Bool) (unsigned short)46665)) ? (((/* implicit */int) (unsigned short)56779)) : (((/* implicit */int) (signed char)-57))))))));
        arr_39 [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)32740)), (((((/* implicit */int) var_0)) - (((/* implicit */int) arr_36 [i_9])))))))));
        var_26 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)4552)) - (((/* implicit */int) (signed char)-99)))) + (((/* implicit */int) min((arr_37 [i_9]), (((/* implicit */unsigned short) arr_38 [i_9] [i_9])))))));
        arr_40 [i_9] = ((/* implicit */unsigned char) var_8);
        var_27 = ((unsigned short) min((((/* implicit */int) arr_36 [i_9])), (1846256310)));
    }
    var_28 = var_4;
    var_29 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) (unsigned short)63988)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) var_5)))))))), (((/* implicit */long long int) ((unsigned short) max(((unsigned short)2021), (var_6)))))));
}
