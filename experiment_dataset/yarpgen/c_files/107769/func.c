/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107769
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                var_12 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_9)))) >= (((((/* implicit */_Bool) ((short) arr_4 [i_0] [(short)13]))) ? (((/* implicit */int) min(((unsigned char)224), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) ((signed char) 7713125650184684896LL)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_2 - 1] [i_0]);
                            var_13 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)31))))), (((((/* implicit */_Bool) (signed char)-77)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [14LL] [14LL] [i_2 - 1])))))))), (min((((arr_6 [i_0] [(short)8] [(unsigned char)6]) ^ (((/* implicit */unsigned long long int) 134217727U)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))))));
                            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((long long int) (!((_Bool)0))));
                            var_16 = max(((+((-(2776547806606443078LL))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (arr_1 [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_0))));
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
        {
            for (long long int i_8 = 3; i_8 < 9; i_8 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (((((/* implicit */_Bool) arr_23 [i_6] [7U] [(unsigned char)7])) ? (-5714833256335442806LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_2 [i_6] [i_7] [i_6]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 3; i_9 < 9; i_9 += 1) 
                    {
                        for (int i_10 = 2; i_10 < 9; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((((~(((int) 467569492U)))) + (2147483647))) >> (((((/* implicit */int) ((signed char) var_3))) - (76))))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6881391296531020139LL)) * (11478306899095930333ULL)))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69)))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8 - 2] [i_8 - 2] [i_8 - 3]))) & (473898613U)))));
                }
            } 
        } 
    } 
}
