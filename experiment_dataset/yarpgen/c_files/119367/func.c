/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119367
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
    var_12 = ((/* implicit */unsigned char) var_1);
    var_13 = ((/* implicit */unsigned int) (-(807140655)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -807140655)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3963811711866374638LL)));
                    var_14 = ((/* implicit */int) min((var_14), ((-(((/* implicit */int) arr_1 [i_1]))))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (arr_0 [i_0] [i_0])))) ? (max((3963811711866374647LL), (((/* implicit */long long int) arr_2 [(_Bool)1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 807140675)) ? (((/* implicit */int) arr_4 [i_0] [2] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))))))));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_3)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) var_3)))));
    var_17 = ((/* implicit */int) var_11);
}
