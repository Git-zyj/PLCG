/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169187
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
    var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max(((signed char)113), (var_8))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_14)))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-25565)))))) : (min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (short)-2457)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))))))));
    var_19 = ((/* implicit */long long int) (unsigned short)65535);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 6; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((signed char) (+(((/* implicit */int) (unsigned char)255)))))), (min((((/* implicit */long long int) (signed char)-1)), (5351312946550307315LL)))));
                    arr_9 [i_2 + 1] [i_2] [i_0] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2251))))) > ((~(((/* implicit */int) (unsigned char)246))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_1] [i_0]);
                }
            } 
        } 
    } 
}
