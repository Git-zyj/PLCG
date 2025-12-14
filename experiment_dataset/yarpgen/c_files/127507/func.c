/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127507
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
    var_17 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-13)) ? (10842130522868435907ULL) : (5742911335636994997ULL))) | (((/* implicit */unsigned long long int) 2190318529U))));
        var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (max((((((/* implicit */_Bool) arr_1 [13] [i_0])) ? (((/* implicit */unsigned long long int) -9223372036854775800LL)) : (arr_1 [i_0] [i_0]))), (((arr_2 [i_0]) ? (7604613550841115704ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0]))))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))))))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (unsigned short)41508)) & (266319705)))))) == (((((/* implicit */long long int) var_8)) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (-3530647137604920775LL)))))));
}
