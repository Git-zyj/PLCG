/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145747
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                    arr_9 [i_1] [(unsigned char)11] [i_1] [i_1] = ((/* implicit */short) var_9);
                    arr_10 [i_1] [i_0] [i_1] [(signed char)11] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) ((((/* implicit */int) (unsigned char)137)) + (((/* implicit */int) (unsigned short)8744))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_19 = ((/* implicit */short) ((signed char) (~(14336))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_15 [i_3] [i_3] = ((/* implicit */int) var_15);
            arr_16 [i_3] [i_4] [i_4] = min((((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-31077)))), (((int) (+(((/* implicit */int) arr_14 [i_4]))))));
        }
        arr_17 [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) (unsigned short)13289)) : ((+(((/* implicit */int) arr_13 [(unsigned short)0]))))));
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_15)) + (((/* implicit */int) arr_14 [i_3]))))) - (max((((/* implicit */long long int) var_1)), (6031511394733984260LL)))))) ? ((+(arr_11 [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_11 [i_3])))) ? (((/* implicit */int) ((_Bool) 3761831031U))) : (((/* implicit */int) ((unsigned short) var_13))))))));
    }
    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        var_21 = ((/* implicit */int) ((long long int) (signed char)74));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_18 [i_5 + 2]))) != (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_18 [i_5 + 4])))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) arr_4 [i_7] [5LL] [i_8 - 1]))), ((~(((/* implicit */int) var_0))))));
                    arr_31 [9] [i_7] [i_8] [i_6] = ((/* implicit */unsigned char) ((short) (-(arr_8 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]))));
                }
            } 
        } 
        arr_32 [i_6] |= ((/* implicit */long long int) ((unsigned short) ((unsigned int) ((arr_8 [i_6] [i_6] [i_6] [i_6]) * (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    }
    var_24 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) var_11)) * (((/* implicit */int) var_14)))), (((((((/* implicit */_Bool) -1558771069)) ? (var_8) : (((/* implicit */int) var_1)))) / (((/* implicit */int) ((unsigned short) 17478185143072292841ULL)))))));
}
