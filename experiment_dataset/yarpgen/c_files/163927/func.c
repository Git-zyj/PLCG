/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163927
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
    var_16 = ((/* implicit */int) var_9);
    var_17 = ((/* implicit */short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) -2003820192)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (signed char)55);
                            arr_11 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((((/* implicit */_Bool) 2003820191)) ? (2003820192) : (((/* implicit */int) (_Bool)1)))) >= (2003820192)))), (min((((((/* implicit */_Bool) 2003820191)) ? (((/* implicit */int) (signed char)55)) : (2003820199))), (((/* implicit */int) (!((_Bool)1))))))));
                            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)55))));
                        }
                    } 
                } 
                var_20 |= (((~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-50)), ((unsigned short)31214)))))) / ((~(-2003820192))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (~(((long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (signed char)-56)))))));
    var_22 = ((/* implicit */signed char) (_Bool)1);
}
