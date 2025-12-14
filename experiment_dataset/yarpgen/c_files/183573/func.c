/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183573
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
    var_17 |= ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)0)))))), ((-(((/* implicit */int) (!(var_3))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) (_Bool)1))))) ? (-7369879020649475639LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))), ((+((+(var_16)))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (7369879020649475639LL))) * (((/* implicit */long long int) 4294967283U))))), (3442039737047992742ULL))))));
    }
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-4)), ((+(((((/* implicit */_Bool) (unsigned char)25)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) -2LL))))))));
}
