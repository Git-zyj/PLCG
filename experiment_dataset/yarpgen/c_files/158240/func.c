/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158240
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
    var_13 = 874051582412536097ULL;
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) (short)-31967))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5034795783185957756ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3))))))), (((((17572692491297015533ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? ((~(17572692491297015516ULL))) : (((unsigned long long int) var_8))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_8)) == (((/* implicit */int) (short)-31974))))), ((short)16159))))) % (var_11)));
                var_15 = var_1;
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) || (arr_0 [i_1])))), (min((max((((/* implicit */unsigned short) (short)7)), (arr_1 [i_0]))), (((/* implicit */unsigned short) ((_Bool) var_8))))))))));
            }
        } 
    } 
}
