/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177345
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
    var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(134217727U)))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) ((-1139496422779044477LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-(((((/* implicit */int) max(((short)-8840), (((/* implicit */short) (_Bool)1))))) << (((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (664818682U))))))))));
                    var_17 *= ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [3LL] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8LL)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)78))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3)) || (((/* implicit */_Bool) (signed char)-17))))) : (-791932939)));
                                arr_15 [i_2] [i_2] [i_2] [i_0] [(unsigned short)18] = ((/* implicit */long long int) arr_9 [(unsigned short)19] [i_1] [i_2] [i_3] [i_0]);
                                arr_16 [i_0] [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3682226498U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (18312837562566273544ULL))) / (((/* implicit */unsigned long long int) (~(var_2))))))) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) arr_0 [i_0 - 2]))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [(unsigned short)19] = ((/* implicit */signed char) ((_Bool) var_1));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) var_4))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_13)))))))) ? (((-1021437226) / (((/* implicit */int) var_8)))) : (((/* implicit */int) var_0))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) / (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_14))))))))));
}
