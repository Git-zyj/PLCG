/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113367
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) | (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (signed char)-118))))));
        var_13 = ((/* implicit */short) ((((/* implicit */int) (signed char)-118)) & (((/* implicit */int) arr_2 [(short)9]))));
        arr_3 [i_0 + 1] = ((/* implicit */int) arr_2 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_2 [i_1]))) ? (((/* implicit */int) ((unsigned short) arr_2 [(signed char)7]))) : ((~(((/* implicit */int) arr_0 [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_5)))) || (((/* implicit */_Bool) arr_1 [i_1]))))) : (((/* implicit */int) (unsigned short)52904)))))));
        var_15 = ((/* implicit */short) min(((~(((/* implicit */int) arr_1 [i_1])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((arr_5 [i_1]), (arr_2 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                {
                    var_16 *= arr_5 [i_1];
                    var_17 *= arr_1 [i_1];
                    var_18 = ((((/* implicit */_Bool) (+((+(((/* implicit */int) (short)10534))))))) ? (max((((/* implicit */long long int) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))), ((+(4563755575853948934LL))))) : (((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) <= (var_7))))));
                }
            } 
        } 
        var_19 = ((/* implicit */int) -4563755575853948934LL);
        var_20 ^= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (short)24251)) ? (((((((/* implicit */int) (short)-10534)) + (2147483647))) >> (((-4563755575853948934LL) + (4563755575853948955LL))))) : (((/* implicit */int) var_6)))));
    }
    for (signed char i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        var_21 = ((/* implicit */signed char) (((((~(((/* implicit */int) arr_2 [i_4 + 2])))) + (2147483647))) << (((((/* implicit */int) var_9)) - (11482)))));
        arr_15 [(short)8] &= ((/* implicit */unsigned short) ((int) (_Bool)0));
        var_22 -= ((/* implicit */signed char) (+(((((((/* implicit */_Bool) 399941226)) && (((/* implicit */_Bool) (short)10533)))) ? (((((/* implicit */_Bool) -4563755575853948934LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)30))) : (5273458929654846194LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4]))))))))));
        var_23 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (max((var_11), (0U))))) > (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) arr_1 [16])), ((short)10534)))))))));
    }
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_11))));
    var_25 &= ((/* implicit */unsigned long long int) var_6);
}
