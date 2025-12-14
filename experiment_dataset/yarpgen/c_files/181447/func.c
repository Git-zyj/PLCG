/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181447
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [(short)6] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (_Bool)0))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_13 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)65408)) == (((/* implicit */int) ((((/* implicit */_Bool) 10612797558841958827ULL)) || (((/* implicit */_Bool) (unsigned short)65516))))))))));
                            var_14 = ((/* implicit */short) 0ULL);
                            arr_14 [i_0] [i_1] [i_1] [5ULL] = ((/* implicit */int) 16950379704578660281ULL);
                            var_15 *= ((/* implicit */unsigned int) (unsigned short)2198);
                            var_16 = ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
                arr_15 [5ULL] [19ULL] = ((/* implicit */short) ((((/* implicit */int) (short)-23720)) % (((/* implicit */int) (unsigned short)20))));
            }
        } 
    } 
    var_17 ^= min((((((/* implicit */_Bool) (unsigned char)237)) ? (((((/* implicit */_Bool) 16950379704578660281ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65500))) : (1496364369130891332ULL))) : ((-(9ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned short)36)) : (((/* implicit */int) (short)-14537))))));
}
