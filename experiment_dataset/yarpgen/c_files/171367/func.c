/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171367
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) 4294967286U);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((4294967293U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))) & (2398972266U)));
                        var_21 = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_1]));
                    }
                } 
            } 
        }
        var_22 = arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned short)10] [i_0];
        var_23 = ((/* implicit */signed char) ((max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */int) (signed char)7)))) <= ((-(((int) arr_9 [i_0]))))));
    }
    var_24 = max((((/* implicit */int) (!(((((/* implicit */long long int) 2147483647)) != (-3119844479494410868LL)))))), (((((var_19) / (((/* implicit */int) var_8)))) + (((/* implicit */int) var_6)))));
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 406213547U)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)5))))) ? ((~(((/* implicit */int) (signed char)7)))) : (((/* implicit */int) (signed char)-17)))) : (var_12)));
}
