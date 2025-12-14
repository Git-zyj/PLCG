/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185186
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) var_6);
                    var_15 *= ((((/* implicit */_Bool) (short)-4286)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4300)));
                    /* LoopSeq 1 */
                    for (short i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2])) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (min((((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [(_Bool)1] [i_1] [(_Bool)1] [i_3])))))), (4294967295U)))));
                        arr_12 [i_2] [i_2] = min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_4 [i_3 - 4]) : (((/* implicit */unsigned long long int) var_6)))), (min((((/* implicit */unsigned long long int) arr_7 [i_3 + 1] [i_1 - 1] [i_0] [4])), (arr_4 [i_3 - 3]))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_0] [2ULL] [i_2] [i_1]))) * (((((/* implicit */_Bool) min((((/* implicit */signed char) var_5)), (arr_2 [i_3])))) ? (((((/* implicit */_Bool) 225691635)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) -18)))) : (((/* implicit */unsigned long long int) 2251799813685247LL))))));
                            var_18 = ((/* implicit */unsigned int) 18446744073709551610ULL);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_18 [i_2] [(_Bool)0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_2] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3 - 3])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_5])))))) : (min((arr_5 [i_1 - 1] [(_Bool)1] [i_1]), (((/* implicit */unsigned int) 2147483644))))));
                            arr_19 [i_5] [i_2] [i_3] [i_1 - 1] [i_1 - 1] [i_2] [i_0] = ((/* implicit */int) 4611686018427387904LL);
                            arr_20 [i_2] [3ULL] [3ULL] [i_3] [i_5] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -8119939818697024666LL)) > (18446744073709551599ULL)))), (((((/* implicit */_Bool) arr_13 [i_0] [i_3 - 4] [8] [i_3 - 2] [(short)1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (18446744073709551611ULL))))), (((/* implicit */unsigned long long int) var_1))));
                        }
                        /* LoopSeq 3 */
                        for (short i_6 = 3; i_6 < 10; i_6 += 4) /* same iter space */
                        {
                            var_19 = -4611686018427387902LL;
                            arr_23 [i_0] [i_2] [i_1 - 1] [i_0] [i_3] [i_6 - 1] [(short)7] = min((4611686018427387890LL), (((/* implicit */long long int) var_1)));
                        }
                        for (short i_7 = 3; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            arr_27 [i_2] [i_1 - 1] [i_2] [i_3 - 2] [(unsigned char)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) ((arr_3 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (((((/* implicit */_Bool) 8119939818697024653LL)) ? (((/* implicit */unsigned long long int) arr_15 [i_7] [i_3] [i_2] [i_1] [6U])) : (arr_6 [i_0] [i_1] [i_2] [i_3])))))));
                            var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) : (17U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_2])))))), ((+(arr_6 [i_0] [i_1] [i_2] [i_7 - 2])))));
                        }
                        for (short i_8 = 3; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_21 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_10 [(short)10] [i_8]) << (((/* implicit */int) ((signed char) arr_5 [i_3] [i_1] [i_0])))))), (max((18446744073709551611ULL), (((/* implicit */unsigned long long int) var_12))))));
                            arr_31 [i_2] [4] [4] [i_2] [i_2] [i_2] = (((+(((((/* implicit */_Bool) arr_5 [i_8 - 2] [i_1] [i_1])) ? (arr_4 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_1 - 1] [i_3 + 1] [i_8 - 2])), (((((/* implicit */_Bool) 16703371946303403651ULL)) ? (((/* implicit */long long int) 356229254)) : ((-9223372036854775807LL - 1LL))))))));
                            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_8] [i_0] [i_8 - 3])) : ((~(var_8)))))) ? (((((((/* implicit */_Bool) 4279397871371269720ULL)) ? (arr_4 [i_3]) : (((/* implicit */unsigned long long int) 4611686018427387886LL)))) | (((/* implicit */unsigned long long int) -4611686018427387907LL)))) : (((/* implicit */unsigned long long int) ((int) arr_4 [(unsigned short)3])))));
                        }
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) 14026658326780846361ULL)))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) >= (var_6)))), (var_2)))) && (((/* implicit */_Bool) (-(var_4))))));
}
