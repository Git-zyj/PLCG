/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174648
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
    var_18 = ((/* implicit */unsigned long long int) var_17);
    var_19 &= ((/* implicit */unsigned int) var_16);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (4294967295U)));
                    var_21 |= min((4294967293U), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_2 [i_2])))))) > (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (var_11)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2254704755U)) && (((/* implicit */_Bool) arr_7 [i_0] [i_0]))))), (((unsigned int) var_2)))))));
                        var_22 = ((signed char) (-(((/* implicit */int) var_10))));
                        var_23 += ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_3]))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2])) > (((/* implicit */int) arr_5 [(_Bool)0] [i_1] [(_Bool)0] [i_0])))))))) * (((max((var_9), (var_5))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 4294967287U)))))))));
                        var_24 -= ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_5 [10U] [i_2] [i_3 - 1] [i_3 - 3])) / (((/* implicit */int) arr_5 [6U] [i_1] [i_3 - 1] [i_3]))))));
                        arr_12 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2] = ((unsigned int) ((_Bool) ((arr_4 [i_0]) * (var_4))));
                    }
                }
            } 
        } 
    } 
    var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_16))))))))) <= (max((4294967284U), (((/* implicit */unsigned int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
    var_26 &= ((/* implicit */signed char) max(((((-(4294967281U))) & (min((3354597891U), (((/* implicit */unsigned int) (unsigned char)203)))))), (((/* implicit */unsigned int) var_10))));
}
