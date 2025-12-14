/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146163
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */int) var_2)))) != (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_3)) + (143))))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8532189824493153984ULL)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (signed char)(-127 - 1)))))) : (8532189824493153984ULL)))));
    var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) var_6)) : (-1761825005))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)89)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-1761825005)))) ? (arr_2 [i_2]) : (((((/* implicit */_Bool) 1154641928)) ? (arr_3 [i_2]) : (-1761825005))))))));
                    arr_7 [i_0] [i_1] [i_1] [13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (11462871339258437694ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)0) ? (((((/* implicit */_Bool) -1315493322)) ? ((-2147483647 - 1)) : (arr_2 [i_0]))) : (((/* implicit */int) (_Bool)1))))));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) (signed char)127)))) ? (((/* implicit */int) (unsigned char)89)) : (((((/* implicit */_Bool) -833115987)) ? (arr_3 [i_2]) : (arr_3 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (arr_4 [i_1] [i_2]) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 270970347)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) 270970347)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 270970347)) ? (arr_5 [i_0] [i_1]) : (arr_5 [20ULL] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) - (arr_6 [i_2]))) != (((((/* implicit */_Bool) arr_1 [i_2])) ? (1715663744) : (arr_3 [(signed char)8])))))))));
                }
            } 
        } 
    } 
}
