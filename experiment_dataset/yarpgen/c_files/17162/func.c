/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17162
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (~(var_3)))) ? (min((((/* implicit */long long int) var_11)), (5781164442034820552LL))) : (max((var_3), (((/* implicit */long long int) arr_2 [i_0 + 1])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) * (((8714599841895684630LL) / (8714599841895684630LL))))));
        arr_4 [i_0] &= ((/* implicit */short) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = (~(var_12));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3] [i_3])) > (((/* implicit */int) (signed char)41))));
                        var_14 = ((/* implicit */long long int) ((_Bool) var_3));
                        var_15 += ((/* implicit */unsigned short) min((min((((long long int) -5781164442034820552LL)), (((((/* implicit */_Bool) -1059552944203853852LL)) ? (-9223372036854775806LL) : (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_4)))) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) arr_13 [i_1] [i_3] [i_1])))))));
                        arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_3);
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned char) min((max((((arr_12 [i_1]) >> (((255752076321910570ULL) - (255752076321910562ULL))))), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)41)), (var_11)))))), (((unsigned int) -1597747740))));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_0)) % (((((5781164442034820552LL) * (((/* implicit */long long int) ((/* implicit */int) var_8))))) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
}
