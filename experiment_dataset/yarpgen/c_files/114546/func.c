/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114546
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (var_10)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [(unsigned char)3] [i_1] [2U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (unsigned char)255)))) ? (((((/* implicit */int) (unsigned short)11969)) / (arr_9 [i_0] [i_1] [i_0] [i_3] [i_4]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1]))))))) ? (min((((long long int) 7569383466447408497LL)), (((-7569383466447408498LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [15] [15]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (328479621) : (((/* implicit */int) arr_3 [i_3] [i_0])))))));
                                var_17 &= ((((/* implicit */_Bool) (short)11468)) ? (((/* implicit */int) (short)11468)) : (((/* implicit */int) (unsigned short)19685)));
                            }
                        } 
                    } 
                    var_18 = (+(((/* implicit */int) ((arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2]) <= (((/* implicit */long long int) 8388576U))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_2);
}
