/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156184
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
    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) != (var_1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) 17535008522148694839ULL)))))))) && (((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_10))))))))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_5))));
    var_15 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) 4626696098167061226ULL);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
            arr_10 [i_0] [i_0] = ((/* implicit */long long int) (-(15739755096433140036ULL)));
        }
        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(14151583308922920069ULL)))) ? (((/* implicit */int) ((signed char) 274877906943ULL))) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_0 - 2]))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_7 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1006632960)) && (((/* implicit */_Bool) (signed char)-8)))))))))));
    }
}
