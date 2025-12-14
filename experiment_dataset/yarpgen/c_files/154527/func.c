/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154527
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
    var_11 ^= (-((((((+(-3678019322720432909LL))) + (9223372036854775807LL))) >> (((var_1) + (3291134941174246012LL))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3678019322720432906LL)) && (var_6)));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) - (-3678019322720432892LL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) -3678019322720432909LL)) ? (-3678019322720432902LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [(_Bool)0])), (arr_2 [(_Bool)1] [i_1] [i_1])))) ? (((/* implicit */int) arr_0 [i_1])) : (arr_2 [i_0] [12] [(unsigned char)0])))))))));
                var_16 ^= arr_0 [(_Bool)1];
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) -3678019322720432910LL)) || (((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) << (((((arr_2 [i_0] [i_0] [i_0]) + (1394044415))) - (57)))))))) || (((/* implicit */_Bool) ((3678019322720432910LL) >> (((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_18 = ((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) var_0))));
}
