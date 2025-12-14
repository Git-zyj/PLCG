/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153770
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
    var_19 = ((/* implicit */signed char) var_17);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)4] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) (-(((var_10) ? (var_6) : (((/* implicit */int) var_10))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_16)), (((int) var_10))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_18), (var_7)))) : (((/* implicit */int) max((var_5), (var_8)))))) : (((var_15) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (max((((/* implicit */unsigned int) var_10)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_15))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_4] [i_3] [i_4] [i_0] [i_2] = ((/* implicit */long long int) ((_Bool) var_15));
                                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_12)) || (var_9))))) ? (((min((var_2), (var_6))) % (((/* implicit */int) ((unsigned short) var_17))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((short) var_1))) : ((-(((/* implicit */int) var_13))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_13))))), (var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_17))))))) : (min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
}
