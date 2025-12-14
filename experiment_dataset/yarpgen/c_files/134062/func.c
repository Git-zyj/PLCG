/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134062
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) & ((+(min((2036436081477519234ULL), (((/* implicit */unsigned long long int) (unsigned char)224))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 &= ((/* implicit */unsigned char) var_7);
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((arr_5 [i_1] [i_0] [i_2] [i_1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))) ? ((~(((/* implicit */int) arr_6 [i_2 + 2] [i_0] [i_1])))) : (((/* implicit */int) ((_Bool) var_6)))));
                    var_13 = var_9;
                }
            } 
        } 
        arr_8 [(_Bool)1] |= ((/* implicit */unsigned int) min(((unsigned short)32752), ((unsigned short)32752)));
        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)60)), (var_10))))))) : (min((((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_4))))));
    var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (4177671120U)));
}
