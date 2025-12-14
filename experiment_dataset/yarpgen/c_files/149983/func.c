/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149983
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
    var_10 = ((/* implicit */short) var_8);
    var_11 = var_7;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) (-(((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (((((_Bool)1) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)48)))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8364762851439579650LL)) ? (arr_8 [i_0] [i_1] [i_2 + 1] [i_2]) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (short)-30164)) ^ (((/* implicit */int) (unsigned char)235)))))))))));
                                var_14 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(var_7)))) ? (min((max((((/* implicit */long long int) (unsigned char)119)), (4168467255486399273LL))), (((/* implicit */long long int) ((unsigned char) arr_7 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1227647559)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8364762851439579650LL)) || (((/* implicit */_Bool) -8364762851439579650LL)))))) : (((((/* implicit */_Bool) -6392890858768045298LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23576))) : (18446744073709551615ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_5))))))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) var_4)) : (arr_1 [i_5]))), (((/* implicit */int) (short)-23590)))), (((/* implicit */int) ((short) arr_15 [i_0] [i_1] [i_1] [i_6]))))))));
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17171480576ULL)))))) : ((+(-8364762851439579638LL))))))));
                            var_18 = ((/* implicit */_Bool) arr_10 [8LL] [i_1] [i_5] [i_5] [i_6]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)190)) - (((/* implicit */int) (unsigned char)88))))) + (((((/* implicit */_Bool) arr_1 [i_1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0])))))));
            }
        } 
    } 
}
