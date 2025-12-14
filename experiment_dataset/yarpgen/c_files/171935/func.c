/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171935
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
    var_16 = ((/* implicit */unsigned short) (_Bool)1);
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-115)) + (((/* implicit */int) (short)11125)))))))), (var_13))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) 3759748009U);
                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1]))))) <= (var_13))), (arr_3 [i_0] [i_1])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_20 |= 11007289382616537649ULL;
                            var_21 *= ((/* implicit */unsigned char) ((long long int) ((((long long int) (unsigned short)34596)) + (((/* implicit */long long int) ((/* implicit */int) var_12))))));
                        }
                    } 
                } 
                var_22 = ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 3] [i_1 + 2]))) % ((~(8035817343722634877LL))));
                var_23 = ((/* implicit */_Bool) (+(arr_2 [i_0] [i_1 - 2] [i_0])));
            }
        } 
    } 
    var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (10ULL)))) ? (((/* implicit */long long int) max((3759748008U), (((unsigned int) var_1))))) : ((+(min((((/* implicit */long long int) var_11)), (-7821300642783580636LL)))))));
}
