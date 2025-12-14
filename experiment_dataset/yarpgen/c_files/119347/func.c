/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119347
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
    var_17 = ((/* implicit */_Bool) (signed char)(-127 - 1));
    var_18 = ((/* implicit */int) ((((/* implicit */long long int) (+(((unsigned int) var_8))))) / (((((/* implicit */long long int) ((/* implicit */int) var_5))) | (((((-7716217811555798243LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (118)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 6; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */int) (+(((arr_11 [i_0] [i_1] [i_0] [i_3]) - ((+(18446744073709551612ULL)))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((((/* implicit */int) arr_9 [i_2])) + (2147483647))) << (((7716217811555798253LL) - (7716217811555798253LL)))))))) ? (((/* implicit */long long int) 4158624627U)) : ((~(-9208085572711297510LL)))));
                            var_22 = ((/* implicit */int) (short)-15476);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned int) ((_Bool) var_12));
}
