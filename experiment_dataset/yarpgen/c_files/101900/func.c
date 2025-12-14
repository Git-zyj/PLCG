/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101900
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
    var_17 = ((/* implicit */short) var_14);
    var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(1449649214505357704LL)))))) ? (var_4) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    var_19 = ((/* implicit */signed char) ((int) var_9));
    var_20 = ((/* implicit */int) var_12);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))))), (max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0 + 2]))))));
        arr_5 [i_0] [6] &= ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)59978)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
        var_21 = ((/* implicit */_Bool) max(((unsigned short)2032), (((/* implicit */unsigned short) (unsigned char)10))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(unsigned char)4])) ? (((((var_14) + (2147483647))) >> (((((/* implicit */int) (unsigned char)147)) - (121))))) : (((/* implicit */int) arr_7 [0])))))));
        arr_8 [i_1] = ((/* implicit */int) arr_7 [i_1]);
        var_23 = ((/* implicit */_Bool) (-(((2092878843) + (var_15)))));
    }
    for (int i_2 = 3; i_2 < 18; i_2 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_10 [i_2 + 1])) : (((/* implicit */int) arr_9 [i_2 - 3] [4ULL]))))) ? ((-(1721949150))) : (((/* implicit */int) (_Bool)1)))))));
        arr_13 [(unsigned short)8] &= (!(((/* implicit */_Bool) var_0)));
        var_25 = var_15;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */_Bool) arr_10 [i_3]);
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    var_26 += ((/* implicit */short) (+(((/* implicit */int) var_16))));
                    arr_23 [i_3] [(signed char)1] [i_4] [(signed char)1] = ((/* implicit */unsigned long long int) (unsigned char)120);
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_4 + 1] [i_4 - 1])) ? (arr_20 [i_5 + 1] [i_4] [i_4 - 1]) : ((~(arr_20 [i_4 + 1] [(_Bool)1] [i_4 - 1])))));
                    arr_24 [i_3] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) || (((/* implicit */_Bool) (unsigned char)147)))))) - ((((_Bool)1) ? (((/* implicit */long long int) var_0)) : (arr_11 [i_5] [(_Bool)1])))));
                }
            } 
        } 
        arr_25 [(unsigned short)14] = ((/* implicit */unsigned long long int) (unsigned char)37);
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_11 [4LL] [i_3])))) ? (((/* implicit */int) (signed char)-99)) : ((-(((/* implicit */int) arr_16 [i_3]))))));
        var_29 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [6] [6])) ? (arr_19 [i_3]) : (var_1))) < (((/* implicit */int) ((signed char) var_5)))));
    }
}
