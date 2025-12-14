/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171115
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
    var_18 ^= ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_4)))))) ? (((((((/* implicit */int) (unsigned short)23504)) ^ (-180344828))) ^ (((/* implicit */int) var_17)))) : (max(((~(var_13))), (((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */int) min(((~(arr_7 [i_3 - 1] [i_3 + 3] [i_0 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)41991)) & (((/* implicit */int) (_Bool)1)))))));
                            var_20 = ((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)112)), ((short)0)));
                            var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_6 [i_3 - 1] [i_3 + 3] [8ULL] [i_3])))) || (((/* implicit */_Bool) ((((long long int) var_12)) ^ ((-(var_8))))))));
                            var_22 -= ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) (unsigned short)65535);
                            var_24 &= max((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((long long int) arr_14 [i_0])) : (((/* implicit */long long int) ((((/* implicit */_Bool) 15)) ? (((/* implicit */int) (short)0)) : (2147483647)))))), (((/* implicit */long long int) var_13)));
                            var_25 ^= ((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_4] [i_5] [i_0 - 2] [i_1]);
                        }
                    } 
                } 
                var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)9020)) : (((/* implicit */int) (unsigned short)0))))) ? (2088726494) : (min((-2088726494), (((/* implicit */int) (short)-20254))))));
            }
        } 
    } 
    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(2088726486)))) / ((+(((((/* implicit */_Bool) -2088726484)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
}
