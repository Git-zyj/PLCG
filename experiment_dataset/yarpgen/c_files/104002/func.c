/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104002
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
    var_13 += ((/* implicit */signed char) (((((-(((/* implicit */int) (signed char)52)))) * ((-(((/* implicit */int) var_7)))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (3371684556665190565ULL))))))));
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_5)))) | ((+(min((((/* implicit */unsigned long long int) var_5)), (11394272522933681706ULL)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) 0U);
                    var_16 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned char)173))))))) ? (((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) arr_7 [(unsigned char)13])) : (-2317406781824592339LL))) & (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-26169)))))));
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [(unsigned char)9] [i_0]))))) + (((long long int) (signed char)49)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)-19))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 4095809506169320729ULL)) && (((/* implicit */_Bool) var_3))))), (min((((/* implicit */unsigned short) var_11)), (var_1))))))) : (var_4)));
}
