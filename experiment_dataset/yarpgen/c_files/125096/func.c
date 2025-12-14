/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125096
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
    var_18 = ((unsigned long long int) ((short) ((long long int) var_5)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned short) ((long long int) ((signed char) (short)-20488))));
        arr_4 [i_0] = ((unsigned int) ((unsigned long long int) ((unsigned short) var_12)));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((long long int) ((unsigned short) ((unsigned long long int) var_3))));
                        var_20 = ((/* implicit */int) ((short) ((long long int) ((unsigned int) (short)-2105))));
                        var_21 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) ((unsigned short) 332182441U))));
                        arr_12 [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((int) ((int) (_Bool)1))));
                        var_22 = ((/* implicit */signed char) ((_Bool) ((short) ((unsigned char) var_15))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_23 |= ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) ((short) var_16))));
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) ((int) ((unsigned int) ((signed char) arr_1 [i_4] [i_4]))));
    }
    for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned char) ((unsigned long long int) (signed char)72))));
        arr_21 [i_5] = ((/* implicit */unsigned int) ((int) ((short) ((unsigned int) (short)32755))));
    }
    var_24 += ((/* implicit */unsigned int) ((signed char) ((short) ((int) var_8))));
}
