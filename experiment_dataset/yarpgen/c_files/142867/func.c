/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142867
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
    var_19 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_2);
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 239363675U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (860070415U) : (1510516516U))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_1);
    var_21 += ((/* implicit */unsigned int) var_8);
}
