/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114230
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) var_10))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(var_6)));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0] [18LL] = ((short) arr_4 [i_0]);
            var_12 = ((/* implicit */unsigned char) 219832409U);
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1] [(unsigned short)17] [i_3 - 1] [i_3 - 1] [i_1]))));
                            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0)))))));
                            arr_15 [i_4] [i_3] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) arr_7 [3U] [i_2] [(signed char)12] [i_1])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_14 = ((/* implicit */unsigned char) (_Bool)1);
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(arr_13 [i_0] [i_2] [i_2] [i_5] [i_2] [i_5] [i_0]))))));
                    var_16 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [17ULL] [i_1] [0] [i_1] [i_1] [i_1]))) - (var_6)))));
                    arr_19 [i_0] [i_5] [i_1] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520)))));
                }
                arr_20 [i_0] [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)65520))))));
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_17 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_6])) : (((/* implicit */int) arr_0 [i_0]))));
                    arr_24 [i_0] [i_1] [5LL] [i_1] &= var_10;
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)41)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1966080U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [i_7] [i_1] [i_0]))) : (554153860399104LL))))));
                        arr_31 [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_27 [0LL])) : (arr_6 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        arr_34 [i_2] [i_2] [i_9] [i_2] [i_2] = ((/* implicit */unsigned int) 4305108275137382326LL);
                        arr_35 [i_9] [i_9] [i_9] [(unsigned char)12] [i_9] [i_9] [i_9] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_38 [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_9)) <= (1069547520)))))))));
                    }
                    arr_39 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (+(416171279)));
                    var_20 = (-(var_6));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_21 *= ((/* implicit */signed char) arr_18 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
                    arr_43 [i_0] [i_1] [i_2] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((unsigned long long int) arr_8 [i_11] [i_1] [i_0]));
                }
            }
            /* LoopNest 2 */
            for (unsigned short i_12 = 3; i_12 < 18; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_12 - 1])))))));
                        var_23 *= ((/* implicit */unsigned long long int) arr_41 [(unsigned short)6] [i_0] [(unsigned short)17] [i_12 - 3] [i_12 + 1]);
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) (short)-17043)))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_14] [i_14])) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_26 [i_14] [i_14] [(_Bool)1] [i_14]))));
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                var_26 = ((/* implicit */short) ((((/* implicit */int) var_2)) << (((var_5) - (1191915650460983208ULL)))));
                var_27 = ((/* implicit */_Bool) max((var_27), ((!(((/* implicit */_Bool) (unsigned short)5893))))));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) arr_26 [i_0] [i_14] [(unsigned short)17] [i_15])) : (((/* implicit */int) arr_26 [i_0] [i_14] [i_15] [i_14]))));
                /* LoopSeq 1 */
                for (unsigned short i_16 = 2; i_16 < 19; i_16 += 1) 
                {
                    var_29 -= ((/* implicit */signed char) ((arr_48 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        arr_60 [(signed char)14] [(signed char)14] [i_15] [(signed char)14] [i_15] = ((/* implicit */unsigned short) arr_16 [i_0] [2U]);
                        var_30 = ((/* implicit */unsigned int) max((var_30), ((-(var_0)))));
                        arr_61 [i_14] [i_14] [i_14] [i_14] [i_17] [(unsigned char)8] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) >= (var_0)));
                    }
                    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        var_31 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_16 - 2]))));
                        var_32 = ((/* implicit */signed char) ((554153860399096LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        var_33 += ((unsigned char) var_6);
                        arr_65 [(_Bool)1] [(_Bool)1] [i_18] = arr_49 [i_0] [i_0];
                    }
                }
                var_34 += ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned short)504)))));
            }
            arr_66 [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_14] [1LL])))))));
        }
        for (short i_19 = 3; i_19 < 18; i_19 += 3) 
        {
            arr_69 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)76)) != (((/* implicit */int) (unsigned short)56402)))))) : (arr_49 [i_19 - 2] [i_19 - 1])));
            var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (2562418816U)));
        }
        var_36 ^= ((/* implicit */long long int) (unsigned char)56);
        var_37 -= arr_18 [i_0] [(unsigned short)9] [i_0] [i_0] [i_0] [7];
    }
}
