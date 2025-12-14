/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110795
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_1] [i_2]) : (arr_2 [i_0] [i_2])))) ? (((/* implicit */int) min((((/* implicit */short) var_8)), (var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_5 [i_1])))))))), (min((var_5), (var_5)))));
                    arr_7 [i_2] [(short)22] [i_2] = ((/* implicit */unsigned short) var_4);
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((6695465544128596839LL), (((/* implicit */long long int) 3442019853U))))) && (((/* implicit */_Bool) (~(246589704U))))))) * (((((/* implicit */_Bool) min((4048377604U), (((/* implicit */unsigned int) (short)458))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4048377591U))))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_2]))))));
                    arr_8 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) == ((~(((/* implicit */int) arr_3 [i_2] [i_0]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) var_2);
    var_15 |= ((/* implicit */int) ((unsigned short) ((1085724815318724526LL) >= (((/* implicit */long long int) ((/* implicit */int) ((short) 1085724815318724526LL)))))));
    var_16 = ((/* implicit */unsigned short) min((var_4), (((/* implicit */int) var_8))));
    var_17 = ((/* implicit */short) ((((min((var_4), (((/* implicit */int) var_10)))) & (((/* implicit */int) ((246589689U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) << (((min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (short)-18016)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))))) - (14888)))));
}
