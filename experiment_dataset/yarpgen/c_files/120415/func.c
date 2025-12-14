/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120415
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 *= var_16;
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned short) (signed char)95));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) (short)9450))));
                        var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)95))))) ? (((arr_9 [i_3] [8] [i_2] [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (short)9727))) : (arr_8 [10] [i_1] [i_2 - 1] [(short)4]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | ((-2147483647 - 1))))))), (((/* implicit */long long int) 2130835421))));
                    }
                } 
            } 
        } 
        var_21 -= ((/* implicit */_Bool) ((((((/* implicit */int) (short)-30680)) * (((/* implicit */int) arr_5 [(short)1] [i_0])))) / (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)14268)) & ((-2147483647 - 1))))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_0);
}
