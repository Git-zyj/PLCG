/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104401
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
    var_15 = ((/* implicit */unsigned short) var_7);
    var_16 = min((((unsigned short) min((var_2), (((/* implicit */short) var_7))))), (min((((unsigned short) var_6)), (((unsigned short) var_9)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) var_6)), (max((((/* implicit */int) ((signed char) var_10))), (max((((/* implicit */int) (unsigned short)28392)), (1585858798)))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] = max((min((((/* implicit */unsigned int) ((_Bool) (_Bool)0))), (min((var_11), (((/* implicit */unsigned int) var_12)))))), (max((((/* implicit */unsigned int) var_2)), (((unsigned int) (short)11484)))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */signed char) ((short) var_12));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_4))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                    }
                }
            } 
        } 
    } 
}
