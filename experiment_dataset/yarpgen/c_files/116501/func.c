/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116501
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
    var_11 = ((/* implicit */unsigned long long int) (~((~(var_10)))));
    var_12 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [(short)12] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (-(min((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_6 [i_2] [i_2]))))), (((((/* implicit */int) arr_6 [i_1] [(_Bool)1])) << (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))))));
                            var_13 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3402047193711276800ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_4))));
                            var_14 = ((/* implicit */int) max((((unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((var_7) - (42516144U)))))), (var_2)));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_1]))))))));
                var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) ? (min((min((arr_3 [7U] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_9 [i_0])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25398)) ? (((/* implicit */int) min((arr_1 [i_0] [i_1]), (var_3)))) : (((/* implicit */int) var_8)))))));
                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_1])))))), (max((min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])), (arr_2 [i_0] [i_1]))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((signed char) ((int) (+(((/* implicit */int) var_5))))));
}
