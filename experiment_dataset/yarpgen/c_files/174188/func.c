/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174188
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = (~(((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (9007199254740991LL)))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [(signed char)2]), (((/* implicit */short) (signed char)-66)))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_20 *= max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))))), (((((((/* implicit */_Bool) var_6)) && ((_Bool)1))) ? (((arr_0 [8U] [8U]) >> (((((/* implicit */int) (unsigned short)60503)) - (60490))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4]))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_6))));
    }
    var_22 = ((/* implicit */int) 14765626810800250310ULL);
}
