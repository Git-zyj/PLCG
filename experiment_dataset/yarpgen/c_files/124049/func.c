/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124049
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_9 [10LL] [i_2] [i_1] [(unsigned char)11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_4))))))));
                            var_16 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_3)))))))));
                            var_17 -= ((/* implicit */short) var_13);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_6))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_7))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (-(((var_14) / ((-(var_14)))))));
                                var_20 ^= ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -335888254)))))))) * ((~(((long long int) var_10))))));
                                var_21 = ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                } 
                var_22 &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (+((~((-(var_14)))))));
}
