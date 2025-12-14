/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181743
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
    var_11 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_4 [(unsigned char)13] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */_Bool) arr_8 [i_1]);
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max(((~(arr_0 [8U]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_0 [8ULL]), (((/* implicit */unsigned int) var_3)))))))))))));
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_8 [i_1]))));
        }
    }
    var_14 -= ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (short i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            {
                var_15 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_12 [23])), (var_10)))), (var_9))))));
                var_16 = ((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_2)) ? (var_3) : ((~(((/* implicit */int) arr_14 [i_2] [i_3] [i_2]))))))));
            }
        } 
    } 
}
