/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167555
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (+(((/* implicit */int) max((min((((/* implicit */short) (unsigned char)242)), ((short)18748))), ((short)6340)))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_15 ^= (-(max((5654376736021341858LL), (((/* implicit */long long int) (_Bool)0)))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max(((short)6340), ((short)-6341))))));
                                arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_3] [i_1] [i_1] [i_1 + 1]))) + (5654376736021341858LL)))))));
                                arr_14 [i_4 + 1] [i_3] [(signed char)4] [i_2] [i_3] [(signed char)4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_3] [i_4 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_1 - 1])))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_3))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((3352757645U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))))))));
    var_19 = ((/* implicit */short) (unsigned char)145);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_11))))))) : (((/* implicit */int) var_7))));
}
