/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184855
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7)))));
                                var_15 &= ((/* implicit */unsigned long long int) (+((+(4123224335U)))));
                                var_16 = ((/* implicit */unsigned short) ((((var_8) == (var_4))) ? ((+(var_10))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_5] [18U] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) >= (var_4))))) >= (max((((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((0ULL) - (((/* implicit */unsigned long long int) 98287421))))))));
                            var_17 = ((/* implicit */long long int) ((((unsigned long long int) var_7)) <= (((/* implicit */unsigned long long int) (+(var_3))))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (signed char)70))))))));
                            arr_19 [i_0] [i_0] [i_6] = (!(((/* implicit */_Bool) var_2)));
                            arr_20 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                        }
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            arr_25 [i_7] [0LL] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (~((~(var_6))))));
                            var_19 = ((/* implicit */_Bool) (+(max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (-(var_10))))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (var_3))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_1))))) : (((long long int) var_9))));
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_7))))));
                        }
                        var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (var_3) : (var_0)))));
                        arr_26 [i_5] [i_2 - 2] [i_1] [(short)11] [i_0] [i_0] = ((/* implicit */int) (-(max(((-(var_3))), (((/* implicit */long long int) ((unsigned short) var_0)))))));
                        var_23 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_7)))) - (((((/* implicit */_Bool) ((signed char) var_11))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        arr_29 [i_0] [i_0] |= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_7)) > (var_13))) ? (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                        var_24 ^= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((+(((/* implicit */int) var_12))))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (-((+(((var_9) - (var_9))))))))));
                    }
                    for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))));
                        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_9)))));
                        var_28 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */unsigned long long int) var_3)) * (var_8)))));
                        arr_34 [i_0] [i_0] [11ULL] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (var_7))) ? ((+(var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (4123224335U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78)))))) ? (var_0) : (var_3)))));
                        arr_35 [i_0] [i_1] [i_1] [i_2] [i_9] = (+(((/* implicit */int) var_12)));
                    }
                    arr_36 [i_2 - 1] [i_1] [i_0] = ((/* implicit */int) max(((-(var_8))), (((/* implicit */unsigned long long int) var_1))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) (~((~(var_13)))));
    var_30 = ((/* implicit */int) max((2889839227U), (2889839244U)));
    var_31 = ((/* implicit */signed char) var_3);
}
