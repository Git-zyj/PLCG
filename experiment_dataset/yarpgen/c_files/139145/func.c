/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139145
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [(unsigned char)17] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(arr_3 [(unsigned short)1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [16])))) : (arr_3 [i_0])))));
                var_15 *= ((/* implicit */unsigned char) (short)-1);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])), ((+(((/* implicit */int) var_10))))))) ? (((unsigned long long int) arr_4 [i_0] [(short)3] [i_1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 649951098)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 629619532)) : (var_5)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (unsigned char)9)))))));
    var_17 = ((/* implicit */long long int) var_12);
    var_18 = ((/* implicit */int) (short)-5981);
    var_19 = ((/* implicit */int) min((var_1), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
}
