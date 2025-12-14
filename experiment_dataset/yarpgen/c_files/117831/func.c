/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117831
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
    var_11 = ((/* implicit */long long int) ((unsigned long long int) ((int) ((unsigned long long int) 5897861508576232339ULL))));
    var_12 = ((/* implicit */unsigned long long int) ((_Bool) ((short) ((short) (short)-19727))));
    var_13 = ((/* implicit */long long int) ((unsigned short) ((unsigned int) ((unsigned int) var_0))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) ((long long int) (short)-27151))));
                var_15 = ((short) ((unsigned int) ((long long int) arr_3 [i_0])));
                var_16 *= ((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) ((short) var_9))));
                var_17 = ((/* implicit */signed char) ((long long int) ((signed char) ((unsigned int) (short)-5319))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((short) ((long long int) ((_Bool) var_4))));
                                var_18 = ((/* implicit */signed char) ((int) ((signed char) ((long long int) arr_4 [i_2] [i_1 + 2] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 *= ((long long int) ((unsigned long long int) ((unsigned int) (_Bool)1)));
}
