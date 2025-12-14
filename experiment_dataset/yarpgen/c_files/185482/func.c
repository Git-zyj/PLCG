/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185482
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
    var_11 ^= ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)124)) >> (((var_0) - (18095948389394390478ULL)))))));
    var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
    var_13 &= ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_0)) ? (0ULL) : (3938600710472407809ULL))), (var_2))), (max((var_2), (((/* implicit */unsigned long long int) var_4))))));
    var_14 = 139637976727552ULL;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_0)))) ? (7245683029544936314ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))))))));
                                arr_14 [i_0] [i_1 + 2] [i_2] [(unsigned char)14] &= (-(min((9257419522523994632ULL), ((-(9257419522523994637ULL))))));
                                var_16 -= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_2] [i_2] [i_5 - 1] [i_6] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) var_6))))) < (((((/* implicit */_Bool) 16342404568027530018ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 1] [i_5 - 1] [i_2] [i_5] [i_1 + 1]))) : (var_1))))))) <= (2127225533317559383ULL)));
                                var_17 = ((/* implicit */unsigned short) 14589894149721433793ULL);
                                var_18 = min((((((/* implicit */_Bool) (-(10363453319727584929ULL)))) ? (((unsigned long long int) (unsigned short)48253)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (var_7));
                                var_19 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_5 - 1] [i_5 - 3] [i_5] [i_1 - 1])) ? (arr_18 [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
