/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120170
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
    var_11 = ((((/* implicit */long long int) min((((/* implicit */int) (signed char)63)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))) <= ((+(min((var_5), (((/* implicit */long long int) (unsigned short)62449)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_11 [i_1] [4] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) - ((~(((/* implicit */int) arr_4 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_3 + 2] [i_4] = var_7;
                                arr_18 [i_4 - 2] [(_Bool)1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [15] [i_1] [i_2] [i_3] [(unsigned short)11]))))) ? (((((/* implicit */int) arr_13 [i_4] [0ULL] [(_Bool)1] [i_0])) - (((/* implicit */int) (unsigned short)896)))) : ((+(((/* implicit */int) (unsigned char)27)))))), ((-(((((/* implicit */int) arr_8 [i_4] [i_3 + 2] [i_2] [i_1])) + (((/* implicit */int) (unsigned short)896))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
