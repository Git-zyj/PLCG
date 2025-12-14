/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17861
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
    var_14 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((2178168951U), (((/* implicit */unsigned int) var_0))))) ? (var_0) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)0), (var_5)))) / (min((((/* implicit */int) max(((unsigned short)55839), ((unsigned short)64439)))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)18346)) : (((/* implicit */int) (unsigned short)50706))))))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65528)) ? (arr_5 [i_1]) : ((+(((((/* implicit */_Bool) -918351697)) ? (var_6) : (((/* implicit */int) (unsigned short)64439))))))));
            }
        } 
    } 
}
