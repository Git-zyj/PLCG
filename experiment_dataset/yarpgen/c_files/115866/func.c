/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115866
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_17 *= ((/* implicit */unsigned char) min((max((((/* implicit */short) var_6)), (arr_3 [i_0 + 2]))), (((/* implicit */short) ((var_10) < (((/* implicit */unsigned int) arr_2 [i_0 - 1])))))));
                    arr_7 [i_0] [4ULL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((unsigned int) 6327579247712505231LL))))) ? (((/* implicit */long long int) (+(3936010348U)))) : ((~(((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
                }
                var_18 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || ((!(((/* implicit */_Bool) -5166545284335208998LL)))))))));
                var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) / (max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0] [i_0]) : (var_16)))) ? (var_10) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_11) : (839420207U)))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_1);
}
