/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15296
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
    var_17 = ((/* implicit */unsigned int) (+(var_12)));
    var_18 = ((/* implicit */short) min((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (short)32764)))))), ((~(var_7)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) (!(arr_0 [i_1] [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned long long int) 1073741823)), (((/* implicit */unsigned long long int) ((1073741807) << (((((-1073741793) + (1073741822))) - (28))))))))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_3])))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (max((1073741807), (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_3 [i_1]), (((/* implicit */long long int) arr_4 [i_0])))), (((/* implicit */long long int) (+(1073741815))))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) 1073741794)) ? (((/* implicit */int) (unsigned short)42923)) : (((/* implicit */int) (unsigned short)48687))))))) : ((~(min((1099511627775LL), (((/* implicit */long long int) 1073741807)))))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                            {
                                var_22 += (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4 - 1]))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((arr_6 [i_4]), (((/* implicit */unsigned long long int) ((int) min(((short)7201), (((/* implicit */short) arr_0 [i_3] [i_4])))))))))));
                                var_24 += ((/* implicit */int) ((1238600445) > (1073741818)));
                                arr_13 [i_4 - 1] [(short)7] [i_2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) ((unsigned char) arr_2 [i_0]))) + (((/* implicit */int) arr_2 [i_0]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
