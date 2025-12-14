/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163670
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
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (~(var_5)))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)32640))));
    var_19 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((int) 480899034329661065ULL))), (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50168))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32651))) % (var_0))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [(unsigned char)0] = ((/* implicit */unsigned char) (~(arr_2 [i_0])));
                    arr_7 [(unsigned char)18] [(unsigned char)18] [12] [(unsigned char)18] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)32883)))) : (arr_2 [i_1])));
                }
            } 
        } 
        arr_8 [i_0] [0] = ((/* implicit */int) (unsigned short)32882);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) arr_11 [i_3] [i_3]);
        arr_13 [(unsigned char)8] = ((/* implicit */signed char) 2500936763300603676ULL);
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) (unsigned short)32658);
    }
}
