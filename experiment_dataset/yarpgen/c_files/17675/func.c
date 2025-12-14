/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17675
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [9ULL] [9ULL] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_5)), (7379373820591432871ULL))));
                var_19 = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)(-32767 - 1))))) & (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_0 [i_0 + 4])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (min((((/* implicit */unsigned int) (short)16297)), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)23), (((/* implicit */unsigned char) var_5))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_2))) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_10))));
}
