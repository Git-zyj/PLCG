/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164489
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
    var_14 ^= ((/* implicit */int) var_11);
    var_15 = ((/* implicit */short) 0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_2)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) & (((/* implicit */int) (_Bool)1))));
                arr_6 [i_1] = ((/* implicit */_Bool) var_1);
                arr_7 [i_0] [i_0] |= (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((unsigned long long int) 6559848562460256258LL)) >= (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) (_Bool)0)))))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)72)))))))));
                            }
                        } 
                    } 
                    var_19 = max((2146435072), ((~(min((-536100083), (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_13);
}
