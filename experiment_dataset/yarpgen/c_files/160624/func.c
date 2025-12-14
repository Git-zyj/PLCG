/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160624
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
    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (unsigned short)60368)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_0] [i_0])), (var_5)))) < (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) var_6)) : (4290164491547390134ULL))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)5167))));
                        arr_14 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)5168))));
                        arr_15 [i_2] = ((/* implicit */unsigned char) (unsigned short)60374);
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60368))) != (7799156902280796868ULL)));
                        var_13 |= ((/* implicit */unsigned char) var_2);
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 11; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) arr_18 [i_0] [i_0] [i_0]);
                            arr_22 [i_2] [i_4] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_5 - 1] [i_2] [i_0] [i_2] [i_1])) ? (arr_20 [i_0] [i_0] [i_5 + 1] [i_2] [i_4] [i_2] [i_1]) : (arr_20 [i_1] [i_1] [i_5 + 1] [i_2] [i_5] [i_0] [i_0]))), ((+(arr_20 [i_0] [i_1] [i_0] [i_2] [i_4] [i_5 - 1] [i_0])))));
                            arr_23 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)60368)) > (((/* implicit */int) (unsigned short)60374))));
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5 + 2] = max((((/* implicit */int) var_9)), (var_4));
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                    {
                        var_15 -= ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_6]);
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((arr_18 [i_7] [i_1] [i_1]) / (arr_18 [i_0] [i_0] [i_0])))));
                            arr_31 [i_2] [i_2] [i_2] [i_6] [i_7] = ((/* implicit */short) (-(70368744177663ULL)));
                        }
                    }
                    var_16 = ((/* implicit */int) (~(max((((arr_2 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)107))));
    var_18 |= ((/* implicit */unsigned long long int) ((var_10) - (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)116)))))))));
}
