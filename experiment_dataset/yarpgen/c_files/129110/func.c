/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129110
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
    var_19 = ((/* implicit */short) ((var_16) < (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5ULL)) ? (2199023255550LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((5ULL) * (((/* implicit */unsigned long long int) -2199023255556LL))))))));
    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((13335927425670565100ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) min(((unsigned short)56887), (((/* implicit */unsigned short) var_18))))) : (((/* implicit */int) (unsigned short)50849))))) ? ((+((+(((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) var_12))));
    var_21 = ((/* implicit */unsigned char) 2426702172U);
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-6040212067467519410LL)));
                        var_23 = ((/* implicit */unsigned char) arr_0 [i_1] [i_0]);
                        var_24 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 17179869183LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3594122825U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (17179869198LL)));
    }
}
