/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120654
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_8))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_1] [i_0] [i_0])), (max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))), (max(((unsigned short)65521), ((unsigned short)65529)))))));
                arr_9 [i_0] [7U] = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)0)))) < ((~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) max(((unsigned short)18), (((/* implicit */unsigned short) min((var_1), (var_11))))))) : ((-(((((/* implicit */int) var_2)) + (((/* implicit */int) var_8))))))));
}
