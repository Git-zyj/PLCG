/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109429
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
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) / (arr_0 [i_1])))) : (min((2453293431520012713ULL), (((/* implicit */unsigned long long int) var_6))))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_4)) == (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) 2453293431520012713ULL)) ? (2453293431520012713ULL) : (15993450642189538913ULL))) : (min((var_14), (var_15)))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((((signed char) var_15)), (var_11)))) ? (((var_15) * (var_15))) : (((/* implicit */unsigned long long int) ((int) ((15993450642189538903ULL) - (var_7)))))));
                arr_6 [i_1] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) 5351745385623776978LL))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) var_1);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), ((-(var_7)))))) ? (((((((/* implicit */int) var_10)) < (var_12))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (0U))))))) : (((/* implicit */unsigned long long int) ((long long int) var_6)))));
    var_21 = ((/* implicit */long long int) var_13);
    var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))))));
}
