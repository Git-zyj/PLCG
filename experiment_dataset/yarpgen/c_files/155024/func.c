/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155024
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) (short)7);
        var_15 ^= ((/* implicit */short) var_3);
        arr_2 [i_0 + 3] [i_0 - 2] = ((/* implicit */signed char) ((int) var_11));
    }
    for (signed char i_1 = 2; i_1 < 9; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (short i_5 = 3; i_5 < 8; i_5 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */signed char) (short)3);
                                var_17 *= ((/* implicit */unsigned long long int) (short)-5946);
                                arr_17 [i_1] [i_2 - 1] [i_3 - 1] [i_2] [i_3 - 1] = ((/* implicit */short) ((unsigned long long int) var_6));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) (signed char)-127);
                    arr_18 [i_2] [i_2 + 1] = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
        arr_19 [i_1] [2U] &= ((/* implicit */unsigned short) (signed char)-68);
        arr_20 [i_1] = ((/* implicit */short) -1859183299);
    }
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_3))));
        var_20 = ((/* implicit */unsigned long long int) var_8);
        arr_23 [i_6] = ((/* implicit */int) (short)-1260);
    }
}
