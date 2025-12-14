/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148384
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) arr_7 [i_0 - 1] [i_4]);
                                arr_16 [i_4] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) (unsigned char)24)) : ((~(((/* implicit */int) (unsigned char)16))))))));
                                arr_17 [i_0] [i_1 + 3] [i_3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)174))) ? (arr_2 [i_0]) : (4294967291U))))));
                                var_21 = ((/* implicit */long long int) (unsigned char)16);
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_0] [(unsigned short)10] [i_0] = ((/* implicit */unsigned int) (unsigned char)240);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)33)))) ^ ((-(((/* implicit */int) (unsigned char)16)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_14))));
    var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */int) var_19)) > (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) * (17197345737187869950ULL)))) ? (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)127))))))));
}
