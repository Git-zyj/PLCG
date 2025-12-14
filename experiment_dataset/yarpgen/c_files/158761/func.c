/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158761
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    arr_9 [i_2] = ((short) (!(((/* implicit */_Bool) 10709283755597766077ULL))));
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((int) ((unsigned char) var_9)));
                }
                var_18 |= ((((/* implicit */_Bool) 2970024681U)) ? (1612950276) : (((/* implicit */int) (short)25185)));
                arr_11 [(unsigned short)3] = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((int) (_Bool)0))) * (min((var_5), (((/* implicit */unsigned long long int) arr_6 [10U] [i_1 - 2] [i_1] [i_1 - 1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_6))));
}
