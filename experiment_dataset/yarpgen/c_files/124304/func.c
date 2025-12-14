/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124304
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
    var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (16392088236788687788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) min((min((var_11), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) ((signed char) (signed char)43))))))));
                    arr_8 [i_1] [16U] [i_2] [i_2] = ((/* implicit */long long int) arr_2 [i_0]);
                    var_21 -= ((/* implicit */signed char) var_9);
                    arr_9 [i_1] = arr_4 [i_2] [i_0];
                    var_22 = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_4 [i_0] [i_1 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_1] [i_1] [i_1] [(unsigned short)16]), (((/* implicit */long long int) var_2))))))))));
                }
            } 
        } 
    } 
}
