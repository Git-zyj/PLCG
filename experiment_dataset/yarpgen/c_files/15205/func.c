/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15205
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
    var_13 = ((((/* implicit */_Bool) max((var_9), (max((-89584272), (((/* implicit */int) (unsigned short)65535))))))) ? (((((/* implicit */int) var_8)) << (((/* implicit */int) var_11)))) : (-262144));
    var_14 = ((/* implicit */unsigned short) 262144);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((-262146), (-262146)))) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) 262146)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)14250)))) ? (((/* implicit */int) ((signed char) var_6))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)14228)) : (var_3))) & ((~(((/* implicit */int) var_8))))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -107015963655936498LL)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) (-2147483647 - 1))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5187526271881206184LL)))))))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_18 = (~(((/* implicit */int) var_0)));
        var_19 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_4 [4])) : (((/* implicit */int) arr_2 [i_1])))) % (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_2 [i_1])))))));
    }
    var_20 = ((/* implicit */long long int) var_0);
}
