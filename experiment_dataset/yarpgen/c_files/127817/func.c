/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127817
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned int) (_Bool)1);
                var_14 = ((/* implicit */unsigned char) max((max((arr_3 [i_1 - 3] [i_1 - 2] [i_0]), (arr_3 [i_1 - 3] [0] [i_0]))), (((short) arr_3 [i_1 - 3] [i_1] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    for (short i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((arr_4 [i_2 - 1]) & (arr_4 [i_2 - 1]))) >> ((((~(arr_4 [i_2 - 3]))) - (11662661515515912234ULL)))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) var_12)), (arr_10 [i_4 + 1] [i_5 - 2] [i_2 - 1])))) | (((/* implicit */int) ((8ULL) == (((/* implicit */unsigned long long int) 2147483630)))))));
                            arr_14 [5ULL] [i_4 + 4] [5ULL] [i_2] |= ((/* implicit */unsigned short) var_5);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        {
                            arr_19 [i_2 - 2] [i_3] [0] [i_7] = ((/* implicit */short) max((18446744073709551604ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_9) + (2147483647))) << (((((/* implicit */int) var_1)) - (206)))))) ? (((((/* implicit */int) (unsigned char)252)) % (((/* implicit */int) var_1)))) : (min((arr_18 [i_2 + 1] [i_3] [i_2 + 1] [i_7 - 1]), (((/* implicit */int) (unsigned char)248)))))))));
                            var_17 = ((/* implicit */int) 18446744073709551604ULL);
                            arr_20 [i_6] [i_3] [i_2] = ((/* implicit */int) 18446744073709551601ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
