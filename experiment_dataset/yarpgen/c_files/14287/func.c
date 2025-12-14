/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14287
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-1010219860) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)676)) : (((/* implicit */int) (unsigned short)64847)))) : (((/* implicit */int) ((unsigned char) (short)7078))))))))));
    var_14 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) var_9)), (((((((/* implicit */int) var_12)) + (2147483647))) >> (((var_5) - (5189771745517191418ULL)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((((/* implicit */_Bool) 11521074680975117926ULL)) ? (((/* implicit */int) (short)7092)) : (((/* implicit */int) (unsigned short)64863)));
                var_16 ^= ((/* implicit */_Bool) (unsigned char)255);
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (((((/* implicit */_Bool) (short)-15407)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) : (3629485959125761550ULL)))));
                arr_5 [i_1] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)64859))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)681))))) ? ((-(6502439669539912774ULL))) : (((/* implicit */unsigned long long int) (+(arr_2 [i_0]))))))));
            }
        } 
    } 
}
