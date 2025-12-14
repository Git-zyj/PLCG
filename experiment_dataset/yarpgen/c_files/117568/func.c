/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117568
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
    var_16 = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) ((max((527095270U), (13U))) < (var_15)))) : (((/* implicit */int) ((max((803093564U), (((/* implicit */unsigned int) (_Bool)0)))) > (var_15))))));
    var_17 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (max((((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_0 [i_1])))))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)0))))) / (arr_4 [i_0])))))));
                var_19 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) & (((/* implicit */long long int) arr_2 [i_0]))))))))) < (((((/* implicit */_Bool) min((3767871999U), (3767872015U)))) ? (((/* implicit */long long int) arr_2 [i_1])) : (((((/* implicit */_Bool) -20LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8992081152404327343LL)))))));
            }
        } 
    } 
    var_21 = var_9;
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = 13U;
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 20LL))))) >> ((((~(((/* implicit */int) arr_3 [i_2])))) + (24)))))) <= (((((/* implicit */_Bool) 4294967295U)) ? (max((-7082611419248536731LL), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))))));
    }
}
