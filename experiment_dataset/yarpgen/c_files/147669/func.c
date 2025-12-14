/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147669
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((unsigned char) 18446744073709551604ULL));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned short) arr_0 [i_1]);
                    arr_10 [i_0] [i_1] = ((/* implicit */short) (-(-691224887)));
                    var_14 = ((/* implicit */long long int) 9ULL);
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                arr_16 [i_3] [i_3] [i_3] &= ((/* implicit */short) (unsigned char)68);
                var_16 = ((/* implicit */unsigned long long int) ((int) 29ULL));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_19 [i_5] |= ((/* implicit */_Bool) arr_17 [i_5]);
        var_17 ^= ((/* implicit */unsigned short) 2048095974U);
    }
}
