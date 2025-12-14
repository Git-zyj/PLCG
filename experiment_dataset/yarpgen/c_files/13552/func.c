/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13552
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
    var_14 = ((/* implicit */unsigned short) (((-((-(var_9))))) & (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_2)))))));
    var_15 += ((/* implicit */unsigned short) 2044);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3))))) : ((-(((/* implicit */int) min(((unsigned char)37), ((unsigned char)184)))))))))));
                                var_17 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 4294967273U)) && (((/* implicit */_Bool) -7940080300900316738LL)))));
                                arr_12 [i_0] [i_4] [i_2] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) arr_5 [i_1])) | (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2] [i_3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [(short)9] [(short)9] [i_2])) ? (((/* implicit */int) var_4)) : (arr_11 [(short)11] [i_1] [i_2]))) << (((((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24202))) : (var_1))) - (24200U))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_1] &= ((/* implicit */unsigned char) (-2147483647 - 1));
            }
        } 
    } 
}
