/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108050
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_13)), (min((var_2), (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) min(((-(((/* implicit */int) (signed char)-30)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) -3LL)))))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : ((+(((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (0ULL)))))));
    var_17 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 8128U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) : (3463300094U)))))) ? (((long long int) ((_Bool) (short)8951))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (576460752303423488LL)))) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (5471458373733807248LL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(_Bool)1] [i_1] = ((/* implicit */signed char) min((7LL), (((/* implicit */long long int) -7))));
                var_18 *= ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
                arr_7 [i_0] [(unsigned char)19] [(unsigned char)19] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_4 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_19 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 5857204733267971673LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)30761)))) : (min((-5471458373733807249LL), (((/* implicit */long long int) -1179420079))))))));
}
