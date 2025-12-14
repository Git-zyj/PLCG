/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143633
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((((((/* implicit */unsigned long long int) var_8)) ^ (var_1))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-64)) > (var_12))))));
                var_21 = var_5;
                var_22 = ((/* implicit */unsigned int) var_13);
                var_23 ^= (((~(((/* implicit */int) var_13)))) & (((((/* implicit */int) var_6)) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (var_18))) - (1147923648573669312ULL))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) (+(((var_4) / (((/* implicit */unsigned long long int) (-(var_12))))))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) <= (var_4))))) != (min((var_1), (var_16)))));
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_26 -= ((/* implicit */_Bool) min((((124101613U) & (3209164081U))), (((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))))))))));
                        arr_16 [i_2] = ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_17))), (((var_16) ^ (var_17))))) == (((var_4) << (((((/* implicit */int) min(((short)-77), ((short)60)))) + (99)))))));
                        var_27 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_13)))), (((((/* implicit */int) min((var_3), (var_3)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_17)))))))));
                    }
                } 
            } 
        } 
    }
}
