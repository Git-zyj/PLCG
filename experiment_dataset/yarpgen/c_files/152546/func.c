/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152546
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
    var_11 = ((/* implicit */unsigned long long int) var_5);
    var_12 -= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_9)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 -= ((/* implicit */signed char) ((unsigned long long int) arr_3 [i_1] [(unsigned short)11] [(short)5]));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_14 = (+(452161209));
                            arr_9 [3ULL] [(short)20] [(unsigned char)14] [18ULL] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)60780))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((8987657625534963335ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))));
}
