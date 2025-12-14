/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100633
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
    var_12 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])) >> (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [0LL])) - (68)))))));
                                var_14 = ((/* implicit */signed char) (unsigned char)255);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (((min((var_4), (((/* implicit */unsigned long long int) (unsigned char)0)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (4074904339U))))))));
            }
        } 
    } 
    var_16 = var_4;
    var_17 = ((/* implicit */_Bool) 3755465109U);
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 16; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            {
                arr_18 [i_5] [i_6] = ((/* implicit */long long int) 4074904327U);
                var_18 = ((/* implicit */unsigned char) ((_Bool) ((((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((-9223372036854775806LL) < (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (signed char)-100))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (3755465109U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529)))))))) != (((((/* implicit */_Bool) ((unsigned short) arr_17 [9LL] [i_5] [i_6]))) ? (-3419813774583156363LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 220062956U)) != (var_4)))))))));
            }
        } 
    } 
}
