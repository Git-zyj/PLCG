/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17252
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
    var_11 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483642)) ? (((((/* implicit */int) (short)27316)) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) % (((unsigned long long int) (~(((/* implicit */int) (short)-5405))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) var_3);
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) min(((_Bool)1), (arr_2 [i_1])))), (var_1))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) (short)-10405);
                                arr_15 [i_0 + 1] [i_0 + 1] [i_2] [i_0] [i_1 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_8), ((short)-3149))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (unsigned char)236))))) ? (max((((/* implicit */unsigned int) (short)-19052)), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    var_14 = ((/* implicit */unsigned long long int) var_10);
    var_15 = ((/* implicit */signed char) (+(min((((/* implicit */int) (unsigned short)56440)), (((((/* implicit */int) (short)-3121)) | (((/* implicit */int) (_Bool)1))))))));
}
