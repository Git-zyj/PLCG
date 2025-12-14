/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170994
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
    var_17 = ((/* implicit */signed char) 14883344999410059293ULL);
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_15))))))) >= ((~(((14883344999410059293ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)65))));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_13);
        var_19 = ((/* implicit */signed char) ((max((min((4723450536199870423LL), (((/* implicit */long long int) arr_2 [(_Bool)1])))), (((/* implicit */long long int) (unsigned char)177)))) << (((((/* implicit */int) arr_0 [i_0 + 4])) | (((/* implicit */int) arr_0 [i_0 + 1]))))));
    }
    var_20 = (!(((/* implicit */_Bool) var_11)));
}
