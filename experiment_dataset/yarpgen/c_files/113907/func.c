/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113907
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
    var_11 = ((/* implicit */short) (+(((/* implicit */int) (short)13571))));
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)30568)) ? (((/* implicit */int) (short)30567)) : (((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) max(((short)13571), (((/* implicit */short) var_10))))), ((+(((/* implicit */int) var_6))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) 4194303LL)))), (arr_4 [i_0] [i_1])))), (((unsigned long long int) -128))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26672)))))))))));
}
