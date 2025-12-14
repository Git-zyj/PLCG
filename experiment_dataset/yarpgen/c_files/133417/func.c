/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133417
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
    var_17 = ((/* implicit */unsigned long long int) var_1);
    var_18 = ((/* implicit */long long int) 4294967281U);
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)234)) - (((/* implicit */int) (signed char)-22))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */unsigned char) ((unsigned int) 0U));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)99)), (4396972769280LL)))) ? ((-(134217727U))) : (max(((~(4294967295U))), (var_4)))));
                        var_22 = ((/* implicit */unsigned int) (-(((min((((/* implicit */long long int) 2000311262)), (var_16))) / (((/* implicit */long long int) ((/* implicit */int) max((var_13), ((short)32352)))))))));
                    }
                }
            } 
        } 
    } 
}
