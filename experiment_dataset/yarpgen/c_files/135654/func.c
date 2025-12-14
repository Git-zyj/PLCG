/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135654
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (var_3)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((max((((var_4) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)64))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (var_2) : (arr_0 [i_0])))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_1))) && (((/* implicit */_Bool) (unsigned char)213))))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((max((var_0), (494873461U))) == (494873483U)))) + (((/* implicit */int) ((short) 494873479U)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_2 [i_0])), ((+(var_0)))));
                            var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_1] [i_2] [i_2]), (arr_11 [i_3] [i_0] [i_1] [i_0])))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [12U] [12U] [(_Bool)1])) || (((/* implicit */_Bool) arr_11 [i_3] [2LL] [(signed char)12] [i_0]))))), (min((2351887810264652872ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [(short)11]))))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) < (var_5))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [11ULL] [i_2] [(short)11] [(short)3]))) : (2251799813685247ULL))))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_3]))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) var_4);
                var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((3643410863U), (((/* implicit */unsigned int) var_14))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1])) ? (arr_1 [(short)14] [i_1]) : (arr_1 [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1]))))), (max((var_13), (((/* implicit */long long int) 3800093795U))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_14))))) - (var_13)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_7))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-10))))))))));
}
