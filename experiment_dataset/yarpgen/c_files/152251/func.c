/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152251
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
    var_17 *= ((/* implicit */short) var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) 9223372036854775807LL);
                                arr_12 [i_1] [i_1] [i_1] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) ((short) arr_10 [i_0])))) + (((long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) (_Bool)0);
                    arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (~(717754915609111406ULL)));
                    arr_14 [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((short) -1LL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) (+(((long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1)))))));
}
