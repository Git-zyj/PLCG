/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10966
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_19 = (-(((((/* implicit */_Bool) arr_1 [i_0 - 4] [i_0 + 4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 4])))));
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0] [(_Bool)1]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) var_1);
        var_21 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) / (arr_5 [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) ((long long int) var_9));
        var_22 = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */long long int) arr_8 [i_2] [i_2])), (((var_4) - (var_2))))));
    }
    for (long long int i_3 = 3; i_3 < 8; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
            {
                for (unsigned char i_6 = 4; i_6 < 9; i_6 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) (((-(171631921670745371LL))) <= (((/* implicit */long long int) arr_13 [i_3 - 3]))));
                        var_24 -= ((/* implicit */short) var_13);
                    }
                } 
            } 
            arr_23 [i_3] = ((/* implicit */unsigned long long int) var_11);
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 2; i_9 < 9; i_9 += 3) 
                {
                    {
                        arr_32 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (~(((var_2) & (arr_28 [i_3] [4] [i_3 - 2])))));
                        arr_33 [i_9] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~(arr_5 [i_3])));
                    }
                } 
            } 
            arr_34 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_27 [i_3] [i_3] [i_7])) <= (arr_18 [i_3 + 1] [i_3] [i_7] [i_7])));
            var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [6] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_3]))) : (164048890U)))));
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    {
                        arr_41 [i_3] [i_3 - 1] = ((/* implicit */long long int) ((arr_31 [i_3 + 2] [i_3 - 3] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 + 3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((4210292574U) + (((/* implicit */unsigned int) 0))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_3 - 2] [4] [i_3 - 2] [i_3 + 2] [i_7] [i_3]))))) ? (((((/* implicit */_Bool) -5594333524092645407LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))))) : (((((/* implicit */_Bool) arr_21 [i_3 - 2] [i_3] [i_3] [i_3] [i_3])) ? (arr_26 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_10])))))));
                        var_27 = ((/* implicit */unsigned char) ((int) arr_40 [i_7] [i_10] [2U]));
                    }
                } 
            } 
            var_28 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)240))));
        }
        for (long long int i_12 = 2; i_12 < 9; i_12 += 3) 
        {
            var_29 = ((/* implicit */unsigned int) arr_37 [i_3] [i_12 - 1] [i_12 - 1]);
            arr_44 [i_3 + 2] [i_3] [i_3] = ((/* implicit */int) var_8);
        }
        /* LoopNest 2 */
        for (unsigned int i_13 = 3; i_13 < 7; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_4) << (((((arr_25 [i_13] [i_13] [i_14]) + (717407373859621428LL))) - (61LL))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_3]))) <= (arr_39 [4] [i_3] [i_3] [i_3] [4] [i_3 - 2])))), (((((/* implicit */_Bool) arr_37 [i_3] [i_13] [i_3])) ? (((/* implicit */unsigned long long int) -5594333524092645412LL)) : (var_8))))) : (((/* implicit */unsigned long long int) ((int) arr_1 [i_13 + 3] [i_3 + 1])))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_46 [i_14] [i_13])) >= (arr_12 [i_3])))) : (((/* implicit */int) (!(var_3))))))) ? (((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) 4210292595U)) ? (5594333524092645406LL) : (-5594333524092645407LL))) : (var_14))) : (((/* implicit */long long int) var_5))));
                }
            } 
        } 
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_42 [i_3] [i_3])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [i_3] [i_3] [i_3])), ((unsigned char)236)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_3] [i_3])) && (((/* implicit */_Bool) arr_38 [2U] [2U])))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15)) & (((/* implicit */int) (short)4475))))), ((~(var_2)))))) : (((((((/* implicit */_Bool) (unsigned short)1)) ? (arr_15 [i_3]) : (((/* implicit */unsigned long long int) 4210292574U)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_37 [8LL] [i_3] [i_3]))))))))))));
        arr_49 [i_3] [i_3] = ((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) arr_3 [i_3])))) ? (((/* implicit */int) ((arr_12 [i_3]) >= (17041419566511871488ULL)))) : (max((((/* implicit */int) (unsigned short)65521)), (arr_17 [i_3] [i_3] [i_3] [i_3])))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_15 = 2; i_15 < 13; i_15 += 3) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 3) 
        {
            for (signed char i_17 = 3; i_17 < 12; i_17 += 4) 
            {
                {
                    arr_57 [i_15 + 1] [i_15 + 1] [i_16] [i_15 + 1] = ((/* implicit */int) 9223372036854775807LL);
                    var_33 |= ((unsigned char) ((((/* implicit */int) (signed char)-49)) < (((/* implicit */int) arr_1 [i_16] [i_17 - 1]))));
                    arr_58 [i_15] [i_16] [i_16] [i_17] = ((/* implicit */unsigned long long int) (+((((~(var_11))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_15] [i_16] [i_16] [i_16])))))));
                    arr_59 [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_16])) / (((/* implicit */int) arr_56 [i_16]))))) ? (((((/* implicit */int) arr_55 [i_16] [i_17 - 1])) >> (((var_12) + (9213751452204301867LL))))) : (((/* implicit */int) arr_56 [i_16])))) >= (((/* implicit */int) (((~(var_4))) != (-5594333524092645400LL))))));
                }
            } 
        } 
    } 
}
