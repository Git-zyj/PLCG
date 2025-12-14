/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105660
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
    var_10 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [(unsigned char)15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_0 [(unsigned char)13] [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_5 [i_0] [i_0] = (-(((/* implicit */int) (unsigned char)22)));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
        arr_9 [i_1] &= (-(((/* implicit */int) arr_6 [i_1])));
        var_11 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_7 [i_1]) : (((/* implicit */int) var_1)))))));
    }
    var_12 = ((/* implicit */unsigned char) ((long long int) var_1));
    /* LoopSeq 2 */
    for (short i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        var_13 = ((/* implicit */short) var_0);
        var_14 = (+(((/* implicit */int) arr_10 [i_2])));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) arr_10 [i_2 + 2]);
        arr_14 [(short)9] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_11 [i_2 + 2])) / (((/* implicit */int) arr_11 [i_2 - 1])))), (((/* implicit */int) (unsigned char)248))));
    }
    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 4) 
    {
        arr_17 [i_3] [7LL] = ((/* implicit */unsigned char) max((max((((/* implicit */int) min(((unsigned char)0), ((unsigned char)22)))), ((-(((/* implicit */int) (unsigned char)70)))))), (((/* implicit */int) arr_16 [i_3] [i_3 + 2]))));
        arr_18 [i_3] = ((/* implicit */unsigned char) (+(min((arr_1 [i_3 + 3]), (((/* implicit */long long int) min((var_1), (arr_0 [i_3] [i_3]))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_25 [(unsigned char)8] [i_4] = (~(((/* implicit */int) max((var_0), (var_0)))));
                    arr_26 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (-2147483647 - 1)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)253)))))));
                    arr_27 [i_3] [i_3] [(short)8] [i_3] = ((/* implicit */short) var_8);
                    var_15 += ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (arr_19 [i_3 + 3] [i_4])))) && (((/* implicit */_Bool) var_5))));
                }
            } 
        } 
    }
}
