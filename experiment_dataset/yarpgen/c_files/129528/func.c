/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129528
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [6ULL] [6ULL] &= ((unsigned short) ((((/* implicit */long long int) min((3194833276U), (((/* implicit */unsigned int) (unsigned short)24))))) != (max((((/* implicit */long long int) arr_4 [(unsigned short)4])), (var_8)))));
                var_15 = ((/* implicit */long long int) 16084467912313434133ULL);
                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3515491238U)) ? (((/* implicit */unsigned long long int) -674912341644755845LL)) : (16084467912313434133ULL)));
                arr_6 [(signed char)18] [(signed char)18] [(unsigned char)4] &= ((/* implicit */signed char) (+(11400365451791783797ULL)));
                var_17 &= var_8;
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)8))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_13)) : ((-(((((/* implicit */_Bool) var_1)) ? (5614714568423404785LL) : (var_8)))))));
    var_20 = ((/* implicit */_Bool) var_14);
}
