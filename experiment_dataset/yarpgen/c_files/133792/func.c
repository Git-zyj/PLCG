/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133792
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
    var_17 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_10))))) ? (var_16) : (((/* implicit */long long int) (~(712610339U)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_2] [(unsigned short)1] [i_1 - 2])) : (((/* implicit */int) (unsigned short)12232))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3] [i_1 - 3])) ? (8033693277061690288ULL) : (15500334355859856673ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0] [i_1 - 4])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_2 [i_1] [i_2 + 2] [i_1]) | (((/* implicit */unsigned int) var_5))))))) && (((/* implicit */_Bool) min(((((_Bool)1) ? (3582356973U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_0 + 1]))))), (((/* implicit */unsigned int) (unsigned short)53314)))))));
                                var_20 = ((/* implicit */signed char) (+(arr_4 [i_0 - 1] [i_4])));
                                var_21 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) (unsigned char)32)))) ? ((~(746572820))) : ((~(-569019508)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((/* implicit */long long int) -119049652)), (var_15))))));
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)53311)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (3582356978U) : (((/* implicit */unsigned int) (((_Bool)1) ? (var_6) : (((((/* implicit */int) (short)-32264)) / (((/* implicit */int) (unsigned char)19))))))))))));
}
