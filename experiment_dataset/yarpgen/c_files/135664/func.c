/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135664
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = var_2;
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) var_0);
                            var_17 = ((/* implicit */signed char) (-(var_6)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)231)) : (var_14)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)20))))) : (var_2)));
                            var_18 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)17)), (((((/* implicit */_Bool) (unsigned short)24830)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (unsigned short)57234))))));
                        }
                    } 
                } 
                var_19 *= ((/* implicit */unsigned char) var_14);
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((((/* implicit */long long int) var_1)), (var_2)));
    var_21 = ((/* implicit */int) 3190856495666070969LL);
}
