/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163639
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
    var_12 = ((/* implicit */short) var_0);
    var_13 = var_3;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((short) ((unsigned char) arr_1 [i_0])));
        var_15 = ((/* implicit */unsigned int) (short)31472);
        arr_2 [2ULL] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (unsigned short)37116)))));
        var_16 *= var_7;
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_17 *= ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) (_Bool)0)));
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) arr_9 [i_1] [i_2] [i_2]);
            arr_10 [i_1] [i_2] [i_1 + 1] = ((/* implicit */unsigned int) arr_8 [i_1] [i_2] [i_1]);
        }
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_14 [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? ((-(((/* implicit */int) arr_4 [i_3])))) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        arr_23 [i_3] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_22 [i_3] [i_6] [i_6] [i_6]), (arr_22 [i_3] [i_4] [(signed char)1] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1099511627775LL))))) : (((/* implicit */int) (signed char)31))));
                        var_19 *= ((/* implicit */_Bool) arr_9 [i_3] [i_5] [(short)9]);
                        var_20 ^= ((signed char) max((arr_19 [i_3]), (arr_19 [4LL])));
                    }
                } 
            } 
        } 
    }
}
