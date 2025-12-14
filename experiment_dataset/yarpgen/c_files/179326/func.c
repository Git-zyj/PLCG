/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179326
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [(unsigned short)18] [(unsigned short)10] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1063335779U))));
                var_10 = ((/* implicit */_Bool) ((unsigned char) max((min((((/* implicit */long long int) var_9)), (var_1))), (((/* implicit */long long int) arr_3 [i_1 + 1] [12U])))));
                var_11 = min((max((arr_3 [i_1 + 1] [i_1 + 1]), (arr_3 [i_1 + 1] [i_1 + 1]))), (((/* implicit */unsigned char) ((var_4) < (((/* implicit */int) arr_1 [i_1 + 1]))))));
            }
        } 
    } 
    var_12 = max((((/* implicit */short) ((signed char) ((((/* implicit */int) var_7)) << (((var_4) + (1211607608))))))), (var_0));
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        var_13 = ((/* implicit */signed char) max((((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (short)9241))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_2 + 1]) : (((/* implicit */unsigned int) 293673554)))))));
        var_14 ^= (+(((/* implicit */int) (signed char)-6)));
    }
}
