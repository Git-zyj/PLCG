/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172250
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)61)), ((short)32760)))) ? (var_0) : (((/* implicit */unsigned long long int) min((min((var_7), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) min((((/* implicit */short) var_9)), ((short)32760))))))))))));
    var_14 *= var_4;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) arr_4 [i_0 + 1] [i_1] [i_0 + 1]);
                var_16 = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                var_17 = (unsigned short)7305;
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [22LL]);
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_0 - 2] [i_4] [(short)10] [i_0 - 1] [i_4]) == (arr_12 [i_1] [i_0] [i_2] [i_0 - 1] [12]))))) == ((+(arr_12 [i_0] [i_0] [20ULL] [i_0 - 2] [i_0]))))))));
                                var_20 = ((/* implicit */int) ((((var_3) == (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)357))))))) ? (var_12) : ((~((-(var_12)))))));
                            }
                        } 
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned long long int) arr_11 [i_0] [12] [i_0] [i_1] [0ULL] [i_1] [i_1]);
            }
        } 
    } 
}
