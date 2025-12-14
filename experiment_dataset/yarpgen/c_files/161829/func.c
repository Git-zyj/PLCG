/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161829
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
    var_10 ^= ((/* implicit */unsigned char) 1195107375184064551ULL);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (-(((unsigned long long int) ((12841057043476513080ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (short)-1);
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (short)12658))))));
        var_12 = ((/* implicit */unsigned long long int) (unsigned char)22);
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_13 = ((((/* implicit */_Bool) min((var_2), (arr_4 [i_1])))) ? (((unsigned long long int) var_6)) : ((-(var_2))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((3857296251311942186ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29)))));
                    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */short) arr_12 [i_1])), (((short) arr_12 [i_2]))));
                }
            } 
        } 
        var_16 += min((((unsigned long long int) ((unsigned long long int) arr_6 [i_1]))), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)255))) ? (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)29)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-13), (((/* implicit */short) var_9)))))))));
    }
    var_17 = var_9;
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_2))));
}
