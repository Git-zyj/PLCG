/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14304
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
    var_17 = ((/* implicit */unsigned short) var_15);
    var_18 = max((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)37)), ((unsigned short)734)))), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 8017814131136997583LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64802))))) : (max((var_1), (((/* implicit */long long int) var_12)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 2])) ? (arr_4 [i_0 - 1] [i_0 - 2] [i_0 - 2]) : (arr_4 [i_0 - 2] [i_0 - 1] [i_0 + 2])));
            arr_6 [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0 - 3]));
            var_20 = ((/* implicit */long long int) (((~(((/* implicit */int) var_4)))) <= (var_11)));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) arr_1 [i_0 + 2]));
        }
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 - 3] [i_0 - 1])))) >= (var_10))))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) var_5);
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((long long int) (unsigned short)8160)))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_18 [i_2] [i_3] [(signed char)10] [i_5] [(unsigned char)12] [i_6]))));
                            var_25 = (~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-87)), (var_16)))));
                            arr_22 [9ULL] [i_2] [i_4 - 1] [9ULL] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_6]))) / ((+(max((9633694927003300322ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) ((unsigned char) (signed char)-125));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_4 + 2] [i_7] [i_4 + 2])) ? (((/* implicit */int) (unsigned short)721)) : (1205464834)));
                        }
                        var_28 = var_3;
                    }
                } 
            } 
            arr_25 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_2] [i_3])) : (((/* implicit */int) (unsigned short)41829)))), (((((/* implicit */_Bool) (unsigned short)5230)) ? (((/* implicit */int) (unsigned short)734)) : (((/* implicit */int) (unsigned char)141))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_9 = 1; i_9 < 17; i_9 += 1) /* same iter space */
                {
                    var_29 = max((((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)86)))), (var_15));
                    var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_3] [i_2] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : ((-(var_1))))) >= (((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_11 [i_2] [i_3])), (arr_5 [i_2]))), (((/* implicit */unsigned int) (unsigned char)12)))))));
                    var_31 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)9972)), (((long long int) (unsigned char)0))))) ? (((((/* implicit */_Bool) (short)9954)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [(short)6] [(short)6] [i_9]))) : (arr_24 [(short)17] [(short)17] [(short)9] [i_3] [1U] [i_2]))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)39892))))));
                    arr_30 [i_2] [(signed char)11] [i_2] [i_8] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_3] [i_9])) ? (((/* implicit */int) arr_9 [(unsigned char)0] [i_8])) : (((/* implicit */int) var_14))))));
                }
                for (int i_10 = 1; i_10 < 17; i_10 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */short) max((((/* implicit */unsigned int) (short)-9951)), (3142587468U)));
                    arr_34 [i_2] [i_3] [i_8] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-87)) : (arr_26 [i_3] [i_2] [11ULL]))))) > (((/* implicit */int) var_6))));
                }
                arr_35 [i_2] [i_2] = ((/* implicit */unsigned short) var_16);
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            arr_40 [(unsigned char)3] [i_2] [(unsigned char)3] [i_11] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_16 [i_2] [12] [i_2] [i_2] [12] [i_2])), (arr_4 [i_2] [i_11] [i_11]))) | (((((/* implicit */_Bool) (signed char)-87)) ? (10807018453360814504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23711)))))))) ? (11504928418385197484ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535)))))));
                            var_33 = ((/* implicit */signed char) max(((((+((-2147483647 - 1)))) + ((+(var_15))))), (((((/* implicit */_Bool) (short)-9972)) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2])) : (arr_29 [i_2] [i_2] [(unsigned char)7] [i_2])))));
                            arr_41 [i_2] [i_11] [i_11] [i_11] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 227343351U)) ? (((/* implicit */long long int) 2577752506U)) : (2019601130900251020LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (unsigned short)5234)) : (((/* implicit */int) (signed char)11))))))))) >= (((((/* implicit */_Bool) var_16)) ? (9509312253101543589ULL) : (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) arr_26 [i_2] [i_2] [i_2])))))))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_47 [i_2] [i_2] [i_13] [i_13] = ((/* implicit */unsigned char) ((unsigned short) arr_31 [i_2] [i_13]));
                    arr_48 [i_2] [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) arr_27 [i_2] [i_2] [i_2]))), (((unsigned long long int) max((((/* implicit */long long int) arr_33 [i_2] [i_2] [i_2] [i_2])), (arr_14 [i_2] [i_13] [i_13] [i_2]))))));
                }
            } 
        } 
    }
    for (short i_15 = 2; i_15 < 18; i_15 += 3) 
    {
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)6] [i_15])) ? (arr_5 [i_15 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_35 = ((/* implicit */long long int) arr_4 [i_15 + 1] [i_15 - 2] [i_15 + 1]);
    }
}
