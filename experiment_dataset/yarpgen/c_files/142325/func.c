/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142325
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [14U] [2LL])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) ((arr_7 [i_0] [(short)14]) * (arr_4 [i_0] [i_0] [(_Bool)1] [i_0])))))) ? (((((18025602687351479360ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) % ((-(arr_4 [i_2] [i_1] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 + 1])) <= (((/* implicit */int) (unsigned char)13))))))));
                    arr_9 [i_0] [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_2]))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1]))))) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (arr_7 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_12 = min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : ((~(var_7))))));
}
