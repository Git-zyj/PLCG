/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150898
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20339))) <= (12610623638339242700ULL)))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5836120435370308916ULL)) ? (1400412763) : (((/* implicit */int) (_Bool)0))))) >= (1824559092U))))));
    var_18 = ((/* implicit */long long int) var_6);
    var_19 = (+((-(((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) min((2166375176U), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (1515729893U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) * (2166375176U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_5)))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) max((arr_0 [i_0]), (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) var_4)) : (620290890))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-3)), (arr_3 [i_0]))))))));
            }
        } 
    } 
}
