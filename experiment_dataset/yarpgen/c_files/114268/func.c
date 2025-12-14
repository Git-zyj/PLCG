/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114268
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
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_5))))))), (var_2)));
    var_19 = (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_15))))) | (var_4)))));
    var_20 = ((/* implicit */long long int) var_4);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_13)))))) ? (max((((int) -8346708678439092846LL)), (((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */int) var_8))))))) : ((~(-675063207)))));
        arr_5 [(unsigned char)6] = ((/* implicit */long long int) var_4);
        arr_6 [i_0] = var_6;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [(short)10] [(short)10] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (signed char)99))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))))));
        arr_10 [(_Bool)1] [i_1] |= ((/* implicit */unsigned short) arr_3 [i_1]);
        arr_11 [i_1] = (_Bool)1;
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            arr_17 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-64))))) * (((((/* implicit */_Bool) 6112328054741580809ULL)) ? (((/* implicit */unsigned long long int) arr_12 [i_2 + 3] [i_3])) : (4760224983484056919ULL)))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                arr_21 [i_4] [i_3] [i_4] [i_3] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_20 [i_2 + 1] [i_3] [i_2 + 1] [i_2 + 3])) ? (((/* implicit */int) arr_14 [i_2] [i_2])) : (arr_12 [i_2] [i_2 - 1]))));
                arr_22 [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_4] [i_2 + 1] [i_2 + 3] [i_2])) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_3)) : (409479137))) : (((/* implicit */int) var_7))));
            }
            arr_23 [i_2] [i_2] [i_2] = -1179572216;
            arr_24 [i_3] = ((((((/* implicit */int) var_14)) | (((/* implicit */int) arr_13 [i_2] [i_2])))) < (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_3])) : (((/* implicit */int) (unsigned short)65517)))));
            arr_25 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_3])) & (((/* implicit */int) arr_18 [i_3]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            arr_28 [i_2 + 3] [i_5] [i_5] = -1413483999;
            arr_29 [i_2] [i_2] = ((/* implicit */unsigned short) 2147483647);
            arr_30 [i_5] [i_2] = (!(((/* implicit */_Bool) arr_27 [i_5] [(_Bool)1])));
            arr_31 [i_2] [i_2] [i_2 - 1] = ((short) ((((/* implicit */_Bool) var_15)) ? (arr_16 [i_2 - 1] [i_5] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5])))));
        }
        arr_32 [i_2] &= ((/* implicit */unsigned char) arr_27 [(short)5] [i_2 + 3]);
        arr_33 [i_2 + 2] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_2 + 3] [i_2 + 3]))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_37 [i_6] [i_6] = ((/* implicit */unsigned char) var_0);
        arr_38 [i_6] = (!(((/* implicit */_Bool) min((((arr_15 [i_6] [i_6]) ? (arr_27 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (min((((/* implicit */long long int) arr_20 [i_6] [i_6] [i_6] [i_6])), (var_6)))))));
        arr_39 [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27249)) | (1413484017)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_6] [i_6] [i_6] [i_6])) + (-1413484018)))) : (arr_16 [i_6] [i_6] [i_6]))), (((/* implicit */long long int) (signed char)127))));
    }
}
