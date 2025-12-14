/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141354
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [12U] &= ((/* implicit */unsigned char) var_5);
                var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (max((var_8), (1535205395))) : (min((var_8), (-1535205401))))), (((/* implicit */int) ((var_0) > (arr_3 [i_0 + 1]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((var_5) ? (519480294) : (((/* implicit */int) (_Bool)1))))) ? (((-772522560802008052LL) / (((/* implicit */long long int) -1535205396)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)2)) | (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_0 + 1]) : (1535205376))))))));
                var_19 = ((/* implicit */short) (~(min((((/* implicit */int) (unsigned char)39)), (arr_3 [i_0 - 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) -1421030359);
}
