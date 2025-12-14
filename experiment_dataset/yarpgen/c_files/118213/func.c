/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118213
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
    var_13 = 2147483647;
    var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */int) (unsigned char)180))))) ? (2147483647) : (((((/* implicit */_Bool) (unsigned short)65190)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_7)))) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)83)) << (((-546027045) + (546027058))))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1502015250)) ? (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))), (max((((/* implicit */int) (unsigned short)65519)), (-17))))) : (min((((/* implicit */int) arr_1 [i_0])), (-1)))));
                arr_6 [i_1] = ((/* implicit */unsigned char) -759515707);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (unsigned short)3753);
    var_18 = ((var_3) | (-921075120));
}
