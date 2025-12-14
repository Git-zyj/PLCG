/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147128
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [0])))) ? (((unsigned long long int) 2147483647)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [(unsigned short)2])) - (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [(unsigned short)5]))))) : (((long long int) 0U))));
        arr_4 [(unsigned short)3] = ((/* implicit */int) var_7);
        arr_5 [i_0] |= ((/* implicit */long long int) ((unsigned short) var_1));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */int) (((((-(((/* implicit */int) var_5)))) >= (((/* implicit */int) ((4294967289U) <= (((/* implicit */unsigned int) -732311969))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) : ((+(var_2)))));
        arr_9 [(unsigned short)13] [(unsigned short)8] = ((/* implicit */unsigned long long int) ((long long int) var_4));
        arr_10 [i_1] = ((/* implicit */unsigned int) ((unsigned short) var_8));
        arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (max((((((/* implicit */unsigned long long int) var_0)) * (var_4))), (((/* implicit */unsigned long long int) ((unsigned int) 0ULL)))))));
        arr_12 [(_Bool)1] = ((/* implicit */int) (unsigned short)0);
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        arr_15 [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)127);
        arr_16 [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2]))) - (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) <= (var_6)))))))));
        arr_17 [i_2] = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
        arr_18 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_14 [i_2] [i_2])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (arr_6 [i_2] [i_2]))))));
        arr_19 [i_2] = ((unsigned int) (!(((_Bool) (unsigned short)13111))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_22 [i_3] = arr_21 [i_3] [i_3];
        arr_23 [i_3] [16ULL] = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_3])), (arr_7 [i_3] [i_3])))));
        arr_24 [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)120)), (((((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)8068))))));
    }
    /* LoopSeq 3 */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_28 [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) * (18446744073709551609ULL))), (arr_7 [i_4] [i_4])));
        arr_29 [i_4] = ((/* implicit */int) var_5);
    }
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_34 [i_5] = ((/* implicit */unsigned long long int) arr_30 [i_5]);
        arr_35 [i_5] = ((/* implicit */int) arr_32 [i_5]);
        arr_36 [i_5] [1ULL] = ((/* implicit */unsigned short) ((unsigned long long int) -31250321));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        arr_39 [5U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_6])) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_6])))));
        arr_40 [i_6] = ((/* implicit */unsigned long long int) 135107988821114880LL);
    }
}
