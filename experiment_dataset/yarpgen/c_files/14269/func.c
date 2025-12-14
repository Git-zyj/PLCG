/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14269
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((var_13) >> (((var_2) - (1358284481)))))))) / (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */long long int) 705290965U)))), (((/* implicit */long long int) 2684662129U))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) == (2316186406916917852LL))))) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))) : (937635248304869755ULL))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_1 - 3])))))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) min((max((arr_5 [i_0 - 1] [i_1 - 2] [i_1]), (arr_5 [i_0 - 1] [i_1 + 1] [(unsigned char)9]))), (((unsigned int) ((((/* implicit */unsigned long long int) -2048)) ^ (937635248304869770ULL))))));
                var_17 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((unsigned char) var_11))), (max((((/* implicit */unsigned int) var_10)), (705290967U))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4311)) ? ((-(((/* implicit */int) arr_2 [(short)14])))) : (max((-2141563960), (135854007))))))));
                arr_9 [(signed char)8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_3 [i_0] [i_1 - 3] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) <= (((/* implicit */int) max((var_12), (((/* implicit */short) arr_1 [i_0 + 1] [i_0])))))));
                arr_10 [i_0] [i_1] = ((/* implicit */short) var_10);
            }
        } 
    } 
    var_18 *= ((/* implicit */_Bool) var_12);
    var_19 ^= ((/* implicit */short) (signed char)67);
}
