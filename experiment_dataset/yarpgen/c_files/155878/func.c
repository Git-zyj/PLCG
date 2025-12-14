/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155878
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [(short)1] [10U] = (signed char)127;
                arr_6 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((long long int) (short)3315)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) (short)8)))))));
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_10)))) ? (((((((/* implicit */int) (short)-32750)) + (((/* implicit */int) (short)5)))) & (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) arr_4 [1] [i_1] [i_1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_9 [i_0] [13ULL] [(_Bool)1] = ((/* implicit */int) (short)-32765);
                    arr_10 [(unsigned short)5] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) var_12))));
                    var_14 *= ((/* implicit */unsigned int) var_9);
                    arr_11 [i_2] [i_2] [0ULL] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_2 [i_2]))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (((~(((/* implicit */int) (short)11)))) != (((((/* implicit */_Bool) 1596860225)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) var_4))))))) % (((/* implicit */int) var_0))));
    var_16 = ((/* implicit */int) var_4);
}
