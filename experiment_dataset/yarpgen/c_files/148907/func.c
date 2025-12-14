/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148907
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
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) var_4)), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)62772)))))))));
    var_19 = ((/* implicit */unsigned int) ((((int) (-(17704408325549876244ULL)))) + (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) ((unsigned int) 244149983U));
                arr_7 [i_0] = (+(max((arr_5 [i_0]), (arr_5 [i_0]))));
                var_21 ^= ((/* implicit */unsigned int) (((-(((/* implicit */int) ((140668768878592ULL) >= (((/* implicit */unsigned long long int) var_7))))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-103))))))))));
                var_22 ^= ((/* implicit */unsigned char) arr_6 [i_0 + 1] [(unsigned char)2]);
            }
        } 
    } 
}
