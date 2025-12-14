/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110056
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_20 = (-(arr_1 [i_0 + 1]));
        var_21 ^= ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)0));
        var_22 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_3 [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_15))))) % (arr_0 [i_0 + 1])));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (-(max((min((var_17), (((/* implicit */long long int) arr_5 [i_1] [i_1])))), (((/* implicit */long long int) arr_0 [i_1]))))));
        var_23 &= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) (unsigned char)124)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) var_7)))), (((/* implicit */int) arr_5 [i_1] [i_1]))));
        var_24 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (arr_1 [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) < (((/* implicit */int) var_2))))) : (((int) (_Bool)0))))) ? (max((((/* implicit */unsigned long long int) (+(var_17)))), (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
    }
    var_25 ^= ((/* implicit */long long int) ((var_2) ? (((var_3) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) max((var_8), (var_2))))));
    /* LoopSeq 4 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) arr_8 [i_2]);
        var_27 -= ((/* implicit */unsigned char) arr_1 [i_2 - 1]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_3])))) > (max((((/* implicit */int) var_2)), (arr_11 [i_3] [6LL])))))) : (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_14))))) : (((((/* implicit */int) arr_9 [i_3] [i_3])) | (var_6)))))));
        arr_15 [i_3] [i_3] = arr_11 [i_3] [i_3];
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_0 [i_4]) : (arr_11 [i_4] [i_4]))))));
        arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_8)) : ((~(131071)))));
        var_30 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4]))) : (arr_18 [i_4]))));
        var_31 = ((/* implicit */unsigned short) ((var_6) >> (((arr_17 [i_4] [i_4]) - (2111728429U)))));
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_32 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_8))) && (((/* implicit */_Bool) arr_21 [i_5])))))));
        var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_20 [i_5] [i_5]), (arr_20 [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_5]))) : (min((var_18), (((/* implicit */unsigned int) var_19))))))) ? ((((~(var_16))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_21 [i_5])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((((((((/* implicit */int) var_11)) + (2147483647))) << (((((arr_10 [i_6] [i_6]) + (8830239310428332575LL))) - (25LL))))) <= (((/* implicit */int) (unsigned char)151)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) var_4)), (arr_10 [i_6] [i_6]))))))));
        arr_26 [i_6] [i_6] = ((/* implicit */long long int) arr_1 [i_6]);
        var_35 += ((/* implicit */int) (!(((((/* implicit */int) ((unsigned char) var_11))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
        arr_27 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (3607414550U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) arr_9 [i_6] [i_6])) ? (((/* implicit */long long int) arr_0 [i_6])) : (arr_22 [i_6]))) : (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) arr_9 [i_6] [i_6])) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)15571), (((/* implicit */short) arr_20 [i_6] [i_6])))))) : (arr_23 [6LL]));
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(arr_10 [i_7] [i_7]))), (((/* implicit */long long int) arr_30 [i_7] [i_7]))))) ? (min((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) var_2)), (arr_10 [i_7] [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)104)) && ((_Bool)0)))))));
        var_37 = ((/* implicit */signed char) (((-(var_17))) - (((((/* implicit */_Bool) 15LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_3) || (((/* implicit */_Bool) var_7)))))) : (var_17)))));
        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) min((max((arr_20 [i_7] [i_7]), (arr_20 [i_7] [i_7]))), (arr_20 [i_7] [i_7]))))));
        var_39 = ((/* implicit */short) min((((/* implicit */unsigned short) ((signed char) 984545396))), (var_14)));
    }
    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_15))))), (((unsigned long long int) (short)32767))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_33 [i_8]) | (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) <= (((((/* implicit */_Bool) var_15)) ? (262143ULL) : (((/* implicit */unsigned long long int) arr_23 [i_8]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_10 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
        var_41 += ((/* implicit */unsigned short) ((_Bool) arr_32 [8]));
    }
    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
    {
        var_42 = ((/* implicit */int) arr_28 [i_9]);
        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_21 [i_9])))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [i_9] [i_9])) ? (arr_28 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) < (var_16)))))))));
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_32 [i_9]))))));
    }
    var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((-16LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
}
