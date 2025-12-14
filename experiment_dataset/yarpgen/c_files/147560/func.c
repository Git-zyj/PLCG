/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147560
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
    var_15 = ((/* implicit */int) var_9);
    var_16 = ((/* implicit */_Bool) ((16097776228190368984ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8)))));
    var_17 = var_12;
    var_18 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0 + 2] = ((/* implicit */long long int) 15914982872286260254ULL);
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65527)) == (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) ((unsigned char) (unsigned short)8))) : (((((/* implicit */int) (unsigned char)150)) ^ (((/* implicit */int) (unsigned char)127))))))) ? (((((/* implicit */_Bool) ((unsigned int) (signed char)46))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (signed char)98)))) : ((-(((/* implicit */int) (unsigned short)58685)))))))));
        }
        for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) var_6);
            arr_9 [i_2] [i_2] = ((/* implicit */short) ((max((((((/* implicit */_Bool) (short)1075)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-7350451335405879718LL))), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])))) + (((/* implicit */long long int) 4294967276U))));
        }
        arr_10 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) max((arr_7 [i_0] [(unsigned short)8] [i_0]), ((short)1067)))), (1048568))))));
        var_20 = ((/* implicit */unsigned int) (short)-14144);
    }
}
