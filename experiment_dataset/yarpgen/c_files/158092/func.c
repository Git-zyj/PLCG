/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158092
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) 1580104163U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1018137286U)) || (((/* implicit */_Bool) (short)23372)))))) : (((((((/* implicit */_Bool) 8847110910797295255LL)) ? (5416020773719782574ULL) : (((/* implicit */unsigned long long int) 4294967291U)))) << (((/* implicit */int) var_6))))));
                    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)26260))))) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */int) max((((/* implicit */unsigned int) ((var_16) <= (max((var_18), (((/* implicit */unsigned long long int) (unsigned short)26260))))))), (var_12)));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_10))));
}
