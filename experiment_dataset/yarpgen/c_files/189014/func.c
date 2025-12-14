/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189014
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
    var_16 = ((/* implicit */short) ((((((var_15) & (((int) (short)-12366)))) + (2147483647))) << (((((/* implicit */_Bool) min((var_15), (((/* implicit */int) (unsigned char)12))))) ? (((13967628380178696970ULL) + (4479115693530854646ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    var_17 += ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max(((+(13967628380178696970ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)244)))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_14))))))))));
                var_19 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)243)), (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)2)) : (((((/* implicit */_Bool) 4479115693530854645ULL)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (unsigned char)222))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_20 *= ((/* implicit */_Bool) ((signed char) ((signed char) 2632792573U)));
                                var_21 = max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)254)))), (min((((/* implicit */unsigned int) 648921402)), (3658215457U))));
                            }
                            for (unsigned char i_5 = 1; i_5 < 7; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2632792578U))));
                                arr_15 [i_0] [i_0] [7ULL] [i_0] [7ULL] = ((signed char) max((var_8), (((/* implicit */unsigned short) var_4))));
                            }
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((13967628380178696971ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((_Bool) (signed char)-46))))) : ((~(19U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
