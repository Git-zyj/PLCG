/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187691
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
    var_14 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (+(((/* implicit */int) var_11))))), ((((_Bool)1) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = var_4;
        var_15 ^= ((/* implicit */unsigned char) var_10);
        var_16 = ((/* implicit */unsigned char) ((((long long int) var_1)) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_17 = ((/* implicit */short) min((((/* implicit */long long int) var_11)), (max((min((((/* implicit */long long int) (_Bool)1)), (-1LL))), (((/* implicit */long long int) ((((/* implicit */long long int) var_7)) == (1LL))))))));
    var_18 ^= ((/* implicit */unsigned int) (~((~(((unsigned long long int) (_Bool)0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            {
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_7 [i_1] [i_1]);
                var_19 = ((/* implicit */_Bool) min((var_19), ((_Bool)0)));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((/* implicit */int) var_9)))))));
                arr_9 [i_1] = ((/* implicit */short) (+(min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_2])))));
            }
        } 
    } 
}
