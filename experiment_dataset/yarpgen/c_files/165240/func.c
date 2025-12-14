/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165240
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
    var_11 *= ((/* implicit */unsigned int) var_9);
    var_12 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_2)), (var_6))), (((((/* implicit */_Bool) -7980499610515819267LL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)98)))))))) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((var_8) * (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_0))));
                    arr_9 [i_0] [i_0] [5ULL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (min((((/* implicit */int) (unsigned char)157)), (arr_2 [i_0]))) : (((int) arr_2 [i_0]))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_0])), (var_3))))))) ? (((7980499610515819267LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))))) : ((-(((((/* implicit */_Bool) arr_0 [(unsigned char)15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) : (0LL)))))));
                }
            } 
        } 
    } 
}
