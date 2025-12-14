/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181619
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [(short)14]);
        arr_4 [i_0] [i_0] = var_11;
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            arr_13 [i_1] [i_2] [i_1] = ((((/* implicit */int) arr_11 [i_1] [i_1])) == (((/* implicit */int) arr_5 [i_2 - 1])));
            var_14 = arr_1 [i_2 + 2];
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            arr_24 [i_3] [i_4] [i_1] = ((/* implicit */signed char) ((short) arr_18 [i_2 - 1] [i_2 + 1]));
                            arr_25 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_4] [i_3] [i_2 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_3] [i_2 + 1] [i_1]))))))) : (((((/* implicit */_Bool) arr_15 [(signed char)12] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_10)))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            arr_28 [i_1] [i_6] = ((/* implicit */_Bool) (-(arr_10 [i_1] [i_6])));
            var_15 = (~(arr_1 [i_1]));
        }
        arr_29 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [(unsigned short)10] [(unsigned short)10])) & ((+(((/* implicit */int) arr_26 [i_1]))))));
        var_16 = ((/* implicit */signed char) var_0);
        var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) arr_16 [i_1] [i_1])) ? (arr_10 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1])))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 2) 
    {
        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_7] [i_7])))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_31 [i_7 - 2] [i_7 - 2])))))));
    }
    for (unsigned int i_8 = 1; i_8 < 18; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_9 = 3; i_9 < 20; i_9 += 2) 
        {
            arr_37 [18ULL] [i_9 + 2] [i_9] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8] [i_9]))) > (((((/* implicit */_Bool) arr_35 [i_8 - 1] [i_8 + 1] [i_9 + 1])) ? (var_1) : (((/* implicit */unsigned long long int) max((8393877764857708749LL), (((/* implicit */long long int) (unsigned short)32063)))))))));
            arr_38 [i_9] [i_9] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_35 [i_8 + 2] [i_8 - 1] [i_9 - 3]))))));
            var_20 |= var_11;
        }
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            arr_41 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_8 + 1] [i_8])) ^ ((~(((/* implicit */int) arr_30 [i_8 + 4] [i_10]))))))) ? (((((/* implicit */_Bool) arr_32 [i_8 + 4] [i_8 + 3])) ? (((/* implicit */int) arr_34 [i_8 + 3])) : (((/* implicit */int) arr_32 [i_8 + 4] [i_8 + 3])))) : ((-(((/* implicit */int) arr_35 [i_8 + 4] [i_8 + 2] [i_10]))))));
            arr_42 [i_10] [i_10] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (12076667693268941537ULL)))) ? (((arr_36 [i_10] [i_10]) & (arr_36 [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10]))) == ((~(arr_36 [(_Bool)0] [(_Bool)0]))))))));
        }
        arr_43 [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((-6947782018608050649LL), (((/* implicit */long long int) (signed char)28))))), (var_3)));
        /* LoopSeq 4 */
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            arr_47 [i_8 + 1] [i_8] [i_11] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_36 [i_8] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_8] [i_11] [i_11])))))) && (((arr_36 [i_11] [i_11]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_8]))))))) ? (max((((/* implicit */long long int) (_Bool)1)), (6947782018608050637LL))) : (max((((/* implicit */long long int) (~(((/* implicit */int) arr_31 [i_8 - 1] [i_11]))))), (var_2)))));
            arr_48 [i_8] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_32 [i_8 + 3] [i_8 + 3])) ? (((/* implicit */int) arr_45 [i_8 + 3])) : (((/* implicit */int) arr_45 [i_8])))) == (((/* implicit */int) ((unsigned char) arr_39 [i_8 + 3] [i_11] [i_11])))));
        }
        for (unsigned short i_12 = 2; i_12 < 21; i_12 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_1))));
            arr_51 [i_8 + 4] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_9)), ((signed char)-57)))) ? (((/* implicit */int) arr_44 [i_8 + 1] [i_12 + 1])) : (((((/* implicit */_Bool) max((var_1), (arr_33 [i_8 + 1])))) ? (((/* implicit */int) arr_32 [i_12 - 1] [i_8 + 4])) : (((/* implicit */int) ((short) var_13)))))));
        }
        for (unsigned short i_13 = 2; i_13 < 20; i_13 += 1) 
        {
            arr_54 [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_49 [i_8]);
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((var_9) ? (((/* implicit */int) arr_45 [i_8])) : (((/* implicit */int) arr_49 [i_8 - 1])))) > (((/* implicit */int) ((arr_52 [(unsigned short)11]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8 + 2] [i_13]))))))))))))));
            var_24 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_45 [i_8 + 4])) >= (((/* implicit */int) arr_45 [i_8 - 1])))), (arr_45 [i_8 + 1])));
            arr_55 [i_13] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_13]))) == (arr_46 [i_8] [i_13 + 2] [i_13]))))));
        }
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            var_25 = ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_8] [i_14]))) : (arr_40 [i_14] [i_14])))))));
            arr_58 [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_8 + 2])))))) > (arr_40 [i_14] [i_14])));
        }
        var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [(short)6] [(short)6])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? ((~(arr_40 [i_8 + 3] [6ULL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_49 [i_8 + 1])) ^ (((/* implicit */int) arr_45 [i_8]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_11))) * ((~(((/* implicit */int) (unsigned char)67)))))))));
    }
}
