/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184316
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))), ((~(((((/* implicit */_Bool) arr_2 [12U])) ? (arr_2 [i_0]) : (arr_1 [7LL] [i_0])))))));
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) 8372224))));
        var_19 = min((((unsigned long long int) (~(16944201832098728756ULL)))), ((-(arr_1 [i_0] [i_0]))));
    }
    for (short i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (~(9248128088434084383ULL)));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_7 [i_2] [i_1])), (arr_4 [i_1]))), (((/* implicit */unsigned long long int) arr_5 [i_1])))))));
            var_20 = ((/* implicit */short) (-((~(arr_4 [i_1 - 1])))));
        }
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_3] [i_3]))));
        var_22 = ((/* implicit */unsigned long long int) arr_10 [i_3] [i_3]);
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((8372224), (648262534)))), (((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) | ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_4)))))));
}
