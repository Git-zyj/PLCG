/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163635
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) ((unsigned char) var_9))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((long long int) ((unsigned int) ((unsigned int) var_12)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((signed char) ((short) ((long long int) var_1))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((long long int) ((short) arr_12 [i_0] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned short) ((unsigned int) ((unsigned long long int) 1666963804)))))));
                                var_17 = ((/* implicit */short) ((unsigned long long int) ((int) ((unsigned long long int) -183870438))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4 + 3] = ((/* implicit */int) ((unsigned char) ((unsigned short) ((_Bool) var_1))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) ((long long int) ((short) ((long long int) (unsigned char)0))));
                    arr_16 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) ((unsigned long long int) 141106553U))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) ((unsigned char) 141106553U))));
        arr_18 [i_0] = ((/* implicit */long long int) ((unsigned int) ((_Bool) ((unsigned long long int) -1LL))));
    }
    var_19 = ((/* implicit */long long int) ((unsigned short) ((unsigned int) ((short) (unsigned short)4095))));
}
