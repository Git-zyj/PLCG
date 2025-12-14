/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185223
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
    var_17 = ((/* implicit */int) ((((unsigned long long int) var_11)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) var_12))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (3276712028U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (263027822U) : (((/* implicit */unsigned int) 473490774))))) * (((((/* implicit */unsigned long long int) arr_1 [i_0])) & (((7381184733457400202ULL) >> (((((/* implicit */int) (unsigned short)55546)) - (55483))))))))))));
        var_20 |= ((/* implicit */unsigned int) ((long long int) min((((/* implicit */int) var_15)), (arr_2 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_21 += ((/* implicit */long long int) var_13);
                    var_22 = (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (var_12))))))));
                    var_23 = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) (+(((/* implicit */int) (unsigned short)4046))))));
                    var_24 = ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_1] [i_2] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)0)) : (arr_5 [i_3 - 3] [i_1] [i_3 - 3] [i_1 + 1]))) & (((/* implicit */int) ((short) var_11)))));
                                var_26 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) > (((((/* implicit */_Bool) 700781301U)) ? (-1477173554622334113LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8566)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
