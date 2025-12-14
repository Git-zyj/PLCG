/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169744
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_14);
        arr_4 [i_0 - 1] = ((/* implicit */int) (signed char)122);
    }
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) (+((+(arr_8 [i_1 + 1])))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 4; i_2 < 9; i_2 += 3) /* same iter space */
        {
            arr_14 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((-1176179288) > (((/* implicit */int) arr_1 [i_1 + 2]))))) * (((/* implicit */int) (!(arr_1 [i_1 + 2]))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 4; i_3 < 9; i_3 += 3) 
            {
                arr_18 [(_Bool)0] [(unsigned char)6] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_8 [i_2])))) ? (arr_7 [i_2] [i_1 + 2]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [(_Bool)1] [i_2] [(_Bool)1]))))))));
                arr_19 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((int) var_7)) : (((/* implicit */int) ((unsigned short) var_9)))))), (arr_0 [i_1])));
            }
        }
        /* vectorizable */
        for (unsigned short i_4 = 4; i_4 < 9; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                arr_27 [(signed char)0] = ((/* implicit */signed char) ((((var_15) ? (arr_8 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-41)))));
                arr_28 [i_1] [6] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 2]))));
            }
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_32 [i_4] [i_4] [i_1] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned char)59)))))));
                arr_33 [i_4] [i_4] [i_4] = 3107439398U;
            }
            /* LoopSeq 2 */
            for (int i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
            {
                arr_36 [i_4] [(signed char)2] [(signed char)2] = ((/* implicit */int) arr_17 [i_4] [(unsigned short)4] [i_4]);
                arr_37 [i_7] = ((short) arr_7 [i_1 + 2] [i_7 - 1]);
                arr_38 [i_4] [i_4] = ((/* implicit */_Bool) (~(var_9)));
            }
            for (int i_8 = 2; i_8 < 9; i_8 += 4) /* same iter space */
            {
                arr_42 [i_1 - 1] [i_4] [i_1 - 1] = ((/* implicit */int) 2863605228U);
                arr_43 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (14321917491656034820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8 + 1] [i_1 + 2] [i_4 - 1])))));
                arr_44 [i_1] [i_4] = ((/* implicit */int) (+(((var_4) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_4]))) : (arr_8 [8])))));
                arr_45 [i_1] [i_4] [i_8] = ((/* implicit */short) (~(((/* implicit */int) (signed char)100))));
            }
            arr_46 [i_4] [i_4] = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) (unsigned short)36572)))));
            arr_47 [0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_4 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_1 - 1] [i_4 - 4]))));
        }
        arr_48 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (signed char)126)) % (((/* implicit */int) (unsigned char)173))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 8; i_9 += 3) /* same iter space */
    {
        arr_51 [i_9] [i_9 + 1] = ((/* implicit */signed char) var_2);
        arr_52 [6] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        arr_53 [(short)4] |= ((/* implicit */unsigned short) (+(arr_20 [i_9 + 2])));
        arr_54 [i_9] [i_9] = ((/* implicit */long long int) var_12);
        arr_55 [(short)8] = ((/* implicit */short) ((_Bool) arr_0 [i_9]));
    }
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_2)))))));
    var_19 = ((/* implicit */_Bool) ((unsigned char) var_2));
}
