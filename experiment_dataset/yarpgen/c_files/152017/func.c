/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152017
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0]);
                arr_5 [i_1] [i_1] [i_0] = arr_2 [i_0] [i_1];
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_1] [i_2] [i_1]);
                                arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [i_4] |= ((/* implicit */unsigned short) ((arr_7 [i_0] [i_2] [i_0] [(unsigned char)10]) < (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 1145372445))))))))));
                                var_15 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)6646)))))) - (((/* implicit */int) arr_1 [i_1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_16 |= ((/* implicit */signed char) (short)27762);
                            arr_22 [i_6] [(unsigned char)9] = arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) arr_6 [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)27762)) << (((min((((/* implicit */unsigned int) (unsigned short)65535)), (4294967295U))) - (65526U))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
    var_19 = (!(((/* implicit */_Bool) ((unsigned char) var_8))));
    var_20 = ((/* implicit */unsigned short) (+(4294967295U)));
}
