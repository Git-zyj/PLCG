/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163128
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_17))))) >> (((((/* implicit */int) (signed char)-111)) + (116)))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) min((min((min((((/* implicit */int) (_Bool)1)), (var_5))), (var_13))), (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)112)))) != (((/* implicit */int) var_15))));
                    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3 - 2] [i_3 - 1]))));
                }
                var_20 = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
            }
        } 
    } 
}
