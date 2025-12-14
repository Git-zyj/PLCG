/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142522
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) 18446744073709551592ULL)) ? (2199023255551ULL) : (var_7))), (2659453811843516811ULL))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (unsigned char)0);
                            arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551592ULL)) ? (arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (18446741874686296052ULL))) < ((~(var_10)))));
                        }
                    } 
                } 
                arr_12 [11] [i_1] = ((/* implicit */int) var_5);
                var_15 -= ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (unsigned short)16352);
}
