/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16043
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
    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-15001))) & (((((/* implicit */_Bool) (unsigned short)57669)) ? (-3702894821588574239LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((min(((-(arr_2 [i_1]))), (((/* implicit */unsigned int) (short)-4096)))) | (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-14996), (((/* implicit */short) arr_0 [i_1]))))))));
                    var_19 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-15002)) && (arr_4 [i_0])))), (((((/* implicit */_Bool) (signed char)15)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4113))))))) <= (896011435U)));
                }
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_1])))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-28293))))))) : (((/* implicit */int) ((arr_2 [i_0]) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_3 [i_0])) - (55))))))))))))));
            }
        } 
    } 
}
