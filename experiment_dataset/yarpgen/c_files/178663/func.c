/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178663
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
    var_12 &= ((/* implicit */unsigned char) var_0);
    var_13 &= ((/* implicit */long long int) ((((((((/* implicit */_Bool) 12926671513918510987ULL)) ? (var_4) : (var_11))) <= (((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1243686939U)) ? (var_5) : (var_4)))) ? (((((/* implicit */_Bool) (short)14495)) ? (((/* implicit */unsigned long long int) 2621716663U)) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5520072559791040624ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5520072559791040621ULL)));
                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) arr_2 [i_0 + 1]))));
                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 12926671513918510991ULL)) ? (5520072559791040625ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) > (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 5520072559791040629ULL)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1])))))) <= (((/* implicit */int) var_1))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14491))) | (12926671513918511011ULL)));
            }
        } 
    } 
}
