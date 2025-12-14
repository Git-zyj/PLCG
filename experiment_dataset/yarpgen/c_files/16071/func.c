/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16071
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_2] |= var_4;
                                arr_18 [i_0] [i_0] [i_0] [i_1] = arr_6 [i_1 - 1] [i_1 - 1];
                            }
                        } 
                    } 
                    arr_19 [i_1] = 18446744073709551615ULL;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            {
                arr_25 [i_5] [2ULL] [i_6 + 1] = min(((+((~(arr_13 [2ULL]))))), (((2564796020726917411ULL) | (arr_15 [i_5 - 2] [i_6 + 1] [i_6] [i_6 - 1]))));
                arr_26 [i_5 + 1] [i_6 - 1] = (-((-(arr_15 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_5 + 2]))));
            }
        } 
    } 
}
