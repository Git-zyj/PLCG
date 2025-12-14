/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183777
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
    var_12 |= ((/* implicit */short) ((((unsigned long long int) var_5)) == (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 &= ((/* implicit */int) var_0);
                    arr_9 [i_0] [i_0] [(unsigned short)19] = ((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */unsigned short) ((signed char) ((unsigned long long int) var_0))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 |= ((/* implicit */int) arr_12 [i_4 + 3] [i_4 + 3] [i_4]);
                                var_15 ^= ((((/* implicit */int) ((unsigned char) arr_14 [i_0] [i_1] [i_4 + 4] [(unsigned short)0] [i_4 + 4]))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_4 - 1] [i_3] [i_4])) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_4 + 3] [i_3] [i_4 + 1]))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((int) (~(arr_3 [(short)16] [i_4 + 3] [i_2])))) & (((/* implicit */int) ((((/* implicit */int) var_3)) != (var_4)))))))));
                                var_17 = (~(((/* implicit */int) ((short) var_2))));
                                arr_17 [i_1] [i_1] [4ULL] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((int) (short)-1)) ^ ((-(((((/* implicit */int) arr_5 [i_0])) % (((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2))))));
    var_19 |= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), (var_1))))) : (((((1858028159549577810ULL) & (var_9))) + (((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (var_4)))))));
}
