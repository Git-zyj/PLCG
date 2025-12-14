/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121601
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
    var_16 = ((unsigned int) ((unsigned long long int) (short)7936));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_1 [i_2 + 2] [i_1])))));
                    var_18 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (var_11)))) ? (arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : ((-(arr_3 [i_2] [i_0] [i_0])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_19 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
            var_20 ^= ((/* implicit */unsigned int) (~(269351875)));
        }
    }
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
    var_22 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (var_10) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (-841189152))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)26)) || (((/* implicit */_Bool) 2069452541976191347LL))))))))));
}
