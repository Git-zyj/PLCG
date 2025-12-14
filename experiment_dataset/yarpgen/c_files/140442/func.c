/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140442
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4398046248960LL)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (short)-18821))));
    var_18 = ((/* implicit */long long int) (short)18847);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 &= ((/* implicit */unsigned int) arr_1 [i_1 - 1] [i_1 - 1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_1] = var_10;
                            var_20 = (~(((/* implicit */int) (short)-18821)));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */int) (short)16790)) / (((/* implicit */int) (short)-18847))))));
                                var_21 = ((/* implicit */short) (+((~((~(((/* implicit */int) (short)18844))))))));
                                arr_14 [i_1] [i_1 - 1] = ((/* implicit */long long int) ((short) ((var_2) <= (995681878758058844LL))));
                            }
                            arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) ((int) arr_8 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)18816))) <= (1023LL)));
                var_23 = ((/* implicit */short) (~(((4294967281U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)18816)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    var_25 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)136)))))));
}
