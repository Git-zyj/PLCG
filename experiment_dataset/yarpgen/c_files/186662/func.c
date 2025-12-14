/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186662
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
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (unsigned char)0))))));
        var_18 = ((/* implicit */short) ((int) arr_3 [i_0] [(_Bool)1]));
    }
    for (short i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_9 [i_1] [i_3] [i_1] [i_2]))) % (((/* implicit */int) arr_2 [i_1] [i_1 - 1]))))) ? ((~(((/* implicit */int) arr_6 [i_2])))) : (min((arr_4 [i_1 - 1] [i_1 - 1]), (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1]))))));
                    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) min(((!((_Bool)1))), (arr_0 [i_1 + 2]))))));
                }
            } 
        } 
        var_21 ^= ((/* implicit */_Bool) ((long long int) (short)31));
        var_22 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [(_Bool)1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
    }
    var_23 = ((/* implicit */unsigned short) var_16);
}
