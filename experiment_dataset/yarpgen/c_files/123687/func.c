/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123687
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max(((+(5723729206727303558ULL))), (((/* implicit */unsigned long long int) var_14)))))));
    var_18 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))) : (3059582396U)))) ? (((((/* implicit */_Bool) 455381133U)) ? (3807261365U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32747))))) : (((/* implicit */unsigned int) ((int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((6494767494978652825LL) + (((/* implicit */long long int) (+((+(((/* implicit */int) arr_0 [i_1] [i_0]))))))))))));
            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_2)) - (16183))))) >> (((((/* implicit */int) arr_3 [i_0] [i_1 + 2])) - (26)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)6144))));
            var_22 = ((/* implicit */short) (-(455381133U)));
            var_23 *= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2]))))), (((((/* implicit */_Bool) (short)6129)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2]))) : (0U))));
        }
        for (long long int i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_0] [i_2] [i_2 + 1]))));
            arr_9 [i_2] [i_2] = ((/* implicit */_Bool) (-((-(arr_4 [i_2] [i_2 - 1] [i_0])))));
        }
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) (-(1235384900U)));
            arr_12 [i_0] [i_0] [i_3 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [i_3 + 3])) : (((/* implicit */int) arr_0 [i_0] [i_3 + 3])))))));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) var_0);
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        arr_20 [i_0] [i_4] [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))) : (134152192LL))), (3232636009624152794LL)));
                        var_25 ^= ((/* implicit */signed char) arr_18 [i_4] [i_4]);
                        arr_21 [i_0] [i_4] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_6])) ? (max((((/* implicit */unsigned long long int) 134152179LL)), (arr_5 [i_6]))) : (max((arr_5 [i_6]), (arr_5 [i_6])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_4] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) ((_Bool) arr_10 [i_4]));
                            arr_25 [i_0] [i_0] [i_5] [i_6] [i_7] [(short)19] [i_6] = ((((/* implicit */_Bool) (-(2687401653U)))) ? (arr_5 [i_6]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_5] [i_0]))))));
                            arr_26 [i_0] [i_4] [i_0] [i_5] [i_6] = ((/* implicit */short) (-(352495478453118551LL)));
                        }
                        for (unsigned short i_8 = 2; i_8 < 22; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) arr_10 [i_6])) ? (arr_2 [i_8 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((unsigned char) (unsigned short)48177))))))))));
                            var_27 = ((/* implicit */unsigned int) max((min((var_10), (((/* implicit */unsigned long long int) arr_1 [i_8 + 1] [(short)19])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)185)) + ((+(arr_23 [i_0] [i_4] [i_5] [i_6] [i_6] [i_8]))))))));
                        }
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
}
