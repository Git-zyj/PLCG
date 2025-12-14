/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110631
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
    var_19 -= ((/* implicit */unsigned int) (((~((~(((/* implicit */int) (unsigned char)180)))))) ^ (min((min((var_3), (var_4))), ((~(((/* implicit */int) (unsigned char)180))))))));
    var_20 = ((/* implicit */short) ((int) ((unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_9)))));
    var_21 -= ((/* implicit */unsigned char) var_4);
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        var_22 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [(short)7] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_2 [(_Bool)1]))) : (((/* implicit */int) arr_0 [i_0 - 3])))) | (((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) << (((/* implicit */int) ((var_7) >= (0))))))));
        arr_3 [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2])))) ? (((/* implicit */int) ((short) arr_2 [i_0 + 3]))) : (((int) arr_2 [i_0 - 4]))));
        var_23 = ((/* implicit */_Bool) ((((long long int) ((long long int) var_10))) ^ (((/* implicit */long long int) ((int) arr_1 [i_0 - 3] [i_0 - 2])))));
        var_24 = ((/* implicit */unsigned char) min(((-(arr_2 [i_0 - 3]))), (min((arr_2 [i_0 - 3]), (arr_2 [i_0 - 3])))));
    }
    for (int i_1 = 3; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (arr_5 [(_Bool)1])))) ? ((+(-4700829884017308392LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1]))))));
        var_25 = ((((/* implicit */_Bool) (-((~(var_4)))))) ? (((unsigned int) arr_4 [i_1 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_6 [i_1 + 2] [i_1 - 2]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_26 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) arr_6 [i_2] [i_2])))));
        var_27 -= ((/* implicit */int) ((unsigned short) (_Bool)1));
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_3] [i_3]))))) / (((long long int) arr_6 [i_3] [i_3]))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 19; i_4 += 2) 
        {
            for (short i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                for (unsigned int i_6 = 2; i_6 < 20; i_6 += 1) 
                {
                    {
                        arr_21 [i_3] [i_6] [i_5] [20] = ((/* implicit */int) 3347693720U);
                        arr_22 [10LL] [i_4] [i_5] |= ((/* implicit */unsigned char) (~(((unsigned long long int) ((((/* implicit */int) arr_5 [i_3])) ^ (var_3))))));
                        arr_23 [i_3] [i_4] [(unsigned short)11] [i_3] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_7 [i_4 + 1]) >= (arr_7 [i_4 - 3])))) < (((/* implicit */int) ((unsigned short) arr_7 [i_4 - 1])))));
                    }
                } 
            } 
        } 
    }
}
