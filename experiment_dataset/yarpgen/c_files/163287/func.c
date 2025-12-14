/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163287
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
    var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((short) 82596801U))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_19 = ((/* implicit */short) var_6);
    var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)124)))))))) ? (((/* implicit */int) ((min((-1320116288), (((/* implicit */int) (signed char)108)))) < (((var_4) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))) : (((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) var_10)) + (133))) - (25)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] [3U] [i_1] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_12);
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)11217)), (max((4660602505523363583LL), (((/* implicit */long long int) arr_7 [i_1]))))));
                    }
                } 
            } 
        } 
        arr_13 [(_Bool)1] = ((/* implicit */short) (~(arr_4 [i_0])));
        var_22 = ((/* implicit */unsigned long long int) var_15);
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_23 = ((/* implicit */signed char) (~(var_2)));
        arr_16 [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-1)) ? (1244476192U) : (288944738U))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17)))));
    }
}
