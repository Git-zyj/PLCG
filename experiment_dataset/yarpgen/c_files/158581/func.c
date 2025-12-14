/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158581
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = (_Bool)1;
                var_14 -= ((/* implicit */unsigned long long int) ((((_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1]))) : (((/* implicit */long long int) (~(((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((/* implicit */int) (_Bool)0)))))))));
                arr_7 [i_1] &= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) : ((~(((/* implicit */int) arr_2 [i_0] [i_0])))))) == (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) <= (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-1553613491938150664LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 3059176215978703464ULL))))) : ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) (((((~(((/* implicit */int) var_10)))) + (2147483647))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_11))) - (1359234740U)))))) : (min((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) -1399648356)) ^ (1288782231U)))))));
}
