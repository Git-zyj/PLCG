/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187882
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
    var_17 = ((/* implicit */unsigned int) var_12);
    var_18 -= ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (var_1)))) || ((!(((/* implicit */_Bool) var_0)))))))));
    var_19 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (1468044348U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)238)), (8ULL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 2])) ^ (((((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])) & (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2]))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_3 [i_0 + 1] [i_0]))))) : (((8032746666175132734LL) ^ (3551371354001174925LL)))));
                arr_6 [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 979591644987487006ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))) : (var_5)));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-6126)) * (((/* implicit */int) (unsigned char)237))))) ^ (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 2])))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((signed char) 2452197968718755045LL));
}
