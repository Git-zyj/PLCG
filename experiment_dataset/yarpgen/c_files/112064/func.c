/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112064
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
    var_11 = ((/* implicit */unsigned int) (~(96)));
    var_12 |= ((/* implicit */long long int) var_1);
    var_13 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) -103)) || (((/* implicit */_Bool) -109)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_0 [i_2]))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35682)))))) : (min((((/* implicit */long long int) (unsigned short)7680)), (var_9)))))) ? (((int) (-(((/* implicit */int) (unsigned short)35664))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) -105)))), ((!(((/* implicit */_Bool) 5257887706510573050LL)))))))));
                    var_16 = (-(((unsigned int) min((var_3), (-110)))));
                }
            } 
        } 
    } 
}
