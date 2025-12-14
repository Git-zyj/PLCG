/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126187
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-121))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) (~(min((((((/* implicit */unsigned long long int) var_17)) & (var_12))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 3]))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_4 [i_2] [(short)1] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) (signed char)120)))))))) ? (((unsigned long long int) (~(var_13)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120))))) ^ (((/* implicit */int) min((arr_4 [i_0 + 3] [i_1] [i_1] [i_0 + 3]), (((/* implicit */short) (signed char)112)))))))))))));
                    var_23 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_0]))));
                }
            } 
        } 
    }
}
