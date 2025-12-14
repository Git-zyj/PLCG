/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140385
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
    var_12 = ((/* implicit */short) var_3);
    var_13 = ((/* implicit */short) max((((/* implicit */long long int) (+(max((var_10), (((/* implicit */unsigned int) (_Bool)1))))))), (var_1)));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((((/* implicit */long long int) max((max((((/* implicit */unsigned int) (_Bool)1)), (var_10))), (var_10)))), (2643705011914748745LL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~((+(-1199184774)))));
        var_15 = ((/* implicit */short) ((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1 + 2])) * (((/* implicit */int) var_2))));
        arr_6 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_1 [i_1])))));
    }
    var_16 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) (_Bool)1)))))) / ((~(((/* implicit */int) ((((/* implicit */_Bool) 158099610U)) || (((/* implicit */_Bool) 288230376151711744LL)))))))));
}
