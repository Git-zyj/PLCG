/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150702
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
    var_19 = ((/* implicit */long long int) ((((int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) / (var_5)))) * (((/* implicit */int) var_7))));
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned int) var_16);
                                arr_14 [i_0 + 1] [12] [i_0] [i_3] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((int) var_6))) : (max((((/* implicit */unsigned long long int) var_0)), (var_16)))))) && (((/* implicit */_Bool) min((((((/* implicit */int) var_0)) | (((/* implicit */int) var_13)))), (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_1 [i_0])));
                    var_22 = ((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) ((((/* implicit */int) ((short) (signed char)127))) < (((/* implicit */int) (signed char)-114)))))));
                    var_23 = ((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0])) | (((/* implicit */int) var_13)));
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 15; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) var_7);
                                var_25 = ((/* implicit */long long int) var_18);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) var_14)))));
}
