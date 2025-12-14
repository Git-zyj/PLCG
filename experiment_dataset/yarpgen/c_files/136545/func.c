/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136545
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) <= (var_8)))) | (arr_11 [i_3] [i_0] [i_3] [i_0] [i_2])));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 &= ((/* implicit */long long int) arr_1 [i_3] [20LL]);
                            var_19 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2] [(unsigned short)10])) ? (2522184511U) : (2522184518U))));
                            var_20 ^= ((/* implicit */signed char) ((long long int) ((min((((/* implicit */unsigned int) var_15)), (2522184498U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((3758393297840108278ULL) != (((/* implicit */unsigned long long int) 1772782791U)))))))));
                        }
                        var_21 = ((/* implicit */_Bool) min((var_21), (((((min((((/* implicit */unsigned long long int) 1772782796U)), (3758393297840108278ULL))) | (((/* implicit */unsigned long long int) 2522184529U)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) 1772782766U)), (arr_14 [0ULL]))))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) 
                        {
                            arr_18 [i_2] [i_2] [i_2] [i_2] [i_5] [i_0] [i_1] = ((/* implicit */short) arr_14 [i_0]);
                            arr_19 [i_3] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3758393297840108278ULL)) ? (((/* implicit */unsigned long long int) 2522184511U)) : (13573971054948948164ULL)))) ? (2522184534U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-42)))))) << (((2522184501U) - (2522184485U)))));
                            arr_20 [i_5] [i_5] [i_0] [i_0] [i_5] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3758393297840108293ULL) <= (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_12 [i_5] [i_2] [i_1] [i_0])) ? (3259499760U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_14)))))) / ((~(1772782766U)))))));
                            arr_21 [i_0] [i_0] [i_2] [i_0] [i_5 + 2] = ((/* implicit */int) (~(14688350775869443332ULL)));
                            var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_10 [i_0] [i_3 - 1] [i_3 - 1] [i_5])) ? (max((2522184525U), (1772782770U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1772782771U)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (signed char)2)))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (-(126100789566373888LL))))));
                            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)72)), (1772782780U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_23 [i_6] [i_3] [i_2] [i_1] [i_1] [i_0])) : (var_3)))) : (2522184518U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_14 [i_0]) / (((/* implicit */long long int) var_3)))) >= (((/* implicit */long long int) ((var_13) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))))))));
                            arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_4) : (((/* implicit */int) var_9))))) ? (1772782793U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2522184509U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) >= (max((((unsigned int) var_15)), (((/* implicit */unsigned int) arr_7 [i_0] [i_3] [i_0]))))));
                            arr_25 [i_6] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */long long int) 1772782780U)) : (((((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2])) ? (9223372036854775807LL) : (((/* implicit */long long int) var_0)))) - (((/* implicit */long long int) 2522184521U))))));
                        }
                    }
                } 
            } 
        } 
        arr_26 [i_0] = ((/* implicit */_Bool) min((((((1772782771U) > (1772782746U))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) (unsigned short)28844))))) : (3758393297840108254ULL))), (((/* implicit */unsigned long long int) ((signed char) max((-126100789566373884LL), (((/* implicit */long long int) -1563538820))))))));
        arr_27 [(signed char)12] |= ((/* implicit */signed char) 2651374614U);
    }
    var_25 *= ((/* implicit */unsigned long long int) 131344449U);
}
