/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184569
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
    var_10 = ((_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) arr_0 [i_0])))) >> (31ULL)))) ? (var_0) : (((/* implicit */unsigned long long int) min((((var_3) ? (3048166377U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) -2147483641)))))));
                var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */_Bool) arr_2 [17] [i_1] [1U])) && (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 9238114569180754282ULL))) >> (((8290915927089052735LL) - (8290915927089052714LL))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (short)1781)) : (((/* implicit */int) (signed char)-62))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_0))))));
}
