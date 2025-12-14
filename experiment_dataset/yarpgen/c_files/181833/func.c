/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181833
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
    var_20 = ((/* implicit */short) 2147483647);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) (+(arr_2 [i_0 - 1] [i_1]))))), (arr_2 [i_1] [i_0])));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((0), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-93)), ((unsigned char)210)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 0))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2])) ? ((~(405690982962651151ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (var_15) : (var_11)))) ? (((((/* implicit */_Bool) 18041053090746900465ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_1]))) : (var_18))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((signed char) ((((/* implicit */_Bool) 405690982962651122ULL)) ? (max((var_19), (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 3]))))))));
            }
        } 
    } 
}
