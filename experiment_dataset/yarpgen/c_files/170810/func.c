/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170810
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
    var_20 = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)12)), (var_19)))), (((long long int) (unsigned char)102))))) : (min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)170)) && (((/* implicit */_Bool) var_6)))))))));
    var_21 = ((/* implicit */int) var_12);
    var_22 = ((/* implicit */unsigned char) var_18);
    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_19))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_24 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)82))))) ^ (min((arr_6 [2] [6ULL]), (arr_6 [(unsigned char)4] [(unsigned char)4])))));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)145)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)102)))))))))))));
                arr_8 [i_1] [i_1] [i_1] = (~(((/* implicit */int) (unsigned char)110)));
            }
        } 
    } 
}
