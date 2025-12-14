/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159180
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
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0]))), (arr_1 [i_1])));
                arr_4 [i_0] [i_1 - 2] = ((((/* implicit */_Bool) 478227113)) ? (0ULL) : (11665182085626969121ULL));
            }
        } 
    } 
    var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(var_4)))) > (var_8)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1081854313)) ? (11665182085626969121ULL) : (11665182085626969121ULL)))) ? (6781561988082582490ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(-1796618278))) : (((((/* implicit */_Bool) 2111825189U)) ? (var_4) : (-1796618278)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(6781561988082582494ULL)))) || (((/* implicit */_Bool) (-(1759226604U))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) * (((/* implicit */unsigned long long int) 0U))))))))));
    var_15 = (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_5) : (var_4)))), (((((/* implicit */_Bool) var_8)) ? (11665182085626969121ULL) : (((/* implicit */unsigned long long int) var_10)))))));
    var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) -380444161)), (124548049U)))) ? (14308816292190787145ULL) : (((/* implicit */unsigned long long int) 2708938962U)))), (((/* implicit */unsigned long long int) (~(max((var_3), (((/* implicit */unsigned int) var_6)))))))));
}
