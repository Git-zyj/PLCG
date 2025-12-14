/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17506
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
    var_14 = ((/* implicit */_Bool) (+(var_0)));
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (((~((~(-8332817943579819230LL))))) ^ (((/* implicit */long long int) 296433962)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) 3951946436U);
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((var_10) ? (((/* implicit */int) (unsigned char)115)) : (arr_0 [i_0])))))) ? (((((/* implicit */_Bool) 11883345101752232956ULL)) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0] [8]))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [8LL]))))) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) ((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
        var_17 ^= ((/* implicit */unsigned char) min((((/* implicit */int) (!((!(((/* implicit */_Bool) 18446744073709551603ULL))))))), (arr_0 [i_0])));
    }
}
