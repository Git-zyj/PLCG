/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167410
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((signed char) var_11)))));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) var_7)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
                var_15 = ((/* implicit */int) max((var_15), (((((((/* implicit */long long int) ((/* implicit */int) var_2))) > (((((/* implicit */_Bool) 16597020782932279290ULL)) ? (arr_1 [i_0]) : (3447727309566049950LL))))) ? ((-(((/* implicit */int) arr_4 [i_0 + 3])))) : (((/* implicit */int) ((unsigned char) min((var_5), (((/* implicit */long long int) arr_2 [i_0] [i_1]))))))))));
                var_16 = ((/* implicit */_Bool) (-(min((arr_3 [i_0 - 2] [i_0 + 3] [i_0 - 1]), (arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 3])))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (unsigned short)29479))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_7);
}
