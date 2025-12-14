/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142201
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
    var_11 = ((((/* implicit */_Bool) (~(((int) (_Bool)1))))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) -7576545393170264821LL)) <= (1ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) (((+(max((1ULL), (arr_1 [i_1 + 1]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((3786794174118183358ULL), (((/* implicit */unsigned long long int) -8576214822301475872LL))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1 + 1]))))))));
                var_12 = ((/* implicit */long long int) arr_2 [i_1] [i_0] [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */int) ((short) var_3))), ((~(((/* implicit */int) var_10))))));
}
