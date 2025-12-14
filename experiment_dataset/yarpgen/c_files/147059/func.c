/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147059
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] |= ((/* implicit */unsigned short) ((unsigned long long int) ((_Bool) var_6)));
                        arr_10 [i_0] [i_1 + 1] [i_2] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6)))))));
                        arr_11 [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3202093701858190686LL)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    }
                    arr_12 [(_Bool)1] [13U] [i_2] = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_4)) - ((+(((/* implicit */int) (signed char)-116))))))), (max((var_7), (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_6)) : (var_5))))))));
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) min(((~(((/* implicit */int) max((var_8), (var_6)))))), (min((((((/* implicit */int) var_4)) & (((/* implicit */int) var_9)))), ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))))))));
    var_12 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -3202093701858190672LL)) < (13ULL)))) * (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            {
                arr_18 [i_4] [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) -2015765750157985036LL))), ((-(((/* implicit */int) (signed char)116))))))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-125)))) - (((int) arr_17 [i_4] [i_5]))))) : ((((+(4294967274U))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)110)), (var_2)))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                arr_27 [i_4] [i_8] [i_6] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29020))))) + (((/* implicit */int) arr_20 [i_4] [i_5] [i_5]))))) ? (min((arr_8 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7]), (((/* implicit */unsigned long long int) arr_19 [i_7 - 1] [i_4] [i_7 - 1] [i_7 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                                arr_28 [i_4] [i_7] [i_6] [i_4] [i_4] = ((/* implicit */unsigned char) ((int) (signed char)125));
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((max((((((/* implicit */_Bool) 18446744073709551602ULL)) || (((/* implicit */_Bool) arr_5 [(_Bool)1] [i_5] [i_6] [i_5])))), (((var_0) && (var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_4)), (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-123)) && (((/* implicit */_Bool) 1187464194))))) : (var_5)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_31 [i_9] [i_5] [i_5] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))));
                        arr_32 [i_4] [i_6] [i_5] [i_4] = ((/* implicit */unsigned int) ((((var_5) + (2147483647))) >> (((arr_7 [i_9] [i_6] [i_5] [i_4]) - (1885286133)))));
                        arr_33 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-110)) || (((/* implicit */_Bool) 3492223722U))))) % ((+(((/* implicit */int) var_6))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_9))))) : (1452759698U)));
                            var_15 = ((/* implicit */short) var_1);
                        }
                    }
                    for (unsigned char i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) 12238353647995779241ULL))), (((int) 465984234U))));
                        var_17 = ((/* implicit */unsigned long long int) arr_4 [i_6] [i_6] [i_5]);
                        arr_39 [i_4] [i_4] [i_4] [(unsigned char)10] [i_4] = ((/* implicit */signed char) ((unsigned char) ((long long int) arr_19 [i_4] [i_4] [i_6] [i_11 + 2])));
                        var_18 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_4] [i_4] [i_4] [i_11]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_38 [6U] [i_4] [i_4] [i_4]))))) : (((var_9) ? (-3202093701858190681LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                        arr_40 [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_5)))))) && (((/* implicit */_Bool) arr_23 [i_4]))));
                    }
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)117)) ? (732869767U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21543))))))));
                    arr_41 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_2 [i_4] [i_5] [i_6]))) + (((/* implicit */int) arr_14 [i_6]))));
                    var_20 = ((/* implicit */int) max((((3165878711051143201ULL) % (((/* implicit */unsigned long long int) var_7)))), (min((890484364576316314ULL), (((/* implicit */unsigned long long int) ((signed char) (signed char)-105)))))));
                }
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        for (unsigned long long int i_14 = 1; i_14 < 16; i_14 += 1) 
                        {
                            {
                                arr_48 [i_4] [i_4] = var_2;
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_14 + 1])))))))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_15 = 1; i_15 < 15; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            {
                                arr_54 [i_4] [i_15 + 2] [i_12] [i_5] [i_4] = ((/* implicit */unsigned short) (~(281474439839744ULL)));
                                var_23 = ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                }
                for (unsigned int i_17 = 0; i_17 < 17; i_17 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) min((var_24), (((signed char) (~(((((/* implicit */int) (signed char)-71)) / (((/* implicit */int) (unsigned short)42330)))))))));
                    /* LoopNest 2 */
                    for (signed char i_18 = 1; i_18 < 15; i_18 += 1) 
                    {
                        for (unsigned short i_19 = 2; i_19 < 16; i_19 += 3) 
                        {
                            {
                                arr_63 [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) var_5));
                                arr_64 [i_19] [i_5] [i_5] [i_4] |= ((/* implicit */_Bool) (~((-((+(((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
