/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142920
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
    var_17 += ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(unsigned char)4])) & (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) var_12)) << (((((/* implicit */int) var_15)) - (65458))))) : (((((/* implicit */int) arr_2 [i_0])) << (((var_10) - (1689253370178592752ULL))))))), (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))) & (((/* implicit */int) arr_3 [i_0]))))));
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_4 [i_2] [i_1] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1]))))) & (((arr_4 [i_0] [i_1] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))))) ? (((min((var_6), (((/* implicit */unsigned long long int) arr_0 [i_0])))) << (((((((/* implicit */_Bool) 17178847489774601230ULL)) ? (-571507548) : (-571507539))) + (571507551))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_2 [6]), (((/* implicit */unsigned char) var_13))))) >> (((arr_4 [i_0] [i_1] [i_2]) - (11266016227630029897ULL))))))));
                }
            } 
        } 
    } 
}
