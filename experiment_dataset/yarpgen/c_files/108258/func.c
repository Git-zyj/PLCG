/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108258
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) ((unsigned int) arr_2 [i_0]));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12742))) : (var_0)));
                            arr_10 [i_0] [i_2 + 2] = ((/* implicit */unsigned long long int) ((var_4) & (2487773145U)));
                            arr_11 [i_3 - 3] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 4249675667784197272LL)) ? (arr_8 [i_0] [i_1] [i_0] [i_2 + 2] [i_2] [i_3 - 2]) : (arr_0 [i_1]))) + (((/* implicit */long long int) max((((/* implicit */int) var_9)), (1855643631)))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71)))));
                            arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_2 + 2])) + (((((/* implicit */_Bool) ((((/* implicit */int) (short)32751)) << (((var_16) + (1837414033)))))) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (short)32751))))) : (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)28)) : ((-2147483647 - 1))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) (unsigned short)3368);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_2))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((int) var_1)), (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))))))))));
    var_22 = ((/* implicit */_Bool) -2147483619);
}
