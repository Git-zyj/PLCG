/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102028
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-6998))));
                                arr_14 [i_0] [i_4] [i_1] [i_0] [i_4] [i_3] [i_3] = ((/* implicit */long long int) var_0);
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) arr_12 [i_4]);
                            }
                        } 
                    } 
                    var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_2]))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4009563163U)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (unsigned char)90)))))));
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)0)));
                    var_12 = ((/* implicit */int) min((max((((/* implicit */unsigned int) (unsigned char)112)), (285404132U))), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)90)), ((short)0))))));
                    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)165)))), (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (unsigned short)65535)), (var_5)))))));
                }
            } 
        } 
    } 
    var_14 = var_8;
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))))), (var_5))))));
}
