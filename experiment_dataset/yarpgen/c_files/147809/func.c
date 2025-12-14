/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147809
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(-3335066009341894387LL)))))) & ((~(var_9))))))));
                        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_3 - 2] [i_2] [i_3]))))) ? (((/* implicit */int) arr_8 [i_3] [i_1])) : ((((_Bool)1) ? (((/* implicit */int) arr_0 [(signed char)15] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) (_Bool)1);
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        var_19 -= ((/* implicit */_Bool) ((long long int) (((_Bool)1) ? (((/* implicit */unsigned int) var_8)) : (var_11))));
        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) arr_2 [i_4] [i_4])) & (0ULL)))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((/* implicit */unsigned long long int) (~(arr_2 [(signed char)8] [i_4])))), (((((/* implicit */_Bool) arr_2 [6ULL] [i_4])) ? (var_12) : (((/* implicit */unsigned long long int) arr_2 [(signed char)2] [i_4])))))))));
        var_22 = ((/* implicit */long long int) arr_2 [i_4] [i_4]);
    }
    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
}
