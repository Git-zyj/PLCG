/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109462
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
    var_18 &= ((/* implicit */unsigned long long int) (~(4292870144U)));
    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) var_8))))) ? (var_6) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (unsigned char)190)) : (max((((/* implicit */int) min(((unsigned char)65), (var_11)))), ((+(((/* implicit */int) var_14))))))));
    var_20 -= ((/* implicit */unsigned char) var_15);
    var_21 = ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) / ((-(((/* implicit */int) (short)350))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)8332))));
                                var_24 = min(((!(((/* implicit */_Bool) arr_0 [i_0] [i_4 - 1])))), (var_10));
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_12 [i_4] [1ULL] [i_2] [4U]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
