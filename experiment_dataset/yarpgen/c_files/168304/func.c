/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168304
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((_Bool) 5650753491874613887ULL))) : (((/* implicit */int) (signed char)122))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / ((+(((/* implicit */int) var_0))))));
    var_22 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((((((/* implicit */_Bool) 8438236805291547965ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11177911717046247853ULL)))))) : (((((/* implicit */_Bool) 12795990581834937729ULL)) ? (5650753491874613902ULL) : (12795990581834937760ULL))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)32744)))), (((/* implicit */int) ((((/* implicit */_Bool) 12795990581834937728ULL)) || (((/* implicit */_Bool) 5650753491874613898ULL)))))))))))));
                arr_5 [i_0] [i_1] = ((min((arr_0 [i_1 - 3] [i_1]), (((/* implicit */long long int) arr_2 [i_1 - 3] [i_1])))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_1 - 2] [i_1])))));
                arr_6 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (12795990581834937729ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_1] [i_1]))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_1 [i_1 - 3]);
            }
        } 
    } 
    var_24 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(var_1)))), ((+(min((11177911717046247853ULL), (((/* implicit */unsigned long long int) var_7))))))));
}
