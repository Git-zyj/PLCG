/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13386
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
    var_14 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26290)))))))));
    var_15 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_16 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-25750)), (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-25750)) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_3 - 1])))) : (-4753938953123216142LL))))));
                                var_17 *= arr_8 [i_0] [i_0] [i_0] [i_0 - 3];
                                arr_12 [i_4] [i_3] = ((/* implicit */short) ((unsigned long long int) var_1));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [(short)21] [i_0] |= ((/* implicit */_Bool) (~(min((4753938953123216141LL), (((/* implicit */long long int) arr_0 [i_1 + 2]))))));
                arr_14 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 3] [i_1 + 2] [12LL])) < (((((/* implicit */int) (short)-25766)) % (((/* implicit */int) var_0))))))) < (((/* implicit */int) ((((/* implicit */int) (short)-25750)) == (((/* implicit */int) (signed char)110)))))));
                arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_5)) != (min((-4753938953123216142LL), (((/* implicit */long long int) var_5)))))))) == (((((/* implicit */_Bool) -2147483626)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_9 [i_1]))) : (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
    var_19 = ((/* implicit */unsigned long long int) var_7);
}
