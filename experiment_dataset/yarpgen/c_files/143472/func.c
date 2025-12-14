/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143472
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
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_13 ^= ((/* implicit */_Bool) min((((/* implicit */int) arr_2 [(signed char)11])), ((-((~(((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_3]))))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 3; i_4 < 15; i_4 += 2) 
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) arr_2 [i_4 - 3]));
                                var_14 ^= ((/* implicit */long long int) min(((-(((/* implicit */int) (signed char)14)))), (((((/* implicit */_Bool) (signed char)-14)) ? (((((/* implicit */int) arr_8 [i_2] [i_3] [i_3] [i_3])) & (-163589864))) : (((/* implicit */int) ((((/* implicit */int) (signed char)14)) > (((/* implicit */int) (signed char)115)))))))));
                            }
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) (unsigned char)250);
            }
        } 
    } 
}
