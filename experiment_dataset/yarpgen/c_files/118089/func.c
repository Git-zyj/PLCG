/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118089
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_13)) : ((-(min((((/* implicit */unsigned long long int) 219301389)), (16519279457960134026ULL)))))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_8))));
    var_17 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1326614177)) && (((/* implicit */_Bool) -1326614177)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */short) (~(((var_9) ? (((/* implicit */long long int) (~(arr_1 [12LL] [i_3])))) : ((~(arr_3 [i_3])))))));
                                var_20 *= ((/* implicit */unsigned long long int) ((long long int) (~(var_14))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6)) ? (((/* implicit */unsigned long long int) ((((int) 15897624062729729267ULL)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (short)26242)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (10317475543995849335ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))))))) : (((arr_7 [i_0] [i_1] [i_2] [i_1] [i_4]) / (2549120010979822349ULL)))))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (~((~(-1326614170)))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */int) var_0)) : (var_5)))) | (((long long int) arr_7 [i_0] [i_0] [i_2] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_7);
}
