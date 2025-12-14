/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172200
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
    var_15 = ((/* implicit */unsigned long long int) (~(var_14)));
    var_16 |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned int) ((arr_0 [i_0]) < (arr_0 [i_0])));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_18 ^= ((/* implicit */long long int) var_2);
            var_19 += ((/* implicit */_Bool) ((int) arr_4 [i_0] [i_1]));
            /* LoopNest 3 */
            for (long long int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [(_Bool)1] [i_2] [i_3 - 1] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */int) var_11)) | (((/* implicit */int) var_9)))) & (((/* implicit */int) arr_5 [i_2 - 3] [i_2 - 1] [i_2 + 2]))));
                            arr_15 [i_0] = arr_11 [i_0] [i_0] [i_0] [i_0] [i_4];
                            arr_16 [i_2] [i_4] = var_3;
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_11);
            arr_18 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_1] [i_1]);
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            var_20 = ((unsigned long long int) ((var_6) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_5] [i_0] [i_5]))));
            arr_21 [i_0] [i_5] = ((/* implicit */int) ((11521856653161591990ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86)))));
            /* LoopNest 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 1; i_7 < 11; i_7 += 2) 
                {
                    {
                        arr_27 [i_6] [i_5] [i_6] [i_0] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)11684))))));
                        arr_28 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_5] [i_5] [i_5]))));
        }
        var_22 += ((/* implicit */unsigned short) (~(7277965612211705997LL)));
    }
    /* LoopNest 3 */
    for (unsigned char i_8 = 2; i_8 < 21; i_8 += 1) 
    {
        for (long long int i_9 = 2; i_9 < 19; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned long long int) arr_31 [i_8] [i_9])) : (arr_29 [i_8])))) ? (((((/* implicit */int) (unsigned short)11692)) << (((((-7277965612211705985LL) + (7277965612211706016LL))) - (16LL))))) : (((/* implicit */int) (unsigned short)11692))));
                    /* LoopSeq 4 */
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                    {
                        var_24 *= var_7;
                        arr_39 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_34 [i_8])))) | (5ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)52561)), (1643541277)))) ? (((/* implicit */int) arr_32 [i_8 - 1])) : (((/* implicit */int) arr_38 [i_8] [i_9] [i_10] [i_11]))))) : (-177743993723609217LL)));
                    }
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) (((~(var_3))) >= (((/* implicit */int) min((arr_34 [i_8]), (((/* implicit */unsigned char) var_11)))))));
                        arr_43 [i_8] [13] [i_8] [(unsigned short)5] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_14)) ? (arr_30 [i_8] [i_9 - 1]) : (((/* implicit */unsigned long long int) var_2)))), (arr_37 [i_8] [i_8] [i_8] [i_9 + 3] [i_9 - 2]))), (((((/* implicit */_Bool) 1643541277)) ? (arr_41 [i_12] [i_12] [i_9 - 2] [i_8 + 1]) : (((/* implicit */unsigned long long int) var_14))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_46 [i_8] [i_8] [i_10] [i_13] = ((/* implicit */_Bool) ((((_Bool) arr_44 [i_8 - 1] [i_9] [i_9] [i_9] [i_9] [i_9 - 1])) ? (min((arr_42 [i_9] [i_9] [19]), (arr_42 [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [15U] [i_8] [15U] [i_9] [i_9] [i_9 - 1])) && (((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_9] [i_9] [i_8] [i_9 - 1]))))))));
                        arr_47 [i_10] [i_9] [i_9] [i_10] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53839)) % ((+(((/* implicit */int) ((((/* implicit */_Bool) 511472111U)) && (((/* implicit */_Bool) arr_33 [i_9] [i_9])))))))));
                    }
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        arr_52 [i_14] [i_8] [i_9 - 1] [i_8] [i_8] = ((/* implicit */signed char) min(((((!(var_6))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)12974))))) : (var_5))), (((/* implicit */long long int) -991442603))));
                        var_26 += (((!(((/* implicit */_Bool) ((unsigned char) arr_29 [i_14]))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)52565)))) : (991442603)))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) 509343231U)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (8205628677934037078LL)))))))));
                    }
                    arr_53 [i_8] = ((/* implicit */unsigned short) (_Bool)1);
                    var_28 *= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)53873)) : (((/* implicit */int) (unsigned char)240))))))) || (((/* implicit */_Bool) var_1)));
                    arr_54 [i_8] [i_9] = ((/* implicit */int) max((arr_29 [i_8 + 1]), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_29 [i_8 + 2])))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) ((min((((var_0) >> (((var_1) - (7501189841574083250LL))))), (((/* implicit */long long int) var_12)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))));
}
