/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1575
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
    var_15 = ((/* implicit */unsigned int) var_7);
    var_16 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6413)) * (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)48074)) == (((/* implicit */int) (unsigned short)17461)))))))))));
                                arr_11 [i_0] = (unsigned short)48074;
                                arr_12 [(short)3] [i_1] [i_1] [i_2] [i_3] [16ULL] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0 + 3]) != (arr_1 [i_0 - 2])))) / (((/* implicit */int) ((short) var_14)))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) >= (((arr_10 [i_0] [i_1] [i_2 - 2] [i_3] [4U]) + (arr_3 [i_0 + 1])))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19079))) != (-9001201179820915154LL)))))));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */long long int) ((var_6) << (((arr_7 [i_0] [i_0] [i_1] [14U]) - (9008991449552714034LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */_Bool) arr_15 [i_1] [i_5]);
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0] [i_0 - 1])) && (((/* implicit */_Bool) (unsigned short)8218))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = var_7;
}
