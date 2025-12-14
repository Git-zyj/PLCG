/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134134
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */_Bool) (short)0);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)86)) & (var_1))) | (arr_1 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_11 *= ((/* implicit */_Bool) min((min((((/* implicit */int) max(((short)15294), (((/* implicit */short) (signed char)-115))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_9)))))), ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (var_8)))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (unsigned char i_4 = 3; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) > (((int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        var_13 = ((/* implicit */_Bool) arr_10 [i_2] [i_2]);
                        var_14 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_11 [i_4 - 3] [i_4 - 1])) ? (arr_10 [i_3] [i_2]) : (arr_10 [i_3] [(short)18]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_1] [8] [i_4 - 2] [i_4 - 2] [i_4]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_10 [i_1] [i_2]))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (1475183932) : (((/* implicit */int) arr_13 [i_3] [20] [i_4])))))) ? (7420022520412022370ULL) : (((/* implicit */unsigned long long int) max(((~(arr_9 [i_4] [i_3] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14336)) ? (((/* implicit */int) (unsigned short)14340)) : (((/* implicit */int) var_5))))))))));
                            var_17 = ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3] [i_2] [i_5])) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (arr_16 [i_1] [i_2] [i_3] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                        }
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)50)) ? (min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) max((var_5), (arr_6 [16])))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_1])), (var_0)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))));
        var_19 = ((/* implicit */signed char) ((min((var_0), (((/* implicit */unsigned int) min((((/* implicit */short) var_2)), (var_4)))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (1143612757) : (arr_8 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_10 [i_1] [i_1]), (((/* implicit */int) arr_11 [i_6] [i_1]))))) ? (arr_17 [i_1] [i_6] [i_6] [i_6]) : ((-(((int) arr_17 [i_1] [i_6] [i_6] [i_1]))))));
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (short)0))));
                var_22 = ((/* implicit */unsigned long long int) min((max((min((((/* implicit */long long int) (short)16380)), (-2674545213938509085LL))), (((/* implicit */long long int) (unsigned short)56670)))), (min((var_7), (((/* implicit */long long int) var_1))))));
            }
            /* vectorizable */
            for (short i_8 = 2; i_8 < 21; i_8 += 2) 
            {
                var_23 = ((/* implicit */signed char) arr_17 [i_6] [i_8 - 2] [(signed char)4] [i_8 - 1]);
                var_24 = arr_24 [i_1] [i_8];
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                    {
                        var_25 += ((/* implicit */_Bool) arr_18 [i_10] [i_10] [i_9] [i_9] [(short)15] [i_6] [i_1]);
                        arr_33 [i_6] [i_6] [i_1] = ((/* implicit */int) ((unsigned int) 619804905U));
                        var_26 = ((((/* implicit */_Bool) arr_27 [i_8 - 2] [i_6] [i_6])) ? (arr_17 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_10]) : (((/* implicit */int) var_3)));
                        var_27 = ((/* implicit */short) -1609076774);
                        arr_34 [i_1] [i_6] [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (-830450450)))) ? (((/* implicit */int) ((signed char) 12409493423057365415ULL))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))));
                    }
                    for (int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        arr_38 [i_1] [i_6] [i_6] [i_1] [i_1] = ((/* implicit */int) ((short) arr_19 [i_9]));
                        var_28 = ((/* implicit */unsigned char) var_7);
                        var_29 = ((/* implicit */unsigned int) (short)-4796);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_6])) ? (((/* implicit */int) var_6)) : (arr_35 [i_1])));
                    }
                    var_31 = ((/* implicit */signed char) arr_0 [i_8 - 1]);
                }
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1193246270)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (-5LL)));
                    var_33 = ((/* implicit */int) var_9);
                    var_34 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_5)))));
                    arr_42 [i_1] [i_1] [i_6] [i_12] [i_8 + 1] [i_12] = ((/* implicit */_Bool) 3637525160U);
                }
                var_35 = ((/* implicit */int) (unsigned short)4366);
            }
            for (unsigned short i_13 = 3; i_13 < 20; i_13 += 4) 
            {
                var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)986))))) && (((/* implicit */_Bool) max((((((/* implicit */int) arr_18 [i_6] [i_6] [3U] [i_6] [i_1] [i_1] [i_6])) << (((((/* implicit */int) arr_6 [i_6])) + (23045))))), (max((-87464634), (((/* implicit */int) (unsigned short)175)))))))));
                var_37 = ((/* implicit */signed char) ((int) max((((((/* implicit */_Bool) 12805761192319552086ULL)) ? (0) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_6] [i_6] [i_1] [i_13])))), (((/* implicit */int) var_6)))));
            }
            var_38 = ((/* implicit */unsigned char) 2674545213938509084LL);
            /* LoopSeq 1 */
            for (int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                var_39 = ((/* implicit */int) arr_27 [i_1] [16U] [i_14]);
                arr_50 [i_14] [i_6] [i_1] = ((/* implicit */_Bool) min((((unsigned char) min((((/* implicit */int) (unsigned short)14323)), (198934950)))), (min((((/* implicit */unsigned char) (signed char)7)), ((unsigned char)19)))));
            }
        }
    }
    var_40 = ((/* implicit */short) max((((((/* implicit */_Bool) min((1193246279), (((/* implicit */int) var_2))))) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_3))))), (var_8))))));
}
