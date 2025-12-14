/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144017
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [(short)1] = ((/* implicit */long long int) min(((+(var_3))), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1)))));
                    var_19 -= ((/* implicit */unsigned short) (unsigned char)92);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 -= (+(min((((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_2 + 1])), (min((((/* implicit */unsigned long long int) arr_10 [i_4] [i_0] [i_0] [i_0])), (3355452228403496356ULL))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (min((arr_12 [i_0] [i_1] [i_2] [i_3] [(unsigned short)12] [i_0]), (((/* implicit */unsigned long long int) arr_14 [(signed char)12] [i_3] [i_2 + 1] [10U] [i_0])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_4])) != (((/* implicit */int) (unsigned char)11)))))))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_0 + 1] [i_2] [(unsigned short)7] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) ((11124227112759173902ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (var_13)));
                                var_22 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) ((unsigned short) arr_6 [i_0] [i_0] [i_4]))), (max((1U), (((/* implicit */unsigned int) (signed char)42))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (signed char)48))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) ((unsigned char) var_16)))))) ? (var_1) : (((/* implicit */unsigned long long int) var_7))));
}
