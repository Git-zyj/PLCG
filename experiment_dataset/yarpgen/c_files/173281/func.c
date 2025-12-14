/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173281
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_2] [i_0] &= ((/* implicit */_Bool) arr_4 [i_0] [i_3]);
                        var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((_Bool) ((short) var_9)))), (((signed char) max((((/* implicit */short) (unsigned char)63)), (var_1))))));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_0 + 2] [i_0])), (min((((/* implicit */unsigned long long int) (unsigned char)63)), (var_0))))));
                    }
                    var_14 = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) (unsigned char)63)));
                    var_15 &= ((/* implicit */_Bool) var_10);
                    var_16 = ((/* implicit */unsigned long long int) var_11);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) max((((/* implicit */short) max((var_10), ((unsigned char)63)))), (min((((/* implicit */short) (unsigned char)63)), (var_12))))))));
        arr_15 [i_4] = ((/* implicit */signed char) (unsigned char)63);
        arr_16 [i_4] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)192)), (min((-1486101296), (8388352)))));
        var_18 &= var_7;
    }
}
