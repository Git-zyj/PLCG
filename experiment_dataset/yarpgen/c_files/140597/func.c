/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140597
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((18446744073709551615ULL) & (arr_5 [i_0]))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_3])), (8116426793812426246ULL))))))) : (((((((/* implicit */int) (short)23942)) >> (((/* implicit */int) arr_2 [i_0] [i_2] [i_3])))) << (((((/* implicit */_Bool) arr_1 [i_0])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_0])))))))));
                            var_18 = ((/* implicit */unsigned char) (+(min((1ULL), (((/* implicit */unsigned long long int) (short)-19115))))));
                            var_19 = ((/* implicit */short) arr_8 [i_0] [i_2] [i_2] [i_3]);
                            var_20 += ((/* implicit */short) ((min((arr_1 [i_2]), (arr_1 [i_0]))) < ((~(arr_1 [i_2])))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((/* implicit */short) 1ULL);
                arr_11 [i_1] = ((/* implicit */unsigned char) (((~(min((((/* implicit */unsigned long long int) arr_7 [3ULL] [i_1] [i_1] [i_1])), (15ULL))))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19110))) * (5701302668138099024ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_1])), (4294967295U))))))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_21 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20128))))) * ((-(((26ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19099)))))))));
                            var_22 = ((/* implicit */long long int) min((11ULL), (min((((/* implicit */unsigned long long int) (short)-19129)), (3769445573453903941ULL)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        for (signed char i_8 = 1; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((((((/* implicit */_Bool) 29ULL)) ? (18446744073709551607ULL) : (18446744073709551608ULL))) ^ (((((/* implicit */_Bool) 18446744073709551587ULL)) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_6] [i_6])) : (56ULL)))))));
                                arr_27 [2ULL] [i_1] [i_1] [i_1] [(short)13] [i_8] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) -1851501184427240098LL))))), (((((/* implicit */_Bool) (short)-20444)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19115))))))) + (((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [i_1]))) ? (max((((/* implicit */unsigned long long int) (short)19136)), (arr_16 [i_0] [i_6] [i_7]))) : (min((((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_6] [i_0])), (0ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) ((var_7) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))));
    var_24 = ((/* implicit */unsigned int) (-(min((11ULL), (18446744073709551560ULL)))));
}
