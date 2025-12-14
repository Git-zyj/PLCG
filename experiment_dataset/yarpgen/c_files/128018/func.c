/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128018
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
    var_11 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_8 [4] [i_3] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1432665912)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)12))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (11384239698872149025ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (((/* implicit */unsigned long long int) var_5))));
                        arr_9 [i_3] [i_2] [i_3] = (!(((/* implicit */_Bool) (short)14)));
                        var_12 = ((/* implicit */unsigned short) ((max((min((-1LL), (((/* implicit */long long int) (unsigned char)0)))), (((/* implicit */long long int) arr_3 [i_1] [i_1] [i_1])))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)0)), (var_7))))))))));
                        var_13 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1]);
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)135))));
        var_14 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        arr_13 [4U] = ((/* implicit */unsigned char) ((10907442649631367260ULL) + (((/* implicit */unsigned long long int) -335687535))));
        arr_14 [i_4] [i_4 + 3] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    }
    var_15 = ((/* implicit */short) -799462142);
}
