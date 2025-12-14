/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187509
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
    var_13 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */signed char) (+(((unsigned long long int) (~(-778470934))))));
                arr_7 [i_0] [i_0 + 2] [i_0 + 2] = ((/* implicit */int) var_8);
                var_14 = ((/* implicit */short) -1281915292);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                arr_12 [i_3] [i_3] = ((/* implicit */signed char) arr_9 [i_2]);
                var_15 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_10 [i_2]))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 3; i_4 < 20; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_21 [i_2] [i_3] [i_3] = (+((+((~(((/* implicit */int) var_8)))))));
                                arr_22 [(signed char)15] [i_3] [i_4] [i_4 - 3] [i_4] [i_4 - 2] = ((/* implicit */unsigned short) arr_8 [i_2]);
                                var_16 = 4539628424389459968ULL;
                                arr_23 [(unsigned char)18] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = 4539628424389459969ULL;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
    var_18 = ((/* implicit */int) var_6);
}
