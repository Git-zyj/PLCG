/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12137
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
    var_12 = ((/* implicit */signed char) ((var_6) << (((((/* implicit */int) ((unsigned short) ((unsigned short) var_1)))) - (13155)))));
    var_13 = var_3;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_1 [i_0])))) - (((((/* implicit */_Bool) 866051134U)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 5287915596608613022ULL))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1] [i_0])), (arr_3 [i_0] [i_0])))) : (((/* implicit */int) ((min((1038129798348462467LL), (((/* implicit */long long int) (unsigned short)57964)))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_11))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) ((signed char) var_2)))));
}
