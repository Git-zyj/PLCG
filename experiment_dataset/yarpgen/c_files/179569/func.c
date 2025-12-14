/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179569
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
    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-17600)) : (((((((/* implicit */int) (unsigned char)245)) | (((/* implicit */int) (short)-17600)))) - (((/* implicit */int) (unsigned char)255))))));
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), ((((!(((/* implicit */_Bool) arr_0 [i_4 - 1])))) ? (((/* implicit */int) ((arr_11 [i_0] [i_4 - 1] [(unsigned char)0] [i_3] [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8)))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)3))))))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_8 [i_0] [i_2] [i_2] [i_3]))) & (((/* implicit */int) ((unsigned short) var_7)))))) ? (((long long int) ((int) (unsigned char)253))) : (((((/* implicit */_Bool) ((-1500231404) / (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_8)))));
                                arr_12 [(unsigned short)6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) ((arr_11 [i_0] [i_1] [0U] [i_2] [(_Bool)1]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (var_6))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) arr_0 [i_1]);
                    arr_13 [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (short)22)) : (((/* implicit */int) (unsigned char)5)))) >= (min((arr_8 [i_0] [i_2] [10LL] [i_2]), (arr_8 [i_0] [i_2] [i_2] [i_1])))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */signed char) (short)-17585);
    var_24 = ((/* implicit */unsigned short) ((((var_17) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)246)) * (((/* implicit */int) (signed char)7)))))) : (((/* implicit */int) var_1))));
}
