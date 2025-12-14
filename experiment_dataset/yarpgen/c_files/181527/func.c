/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181527
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
    var_20 |= ((/* implicit */unsigned int) max((var_1), (((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_3))), (max((((/* implicit */unsigned char) (_Bool)1)), (var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) - (((((/* implicit */int) ((unsigned short) (unsigned short)596))) % ((~(arr_5 [i_2])))))));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned char) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((unsigned int) 791401473725728396ULL)) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_10 [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 1] [i_3])))))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) arr_9 [i_1] [i_1 + 1]);
            }
        } 
    } 
}
