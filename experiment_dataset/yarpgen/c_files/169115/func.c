/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169115
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((unsigned short) (signed char)110)))) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)32840)) == (((/* implicit */int) ((unsigned short) -1LL))))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)65535)))) & (((/* implicit */int) ((short) (signed char)24))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_8)) && (((((/* implicit */long long int) 1346912449)) < (arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned char) ((var_6) >> (((((unsigned long long int) var_5)) - (8051057961836587362ULL)))));
    var_23 = ((/* implicit */unsigned int) ((short) ((signed char) 14052495698373452192ULL)));
}
