/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184722
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
    var_20 = ((/* implicit */_Bool) (unsigned char)7);
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_17))));
    var_22 = max((var_0), (((/* implicit */long long int) var_16)));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((/* implicit */int) min((arr_2 [i_0 - 1]), (var_16)))), (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))))))));
        var_24 = ((/* implicit */unsigned char) min((arr_1 [i_0 - 1] [i_0]), (((long long int) ((arr_3 [i_0 + 1] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((arr_3 [i_0] [(unsigned char)8]) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [20]))))) : (((long long int) (_Bool)1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) var_14);
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_6 [12]))));
    }
    for (unsigned char i_2 = 4; i_2 < 22; i_2 += 1) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((3156155869524195407LL) - (var_15))), (((/* implicit */long long int) ((int) var_2)))))) || (((/* implicit */_Bool) arr_8 [i_2]))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_2]), (arr_8 [i_2]))))) >= (min((((/* implicit */long long int) arr_8 [i_2])), (((var_4) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_28 *= ((/* implicit */long long int) ((max((arr_9 [i_2] [i_2 + 3]), (arr_9 [19LL] [i_2 + 3]))) ? (((/* implicit */int) min((arr_9 [(unsigned char)0] [i_2 + 1]), (arr_9 [i_2] [i_2 - 4])))) : (((/* implicit */int) arr_9 [(unsigned char)18] [i_2 - 4]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_4 - 1] [i_4 - 1])) >> (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_3 [i_4] [(_Bool)1])), (arr_8 [0])))), (max((arr_18 [i_4]), (((/* implicit */long long int) arr_9 [i_3] [i_4]))))))));
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_14 [i_3]))));
                }
            } 
        } 
        arr_19 [i_3] = ((/* implicit */_Bool) arr_0 [i_3]);
    }
}
