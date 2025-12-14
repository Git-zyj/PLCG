/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178383
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
    var_17 = (~(min((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (var_10))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_10))))));
    var_18 = ((/* implicit */signed char) ((_Bool) max((var_12), (((/* implicit */short) min((var_11), (var_11)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1 + 1] [i_1] [i_1] [(short)2] [i_1 - 1]))) : (var_4))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [13U] [20ULL])))));
                                var_20 = ((/* implicit */signed char) (~(arr_1 [(short)1] [i_1 - 1])));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 - 1]))))) ? (((((/* implicit */int) arr_3 [i_1 + 1])) | (((/* implicit */int) arr_3 [i_1 - 1])))) : (((/* implicit */int) arr_3 [i_1 - 1]))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_11 [(signed char)16] [i_4] [i_2] [i_3])) : (((/* implicit */int) arr_4 [i_0] [i_0])))), ((-(((/* implicit */int) arr_11 [(unsigned short)18] [i_4] [i_3] [i_4])))))) - (((/* implicit */int) ((short) arr_14 [i_1 + 1] [i_4]))))))));
                                var_23 = ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_5 [i_0] [(short)0] [(unsigned short)24]))));
                }
            } 
        } 
    } 
}
