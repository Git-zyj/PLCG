/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182670
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max(((+(var_2))), (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))));
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)13973)), (852519990U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))) != (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_18))))))) <= (((((/* implicit */_Bool) (unsigned short)13977)) ? (((/* implicit */int) var_13)) : (max((-83827117), (((/* implicit */int) (unsigned short)13969))))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) min((826052329U), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8172679983559625545LL)) ? (((/* implicit */unsigned long long int) 83827116)) : (6656746171690291365ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (short)11304)) : (((/* implicit */int) (short)31054))))) : (((((/* implicit */_Bool) (unsigned short)13969)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40)))))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((arr_3 [i_1] [i_0] [i_1]) % (arr_3 [i_1] [i_1] [i_1]))))));
                var_23 += ((/* implicit */int) (unsigned char)4);
            }
        } 
    } 
}
