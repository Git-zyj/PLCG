/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174465
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [(unsigned short)11] [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) min(((unsigned char)109), (((/* implicit */unsigned char) var_11))))), (((unsigned short) arr_0 [i_0] [i_0]))));
                    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)152)) | (((/* implicit */int) var_14))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_11 [i_4] [i_3])) << (((-3639333699700614951LL) + (3639333699700614972LL)))))));
                                var_21 = ((/* implicit */unsigned int) ((long long int) max((883415867U), (((/* implicit */unsigned int) (unsigned char)114)))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_1] [i_2] = ((signed char) (!(((/* implicit */_Bool) var_14))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((var_16) - (((/* implicit */int) var_10))));
}
