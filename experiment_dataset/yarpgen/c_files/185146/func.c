/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185146
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) -2147483638))), ((-(((/* implicit */int) ((short) arr_3 [i_0] [i_0] [(short)8])))))));
            arr_5 [(signed char)0] &= ((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) var_10))))), (arr_0 [8ULL])));
        }
        for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) 
        {
            var_18 = ((/* implicit */_Bool) arr_6 [i_2 + 3] [i_2 - 3] [(short)14]);
            arr_10 [i_2] [i_2] [i_0] = min(((((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? ((~(2147483624))) : ((-2147483647 - 1)))), (2147483647));
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) var_12);
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
        var_19 ^= ((/* implicit */unsigned char) (-2147483647 - 1));
    }
    var_20 = ((/* implicit */unsigned char) max((var_2), (var_10)));
}
