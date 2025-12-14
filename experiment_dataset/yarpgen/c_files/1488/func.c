/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1488
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
    var_12 -= ((/* implicit */unsigned short) 14434292661597753995ULL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) var_9);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_4]))))))) ? (((((/* implicit */_Bool) ((int) var_4))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [13U] [i_1] [i_1] [i_1])))));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_5))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) + (4012451412111797621ULL))) ^ (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_0] [i_1]))));
                arr_19 [i_0] [i_0] = ((/* implicit */signed char) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) /* same iter space */
                {
                    arr_27 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15225477599715447663ULL)) ? (((/* implicit */long long int) var_4)) : (1438754407403728190LL)));
                    var_16 = ((/* implicit */_Bool) (-(1438754407403728213LL)));
                    arr_28 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((int) var_2))) : (var_0)));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_8 + 1] [i_8 - 1] [i_9] [i_8 - 1] [i_8 - 2] [i_9])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_2))))) : (((unsigned int) var_0))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((int) (unsigned short)30117)))));
                        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_11 [i_9])) < (((/* implicit */int) (unsigned char)240)))))));
                    }
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        var_20 ^= (+(((/* implicit */int) var_1)));
                        var_21 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (arr_36 [i_10] [i_8 - 2] [9] [(unsigned short)3] [i_5] [i_8 - 2]) : (((/* implicit */unsigned long long int) arr_30 [11U] [i_8 + 1] [i_5]))))));
                        var_22 = (+(var_8));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) var_5)))))));
                    }
                    arr_39 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_2);
                    arr_40 [i_8] [i_6] [i_8] = ((/* implicit */long long int) (-(6531514751118251874ULL)));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((arr_23 [i_8] [i_8 + 1]) == ((+(((/* implicit */int) (unsigned short)24973)))))))));
                }
                arr_41 [11LL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7341))) ^ (6531514751118251874ULL)))) ? (((((/* implicit */long long int) 1224331529)) / (-698820464469984472LL))) : (((/* implicit */long long int) var_4)))))));
                var_25 = min((((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (short)12052)))) ? (((/* implicit */unsigned long long int) -1438754407403728232LL)) : (10676097319758808223ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 14434292661597753995ULL))) > (arr_38 [i_6] [i_6] [i_5])))));
            }
        } 
    } 
}
