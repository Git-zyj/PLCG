/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10745
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_13 = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (var_8)))));
                            var_14 = ((/* implicit */int) ((((_Bool) var_12)) && (((/* implicit */_Bool) ((int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_10))))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */unsigned int) ((_Bool) var_7));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) && (((/* implicit */_Bool) var_11))))) * (((/* implicit */int) (!(((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))))));
                                var_17 -= ((/* implicit */short) ((((unsigned long long int) var_5)) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            }
                            for (int i_5 = 2; i_5 < 16; i_5 += 4) 
                            {
                                arr_18 [i_0] [i_3 - 1] [i_0] [i_3] [i_5] = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) == (var_4)))));
                                var_18 += ((/* implicit */int) ((short) (~(var_2))));
                            }
                            for (long long int i_6 = 1; i_6 < 14; i_6 += 1) 
                            {
                                var_19 = ((/* implicit */_Bool) var_5);
                                var_20 -= ((/* implicit */unsigned long long int) (-((~((-(((/* implicit */int) var_7))))))));
                                var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) ((_Bool) var_5))))));
                                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                            }
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */long long int) (~(((unsigned long long int) var_8))));
                var_24 = ((/* implicit */_Bool) var_9);
                var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_12)))) ^ (var_1)))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_2);
}
