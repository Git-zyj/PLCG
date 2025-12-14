/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153102
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
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19461)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34864)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) << (((/* implicit */int) ((((/* implicit */int) (signed char)22)) != (((/* implicit */int) (signed char)-23)))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)58919)), (10341248595644738543ULL)))) ? (((((/* implicit */int) var_3)) % (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((var_1) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_8)))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (var_7) : (var_2)))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1258961737U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)46074)) & (((/* implicit */int) (short)1945)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) var_10);
                var_15 = ((/* implicit */_Bool) max(((~((~(((/* implicit */int) var_9)))))), (((/* implicit */int) (unsigned short)6589))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (17457069126089549660ULL))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_10)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)32)), ((short)21033))))))) ? (max((arr_6 [i_1] [i_1] [i_1 - 1]), (((((/* implicit */_Bool) var_6)) ? (arr_2 [5] [i_1]) : (((/* implicit */int) (unsigned short)19461)))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) (unsigned short)3425)))))));
                var_17 = ((/* implicit */_Bool) (unsigned char)194);
                var_18 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (short)-21593)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) >= (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_1])))))))), (((arr_0 [i_0]) & (((/* implicit */unsigned int) max((-1213828647), (((/* implicit */int) var_8))))))));
            }
        } 
    } 
}
