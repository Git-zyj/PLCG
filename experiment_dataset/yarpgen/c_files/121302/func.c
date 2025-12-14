/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121302
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (unsigned short)56703)) : (((/* implicit */int) (unsigned short)65529))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_5);
                var_19 = var_7;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */int) (unsigned short)65526)), (var_14))))) : (((((/* implicit */_Bool) (~(402653184U)))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    var_21 = min((((/* implicit */int) (unsigned short)0)), (((((/* implicit */_Bool) (unsigned short)65523)) ? (var_17) : (((/* implicit */int) (unsigned short)0)))));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 2573533184U)) && (((/* implicit */_Bool) var_13)))))))) ? (var_2) : (((/* implicit */unsigned long long int) (~((~(402653188U)))))))))));
}
