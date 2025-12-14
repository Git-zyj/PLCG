/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153956
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
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)83)), ((short)-10427)))) ? (var_16) : (var_11)));
    var_20 = (+(((var_11) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_17)) : (var_8)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max(((unsigned short)65513), ((unsigned short)65513)))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) var_15)) : (17401713404269675694ULL))))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_5)) * (((/* implicit */int) (short)21911)))), (((/* implicit */int) min((arr_1 [i_0]), (var_18)))))))));
                arr_5 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1])))) ? (((/* implicit */int) ((short) (short)10435))) : (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)52667))))));
                arr_6 [i_0] = min((((/* implicit */int) var_10)), (max((((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) ((short) var_4))))));
            }
        } 
    } 
}
