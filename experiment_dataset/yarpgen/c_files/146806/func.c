/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146806
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (arr_7 [i_0]) : (max((((/* implicit */long long int) arr_9 [i_2] [i_0])), (arr_7 [i_0])))));
                            var_11 = ((/* implicit */int) arr_0 [i_3] [i_3]);
                            arr_11 [(unsigned short)14] &= ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_9 [i_3 - 1] [16]))))));
                            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((((826121932U) >> (((var_10) - (6086889454389723052LL))))), (((/* implicit */unsigned int) arr_3 [i_3 - 1] [i_3 - 1])))))));
                            arr_12 [8ULL] [i_3] [i_2] [i_1] [8ULL] &= ((/* implicit */unsigned char) 863841517);
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)-77)), (var_3))))))) >> (((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_10)))) & (arr_4 [i_0]))) - (4913436769132765857ULL)))));
                var_13 = ((/* implicit */short) min((var_13), (arr_9 [(short)14] [(short)14])));
                var_14 = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 826121932U)) ? (((/* implicit */unsigned long long int) 3468845340U)) : (3619050233701417855ULL)));
    var_16 = ((/* implicit */unsigned char) -1278237676);
    var_17 = ((/* implicit */signed char) ((var_2) || (((/* implicit */_Bool) (unsigned char)160))));
}
