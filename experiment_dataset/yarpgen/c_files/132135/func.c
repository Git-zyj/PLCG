/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132135
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) (unsigned short)41801)) + (((/* implicit */int) (signed char)10))))));
                                var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_17))) && (((/* implicit */_Bool) ((short) (unsigned short)1986)))))) << (((((/* implicit */int) (signed char)117)) - (95)))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (((-(((/* implicit */int) var_5)))) == (((/* implicit */int) (short)9709)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)(-32767 - 1)))))))) == (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0))) / (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_12))))))))))));
}
