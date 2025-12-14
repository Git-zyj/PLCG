/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152618
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
    var_17 |= ((/* implicit */signed char) ((((min((((/* implicit */unsigned long long int) var_8)), (var_9))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6457))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 2074383705U)) ? (var_11) : (((/* implicit */unsigned long long int) 4113133083U)))))))));
    var_18 = ((/* implicit */unsigned char) var_14);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)59079)) : (((/* implicit */int) var_12)))))))) >= ((+(((-2124728620) - (((/* implicit */int) (unsigned short)59069))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))))), (max((438694783787673663ULL), (((/* implicit */unsigned long long int) var_8))))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (max((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_3 [(unsigned short)8]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) | (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_11))))))))));
                arr_6 [(unsigned short)10] [(unsigned short)10] |= ((/* implicit */unsigned char) (~(arr_0 [i_0])));
            }
        } 
    } 
}
