/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123829
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
                    var_14 |= arr_1 [i_0] [i_0];
                    var_15 = ((/* implicit */signed char) arr_5 [i_2] [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_16 -= ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_10 [i_0] [i_1] = ((/* implicit */short) arr_1 [i_3] [i_2]);
                    }
                    var_17 -= ((/* implicit */unsigned int) arr_1 [i_2] [i_1]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_18 = ((/* implicit */signed char) (unsigned char)121);
            var_19 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_4]);
            var_20 = ((/* implicit */unsigned short) arr_2 [0]);
            arr_14 [i_0] [i_4] [i_4] = ((/* implicit */signed char) 1196749419);
        }
        var_21 = ((/* implicit */short) 1196749419);
        var_22 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
    }
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (signed char)70))));
    var_24 = ((/* implicit */signed char) var_13);
    var_25 = ((/* implicit */short) var_10);
    var_26 = ((/* implicit */unsigned long long int) var_3);
}
