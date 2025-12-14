/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12346
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
    var_17 = ((/* implicit */short) var_4);
    var_18 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((15249140343606139660ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202)))));
                var_20 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0] [i_0]))), (var_5)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (+(1068202544)));
                            var_21 = ((/* implicit */unsigned short) 15249140343606139649ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
