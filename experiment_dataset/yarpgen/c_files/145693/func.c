/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145693
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (~(min(((-(7369387424285923061ULL))), (((/* implicit */unsigned long long int) 7991935549024363511LL))))));
                                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (7369387424285923061ULL)))) ? (7991935549024363514LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0 - 1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((int) var_6))))) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) var_18)) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7369387424285923061ULL)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)52)))))))));
}
