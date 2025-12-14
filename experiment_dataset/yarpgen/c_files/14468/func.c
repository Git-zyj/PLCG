/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14468
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
    var_16 = ((/* implicit */_Bool) var_8);
    var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 7054953842245300814LL)) ? (6028418285600330988LL) : (6028418285600330988LL)))) ? ((~(-6028418285600330989LL))) : (((((var_3) + (9223372036854775807LL))) << (((4252669287738024349ULL) - (4252669287738024349ULL)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) 956203283U);
                                var_19 *= ((/* implicit */_Bool) (~(-8006906215555573240LL)));
                                var_20 = (((~((~(3797715713U))))) & ((~(max((var_15), (((/* implicit */unsigned int) arr_7 [i_0] [i_2] [i_3 - 1] [i_4])))))));
                            }
                        } 
                    } 
                    var_21 = arr_7 [i_0] [(short)14] [i_2 + 2] [i_2];
                    var_22 *= ((/* implicit */unsigned short) var_0);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6 - 2]))))) / (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) / (956203297U))), (arr_14 [i_2 - 2] [i_2 + 2] [i_6 + 1] [i_6 - 2]))))));
                                var_24 ^= ((/* implicit */long long int) ((short) (((+(((/* implicit */int) (_Bool)0)))) << (((/* implicit */int) (!(arr_19 [i_0] [i_1] [i_6])))))));
                                var_25 = ((/* implicit */long long int) arr_14 [i_2 + 3] [i_2 + 4] [i_2 - 2] [i_2 + 3]);
                                arr_20 [i_0] [i_1] [i_2] [12U] [i_6] &= ((/* implicit */signed char) ((_Bool) arr_18 [i_1]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned char) ((int) (unsigned short)43597))))));
    var_27 = ((/* implicit */_Bool) var_11);
}
