/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184679
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
    var_13 &= ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))) ? ((-(12250557505645422148ULL))) : (12250557505645422148ULL)))) ? (max(((-(12250557505645422148ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        arr_3 [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0]))));
        var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (var_12)))), (min((((/* implicit */unsigned long long int) 1936383927)), (6196186568064129446ULL)))));
        arr_4 [3LL] &= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 6196186568064129477ULL)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned short)65524))))) ? ((((_Bool)1) ? (13010193872439997002ULL) : (12120683085568707847ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [6])) : (((/* implicit */int) (signed char)116))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (min((((((/* implicit */_Bool) -2020671890517177831LL)) ? (((/* implicit */int) arr_0 [6ULL] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (var_10)))));
    }
    var_15 = ((/* implicit */short) min((12250557505645422131ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
}
