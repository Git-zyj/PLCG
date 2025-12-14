/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105299
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */unsigned int) arr_0 [i_1])) % (min((2394514586U), (((/* implicit */unsigned int) -1016375240)))));
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0] [i_1])) <= (((/* implicit */int) var_1)))) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)35569)) == (-1534855462))))))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1])) ? (arr_4 [i_1 + 3]) : (var_7))) : (((/* implicit */int) var_4)));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)9869), ((unsigned short)42059)))) ? (var_3) : (min((arr_4 [i_1 - 2]), (arr_4 [i_1 - 2]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */int) arr_6 [i_2]);
                var_19 ^= ((/* implicit */unsigned int) arr_6 [i_3]);
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -443167680))) ? (((/* implicit */unsigned int) (~((-2147483647 - 1))))) : (max((((arr_6 [i_2]) ? (arr_7 [2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_2]))))), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) -2016799655)))))))));
            }
        } 
    } 
    var_21 *= (!(((/* implicit */_Bool) (-(-41561178)))));
    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) var_14)) + (((((/* implicit */_Bool) ((unsigned short) var_10))) ? ((-(((/* implicit */int) (unsigned short)23476)))) : (((((/* implicit */int) var_1)) + (((/* implicit */int) (_Bool)1))))))))));
}
