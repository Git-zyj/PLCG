/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185668
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_17 |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 + 2] [(unsigned short)8]))));
        arr_3 [i_0] = ((/* implicit */long long int) var_11);
        arr_4 [i_0] = ((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]));
        arr_5 [i_0] = ((/* implicit */_Bool) arr_2 [i_0 + 1]);
        var_18 |= ((/* implicit */long long int) ((((arr_0 [i_0] [(_Bool)1]) != (((/* implicit */int) (short)31)))) ? (((/* implicit */int) arr_1 [i_0] [(short)12])) : (arr_0 [i_0 + 2] [12ULL])));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 3344749639320422930LL))));
                    var_20 = ((/* implicit */int) max((arr_13 [i_3 - 1]), (((/* implicit */long long int) var_12))));
                    arr_17 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_6 [(unsigned char)2])) / (arr_0 [i_1] [i_2])));
                }
            } 
        } 
        arr_18 [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((887964931) != (((/* implicit */int) arr_8 [i_1] [i_1])))))), ((~(((/* implicit */int) arr_15 [i_1] [i_1] [i_1]))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_4 = 3; i_4 < 9; i_4 += 2) 
    {
        arr_23 [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_13 [i_4])))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                for (int i_7 = 3; i_7 < 8; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) (unsigned short)19117);
                        arr_30 [i_5] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_4]))));
                        var_22 = ((/* implicit */short) arr_20 [i_4]);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 887964931)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4]))) | (arr_22 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_4 - 3] [i_4 - 1] [i_4 - 1])) ? (var_5) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)46404)))))));
    }
}
