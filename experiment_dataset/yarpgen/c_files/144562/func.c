/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144562
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) var_6);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-32755)))))));
                            arr_10 [i_1] [11ULL] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_7 [i_0 - 2] [i_1 + 1] [i_1] [i_0 - 2] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (max((var_4), (arr_7 [i_2] [i_2] [i_1] [i_0] [i_0])))));
                            var_21 -= ((unsigned short) var_19);
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_1] = (unsigned char)172;
                                arr_16 [i_0] [i_3] [i_3] [i_2] [(unsigned char)8] [i_0] &= ((/* implicit */short) var_13);
                                var_22 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_0]))));
                            }
                            for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 1) /* same iter space */
                            {
                                var_23 += arr_7 [i_1] [i_1 - 1] [i_0] [i_1 + 2] [i_1 + 2];
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((unsigned short)50094), (var_7))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                            {
                                var_24 = max((min((((/* implicit */unsigned long long int) arr_18 [i_0 - 2])), ((+(arr_7 [(unsigned short)9] [(unsigned short)9] [i_1] [i_3] [i_3]))))), (((/* implicit */unsigned long long int) (short)-32755)));
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (var_3)));
                                var_26 = ((((/* implicit */_Bool) min((max((18005743119645583123ULL), (((/* implicit */unsigned long long int) (unsigned char)51)))), (var_9)))) ? (max((((/* implicit */unsigned long long int) var_18)), (var_13))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_1]))))));
                            }
                        }
                    } 
                } 
                var_27 = arr_21 [i_1] [(unsigned short)1] [i_1] [i_1 - 1] [i_1] [i_1 - 1];
                /* LoopNest 3 */
                for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    for (short i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_28 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0])))))) - (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8 - 2]))) : (var_8))));
                                var_29 = ((/* implicit */unsigned long long int) min(((unsigned short)47727), (((/* implicit */unsigned short) (unsigned char)148))));
                                var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)32754)), ((-(8787029797970140687ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 11; i_10 += 3) 
                {
                    for (short i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (arr_1 [i_10 + 1] [11ULL]) : (arr_31 [i_0] [i_0])))))) ? (((arr_7 [i_11] [(unsigned char)6] [i_0] [4ULL] [i_11]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166)))))));
                            var_32 = ((unsigned short) (-(((/* implicit */int) (short)-4846))));
                            arr_36 [i_1] [i_11 - 1] = min((((/* implicit */unsigned long long int) (short)32767)), (10185855594965957443ULL));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 3) 
    {
        var_33 = ((/* implicit */short) (~(16ULL)));
        arr_40 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((min((((/* implicit */unsigned long long int) arr_39 [i_12] [10ULL])), (var_8))) & (((unsigned long long int) (short)-32755)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_39 [i_12] [i_12])), ((-(((/* implicit */int) var_18)))))))));
    }
    for (unsigned char i_13 = 3; i_13 < 12; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 1; i_14 < 12; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 4) 
            {
                {
                    var_34 = ((/* implicit */unsigned short) (+(531788943831026645ULL)));
                    arr_49 [i_14] [(unsigned char)6] &= ((/* implicit */unsigned long long int) (unsigned short)65535);
                    var_35 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_45 [i_13] [0ULL])) >= (((/* implicit */int) var_12)))))) == (min((var_4), (((/* implicit */unsigned long long int) arr_41 [8ULL]))))))), (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_13] [i_14] [3ULL] [i_14]))) : (var_13))), (((/* implicit */unsigned long long int) (unsigned short)53343))))));
                }
            } 
        } 
        arr_50 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3228981881153414132ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29229))) : (35184372088576ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13] [(unsigned short)5])) ? (var_2) : (arr_44 [i_13 - 3] [i_13 + 2]))))));
        var_36 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_0), ((unsigned char)115))))))) - (min((var_5), (15057247941074298593ULL)))));
        /* LoopNest 2 */
        for (unsigned char i_16 = 1; i_16 < 13; i_16 += 2) 
        {
            for (unsigned char i_17 = 1; i_17 < 13; i_17 += 1) 
            {
                {
                    var_37 = ((/* implicit */short) (~(((/* implicit */int) ((short) min(((unsigned short)17796), (((/* implicit */unsigned short) (unsigned char)0))))))));
                    arr_56 [i_17] [i_16] [i_17] = ((/* implicit */unsigned char) min((min((var_16), (((unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_18))));
                    var_38 = ((/* implicit */unsigned long long int) ((var_9) != (min((((((/* implicit */_Bool) 3228981881153414150ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3577))) : (10ULL))), (((var_17) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24791)))))))));
                    var_39 = ((/* implicit */unsigned char) (~(max((var_16), (arr_43 [i_16 - 1])))));
                }
            } 
        } 
    }
    for (unsigned char i_18 = 3; i_18 < 15; i_18 += 3) 
    {
        arr_59 [i_18 + 3] [i_18 + 3] &= ((/* implicit */unsigned short) 68719476732ULL);
        arr_60 [i_18] = arr_58 [i_18] [i_18];
    }
}
