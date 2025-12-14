/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17801
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
    var_19 = ((/* implicit */unsigned char) 527730423U);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_5 [i_3 - 1] [i_0]))));
                                var_21 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) min((var_3), (var_11)))))), (((/* implicit */int) arr_13 [2U] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_22 ^= ((short) var_14);
                            var_23 &= ((/* implicit */unsigned char) ((short) max((var_6), (((/* implicit */short) ((unsigned char) arr_11 [i_0] [i_5] [i_5] [i_5]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) var_14);
                            var_25 = ((/* implicit */short) (+(((((/* implicit */int) ((short) arr_20 [i_0] [i_7] [i_0] [i_0]))) + (((/* implicit */int) ((unsigned char) var_18)))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) : (536854528U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_16);
}
