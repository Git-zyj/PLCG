/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157257
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned short) (short)(-32767 - 1));
                            var_15 = ((/* implicit */unsigned short) 72057594037927872LL);
                            var_16 = ((/* implicit */long long int) 520093696);
                        }
                    } 
                } 
                var_17 = 520093696;
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        for (short i_6 = 2; i_6 < 9; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) -520093696);
                                arr_21 [(short)0] [i_1 + 1] [i_6] |= ((/* implicit */signed char) -9223372036854775796LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_4);
    var_20 = ((/* implicit */unsigned long long int) var_9);
    var_21 = ((/* implicit */long long int) var_12);
}
