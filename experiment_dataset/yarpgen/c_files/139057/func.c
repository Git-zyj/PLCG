/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139057
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
    var_13 |= ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)210)))), (((/* implicit */int) min(((unsigned short)8160), (((/* implicit */unsigned short) var_1)))))))) ? (((/* implicit */int) (unsigned char)45)) : (((((/* implicit */int) max((arr_0 [i_0] [i_0]), ((_Bool)0)))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 17870283321406128128ULL)))))))));
        var_15 = max((min((576460752303423487ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16368)) * (((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned long long int) 67108863LL)));
    }
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 67108867LL)), ((~(max((var_12), (((/* implicit */unsigned long long int) var_5)))))))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)41472)))))));
}
