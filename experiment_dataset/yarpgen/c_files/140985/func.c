/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140985
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
    var_13 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) ((int) 1347611830))))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((((/* implicit */int) (short)45)), ((((~(((/* implicit */int) var_6)))) | (((/* implicit */int) var_8)))))))));
    var_15 = max((((((/* implicit */_Bool) (short)-3478)) ? (((/* implicit */int) (short)-11133)) : (((/* implicit */int) (short)-11161)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)30)) && (((/* implicit */_Bool) (unsigned char)191))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_16 &= ((/* implicit */short) arr_0 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned char) arr_4 [i_4] [i_1] [i_4]);
                                var_18 = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_2 + 2] [i_1]);
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2 + 2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (int i_6 = 1; i_6 < 9; i_6 += 1) 
        {
            {
                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)191))));
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_12))))))));
            }
        } 
    } 
}
