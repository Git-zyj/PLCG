/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175216
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
    var_18 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_14), (((/* implicit */short) var_2))))) ? (min((((/* implicit */unsigned long long int) var_12)), (12738756895612582900ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_15))) < (((/* implicit */int) var_0)))))));
    var_19 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_2 [(unsigned short)6] &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 12738756895612582900ULL)) ? (arr_0 [i_0]) : (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_12)) ? (arr_0 [9]) : (12738756895612582900ULL)))))));
        arr_3 [i_0] = ((/* implicit */short) (-(((unsigned int) (unsigned short)16295))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_3])) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (7472063881819604576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3307813504U)))))))));
                        var_21 = arr_1 [i_0] [i_0];
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)68)))))));
                        var_23 += arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3];
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [i_2] [i_3] [i_0 + 2] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [8]))) & (arr_0 [i_0]))) : (((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                    }
                } 
            } 
        } 
    }
}
