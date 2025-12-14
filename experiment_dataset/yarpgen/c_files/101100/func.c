/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101100
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
    var_16 = ((/* implicit */long long int) max((max((((/* implicit */int) (unsigned char)230)), (-658239977))), (-1656464629)));
    var_17 = var_15;
    var_18 |= ((/* implicit */long long int) var_12);
    var_19 = ((/* implicit */long long int) (~(var_8)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((min((12354408798171820778ULL), (((/* implicit */unsigned long long int) (unsigned char)22)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-298910970106062272LL), (((/* implicit */long long int) arr_4 [i_0 + 1] [i_0] [i_0]))))) ? (var_4) : (((3909106761148110019LL) / (-3909106761148110020LL))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)9] [i_0] [i_0 + 1]))) >= (arr_0 [i_0 + 1] [i_0 + 1])))) <= (var_8))));
                arr_6 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [10]))));
                arr_7 [i_0] = ((/* implicit */int) ((signed char) (unsigned char)233));
                var_21 ^= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_1 - 1])) << (((arr_3 [(_Bool)0]) - (18350585127444475882ULL))))));
            }
        } 
    } 
}
