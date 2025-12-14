/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17735
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
    var_13 |= ((/* implicit */long long int) var_4);
    var_14 = ((/* implicit */long long int) ((short) var_10));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 -= ((/* implicit */unsigned int) ((long long int) arr_0 [i_0]));
        var_16 = ((/* implicit */unsigned short) ((unsigned int) ((int) var_9)));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned short) var_8));
            var_17 |= ((/* implicit */_Bool) var_0);
        }
        var_18 = ((/* implicit */long long int) ((_Bool) arr_2 [i_0] [i_0]));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (long long int i_5 = 1; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */int) ((unsigned char) arr_0 [i_3]));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_7 [i_5] [i_4] [i_3]))));
                                arr_15 [i_5] [i_3] [i_3] [i_3] [i_3] [i_0] = ((long long int) ((long long int) arr_1 [i_0]));
                            }
                        } 
                    } 
                    arr_16 [i_3] = ((/* implicit */_Bool) ((signed char) ((short) ((unsigned int) var_12))));
                    var_20 = ((/* implicit */short) min((var_20), (((short) ((long long int) 4294967295U)))));
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_21 -= ((/* implicit */long long int) ((unsigned char) var_12));
        arr_19 [i_6] |= ((/* implicit */signed char) arr_7 [i_6] [i_6] [i_6]);
    }
    var_22 = ((long long int) ((unsigned short) var_4));
}
