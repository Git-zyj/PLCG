/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122329
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
    var_14 = ((((/* implicit */_Bool) (unsigned short)2548)) ? (((/* implicit */int) (signed char)101)) : (-1965236200));
    var_15 = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */int) min(((short)-32083), (((/* implicit */short) (unsigned char)58))))) + (2147483647))) >> (((var_7) + (3996521919450040673LL))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_7 [i_0 - 1] [2LL] [i_0 - 1] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0 - 2] [i_1] = ((/* implicit */unsigned long long int) min((((unsigned short) var_13)), (((/* implicit */unsigned short) arr_0 [6LL] [i_1]))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))), ((((((_Bool)1) ? (arr_3 [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) == (((var_9) / (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))))))))));
                                var_17 = ((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2 - 3]);
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_7))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [0ULL] [i_1] = ((/* implicit */signed char) var_8);
                    var_19 = ((/* implicit */int) (unsigned short)8);
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned short) ((((long long int) (_Bool)1)) - (((long long int) min((((/* implicit */unsigned int) (unsigned short)65525)), (668518325U))))));
}
