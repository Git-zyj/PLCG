/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103351
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
    var_10 = ((/* implicit */_Bool) ((unsigned short) var_5));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */short) var_4);
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_0 [i_2])) << (((((/* implicit */int) arr_6 [(_Bool)1] [i_0])) - (84))))), (((/* implicit */int) arr_1 [i_2] [i_1]))))) == (((((/* implicit */_Bool) 274877906943ULL)) ? (274877906928ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1881575733453763522LL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) (signed char)87);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned char) var_2)), (var_9))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_9)))))))) : (((unsigned long long int) max((var_0), (((/* implicit */unsigned int) var_9)))))));
}
