/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112491
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
    var_12 = ((/* implicit */unsigned char) min((var_12), ((unsigned char)6)));
    var_13 = ((/* implicit */short) (+(var_4)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)32751)))) ? (((/* implicit */long long int) ((unsigned int) (signed char)124))) : (max((5288065278144903889LL), (((/* implicit */long long int) 1537135180U))))))))));
        var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((2327138416U), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))), (((((/* implicit */_Bool) 10494234030361133191ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])))))) ? ((~(arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_8)))) ? (((5288065278144903870LL) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 5288065278144903871LL)))))), ((((!(((/* implicit */_Bool) (signed char)9)))) ? (((((/* implicit */_Bool) -5288065278144903889LL)) ? (5288065278144903904LL) : (((/* implicit */long long int) var_10)))) : (((((/* implicit */_Bool) -5288065278144903894LL)) ? (5288065278144903864LL) : (var_7)))))));
}
