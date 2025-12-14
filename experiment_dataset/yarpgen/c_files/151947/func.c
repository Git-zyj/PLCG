/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151947
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] = -1LL;
                var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) ((min((var_3), (((/* implicit */unsigned int) var_8)))) >= (((/* implicit */unsigned int) max((arr_4 [6LL] [6LL] [i_1]), (((/* implicit */int) var_13)))))))), ((~(((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */signed char) var_0)), (var_15)))) ? (((var_4) | (3586599787U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_3)))) > (2265139411479783268ULL)))))));
                            var_21 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) ((_Bool) var_6))) / ((+(((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) max((16181604662229768348ULL), (2265139411479783262ULL)));
                var_23 = ((/* implicit */unsigned int) var_17);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_17);
}
