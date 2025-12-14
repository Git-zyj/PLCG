/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169543
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
    var_10 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) ((unsigned char) 2147483639))) : ((+(((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) -2147483627)) ? (((/* implicit */unsigned int) (~(2147483639)))) : (var_4)))));
    var_11 = ((/* implicit */unsigned char) var_8);
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned int) -2147483633)) : (((((/* implicit */_Bool) 609336219837530822ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22970))) : (0U)))))) ? (((/* implicit */unsigned int) 2147483626)) : (var_0)));
    var_13 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)7))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)7))));
                    var_15 |= ((/* implicit */long long int) ((int) 2004048213));
                    var_16 = ((/* implicit */short) max(((+(-2147483639))), (((max((2147483627), (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])))) / (((/* implicit */int) ((short) (signed char)122)))))));
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1 - 1] [19])) : (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
}
