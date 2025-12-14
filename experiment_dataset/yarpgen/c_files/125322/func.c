/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125322
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) (+((~((~(arr_6 [i_1])))))));
                var_13 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_4 [i_1 + 2] [i_1]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((+(var_0))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))))));
                            arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) ((signed char) arr_7 [i_2] [i_2]))) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_11 [9ULL])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)10] [i_2]))) : (((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */unsigned int) arr_2 [i_1 - 1])) : (((unsigned int) arr_7 [i_1] [8]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((min((var_3), (((/* implicit */long long int) var_0)))) != (((/* implicit */long long int) ((/* implicit */int) var_1))));
}
