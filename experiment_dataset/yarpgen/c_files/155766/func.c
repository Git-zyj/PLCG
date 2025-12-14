/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155766
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (_Bool)0))))))), (((/* implicit */unsigned long long int) min((min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (_Bool)1)))), (6733944964074581268LL))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~((((((_Bool)1) || (((/* implicit */_Bool) 1895993641)))) ? (min((8ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) -4864343643711329407LL))))));
    }
    var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
    var_12 = min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) -731459121)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_6))))), (max((var_8), (((/* implicit */unsigned int) (unsigned char)113)))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_10)) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28048))) & (6219205585566809365ULL))) & (((/* implicit */unsigned long long int) 2798001595U))))));
}
