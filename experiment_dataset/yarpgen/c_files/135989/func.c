/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135989
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_4] [i_3] [i_2] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_1])), ((-(960398858U)))))) ? (((((/* implicit */_Bool) (-(610734786U)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (var_4)))) : (3334568455U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11))))));
                                var_13 = ((/* implicit */int) (short)26743);
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2301339409586323456LL)) ? (((/* implicit */int) (!((_Bool)1)))) : ((+(arr_9 [i_0] [i_1] [i_2 - 3])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)26591)) > (((/* implicit */int) (!(((/* implicit */_Bool) 3430082408U))))))))) : (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) (((_Bool)1) ? (1428946016U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((long long int) var_4))))));
                    arr_15 [i_1] [i_1] &= ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2170906319551497851ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((3418067003558717563ULL), (((/* implicit */unsigned long long int) (unsigned short)16383)))))))) : (((/* implicit */int) var_11))));
    var_15 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2508879053U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
}
