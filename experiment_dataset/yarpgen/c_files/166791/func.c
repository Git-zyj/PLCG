/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166791
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_9 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) max((-9223372036854775798LL), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) 9223372036854775798LL)) ? (var_1) : (-9223372036854775798LL))) : (-29LL))), (((/* implicit */long long int) ((_Bool) ((2097610729) + (((/* implicit */int) var_7))))))));
                            arr_10 [i_1] [i_3] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_4))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 28LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) ? (((((/* implicit */_Bool) var_6)) ? (-9223372036854775791LL) : (((/* implicit */long long int) 3454386686U)))) : (var_5)))));
            }
        } 
    } 
    var_10 = (((_Bool)1) ? (1050729457012571494LL) : (((/* implicit */long long int) var_9)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) (-(4160920489306129873LL)));
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (306434932068511688LL)));
        var_12 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
        arr_17 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
        var_13 |= ((/* implicit */short) (_Bool)1);
    }
}
