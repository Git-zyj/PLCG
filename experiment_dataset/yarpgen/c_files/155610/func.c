/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155610
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
    var_18 = ((/* implicit */unsigned char) ((short) var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((var_3) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned int) (((~(((((/* implicit */int) var_0)) | (((/* implicit */int) var_14)))))) >= (((/* implicit */int) ((unsigned char) var_6)))));
                            arr_14 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned int) max((((var_8) | (var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (var_3)))))));
                            var_20 = max((((/* implicit */int) var_10)), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) - (((/* implicit */int) ((unsigned char) var_13))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_11);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((int) var_17)) % (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_9)))))))));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_4) : (var_4))));
                                arr_24 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((int) var_3))), (((((var_15) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) * (max((((/* implicit */unsigned long long int) var_10)), (var_15)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = var_0;
    var_24 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
}
