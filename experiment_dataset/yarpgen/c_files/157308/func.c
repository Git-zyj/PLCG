/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157308
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [(unsigned short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((18014398442373120LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) arr_1 [i_0] [(unsigned short)9])) * (((/* implicit */int) var_1)))) : (((/* implicit */int) var_11))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) (signed char)25));
        var_13 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)16562)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [(unsigned char)7] [i_0] = ((/* implicit */short) var_7);
    }
    for (int i_1 = 3; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            arr_11 [i_2] [10] = ((/* implicit */_Bool) (~(min((arr_7 [(unsigned char)19] [i_2 + 3]), (arr_7 [i_2 + 1] [i_2 + 3])))));
            arr_12 [i_2] = ((/* implicit */int) var_2);
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)32761)) || (((/* implicit */_Bool) (unsigned short)8)))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((~(((((/* implicit */int) (signed char)-26)) ^ (((/* implicit */int) (unsigned char)50))))))));
            arr_14 [i_2] = ((/* implicit */short) var_9);
        }
        for (signed char i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            arr_19 [i_1 - 3] = ((/* implicit */unsigned short) var_1);
            arr_20 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_8 [i_1 - 2] [i_1 + 1]) - (var_9)))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10092))) : (67108863U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-43)))))));
        }
        arr_21 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) (short)-8485);
    }
    for (int i_4 = 3; i_4 < 24; i_4 += 3) /* same iter space */
    {
        arr_26 [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_22 [i_4])))) ? (((/* implicit */int) var_3)) : (((int) -1848274002))))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_22 [i_4 - 3]), (((/* implicit */unsigned long long int) var_11))))) ? ((+(arr_7 [i_4 - 2] [i_4 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4 - 2] [i_4 - 2])) ? (((/* implicit */int) arr_6 [i_4 - 3] [i_4 - 1])) : (((/* implicit */int) arr_6 [i_4] [(unsigned char)16])))))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            arr_30 [i_4 - 1] [i_4] [(unsigned char)3] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)5533)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_2)) ? (arr_7 [i_4 - 2] [i_4 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_29 [i_5] [i_5]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9])) ? (((/* implicit */int) arr_23 [(unsigned short)9])) : (((/* implicit */int) var_1)))))))))));
            arr_31 [i_4] [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_4 - 3] [i_5])) : (((/* implicit */int) var_11)))) : (((var_0) ? (arr_18 [i_4]) : (((/* implicit */int) var_3))))))));
        }
    }
    for (int i_6 = 3; i_6 < 24; i_6 += 3) /* same iter space */
    {
        arr_36 [(unsigned char)7] [i_6] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)206))))) ? (max((max((((/* implicit */int) var_2)), (arr_8 [17ULL] [i_6]))), (((((/* implicit */_Bool) var_8)) ? (arr_34 [i_6 + 1]) : (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)17)) : (var_12)))) ? (var_9) : (((var_0) ? (var_9) : (arr_9 [(short)19]))))));
        arr_37 [(unsigned short)12] &= ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_6 [5] [5])))))), (max((max((474889119), (((/* implicit */int) arr_28 [i_6] [i_6])))), (((/* implicit */int) arr_16 [i_6] [(unsigned char)6] [(unsigned short)22]))))));
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)29))));
        arr_38 [i_6] = ((/* implicit */unsigned int) (unsigned char)24);
    }
    var_16 = var_12;
}
