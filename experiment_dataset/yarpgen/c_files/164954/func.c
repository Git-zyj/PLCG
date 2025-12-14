/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164954
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (((-(var_12))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) & (((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_13))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [(unsigned short)11] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)29306))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_7)))))))));
                                var_19 = ((/* implicit */unsigned char) ((var_9) - (((/* implicit */int) max((max((((/* implicit */unsigned char) var_10)), ((unsigned char)128))), (var_16))))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned short) max((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1])), (var_17)));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) ? (-1713054364264330531LL) : (((/* implicit */long long int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (var_17)))) || ((!(((/* implicit */_Bool) var_9)))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) + (4080761414349617729LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (28ULL)))))));
    var_22 *= ((/* implicit */_Bool) var_7);
}
