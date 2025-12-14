/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163241
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1])), ((unsigned short)46300))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0 - 1])), (arr_3 [i_1])))) : (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) min((arr_3 [i_1]), ((unsigned short)19213)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned char)217)))))))));
                arr_5 [(unsigned char)21] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)217)) <= (((/* implicit */int) (unsigned short)54069))))), (min((((/* implicit */unsigned short) (unsigned char)16)), ((unsigned short)65535)))))) ? (arr_0 [(unsigned char)21] [(unsigned char)21]) : (((/* implicit */unsigned long long int) ((arr_2 [(unsigned short)14]) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46300)) || (((/* implicit */_Bool) (unsigned char)251))))) : (((/* implicit */int) arr_1 [i_0 - 3])))))));
                arr_6 [i_0 + 2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (var_12)))));
                var_17 = ((/* implicit */unsigned short) arr_2 [i_1]);
            }
        } 
    } 
}
