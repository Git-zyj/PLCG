/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152766
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
    var_17 = ((/* implicit */int) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32256)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (short)32256);
    }
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (short)-32256);
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            arr_11 [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32231))) : (((var_10) ? (-4289348705628936200LL) : (arr_10 [i_1] [i_1]))));
            arr_12 [i_1 - 1] [i_2] |= ((/* implicit */_Bool) ((unsigned char) arr_5 [i_1 + 3]));
        }
        for (long long int i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    {
                        arr_23 [i_5] [i_3] [i_4] [i_5] [i_5] [i_1] = var_0;
                        arr_24 [i_1] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32256)))))));
                        arr_25 [i_3] [i_5] = var_9;
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_29 [i_1 + 4] [i_3] [i_3] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_19 [(_Bool)1] [i_4] [i_1] [i_6])))), (((/* implicit */int) ((unsigned short) var_14)))));
                            arr_30 [i_1] [i_3] [(_Bool)1] [i_3] |= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_1] [i_3] [i_4] [i_5] [i_6] [i_4] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-32268)) : (((/* implicit */int) (short)-32256))))) : (min((((/* implicit */long long int) (signed char)64)), (-4289348705628936200LL))))));
                            arr_31 [i_1] [i_1] [i_5] [i_1] [i_1] [i_1] [i_1 - 2] = ((/* implicit */long long int) ((short) ((unsigned int) max((var_1), (((/* implicit */unsigned short) var_13))))));
                            arr_32 [i_3] [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 4] [(_Bool)1] = ((/* implicit */signed char) (+(max((((/* implicit */long long int) (short)32256)), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) -112920562)) : (var_11)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_36 [20LL] [20LL] [i_5] [3] [i_7] = ((/* implicit */short) ((signed char) var_6));
                            arr_37 [i_1] [(short)14] [i_4] [i_5] [i_3] |= ((long long int) ((short) (_Bool)1));
                        }
                        arr_38 [i_1] [i_3] [i_4] &= ((((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_8 [i_1 + 1])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    {
                        arr_43 [i_1] [i_1 + 2] [11LL] = ((/* implicit */long long int) ((unsigned short) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) var_1))) - (13))))));
                        arr_44 [9U] [i_3] [i_8] [i_9] = ((/* implicit */unsigned short) ((unsigned char) arr_14 [i_1 - 2] [i_3] [i_3]));
                        arr_45 [i_1] [i_3] [i_8] [i_9] = max((((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((arr_15 [i_3] [i_3]) ? (112920562) : (((/* implicit */int) var_9))))) : (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(signed char)18] [(signed char)18] [i_8] [(signed char)18])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3]))))));
                    }
                } 
            } 
            arr_46 [i_3] [i_1 - 1] = ((/* implicit */long long int) var_1);
        }
        /* vectorizable */
        for (unsigned short i_10 = 1; i_10 < 19; i_10 += 1) 
        {
            arr_49 [(unsigned short)20] [(unsigned short)20] [(unsigned short)20] |= ((/* implicit */long long int) 112920561);
            arr_50 [i_1] = ((/* implicit */signed char) (short)32273);
        }
        /* vectorizable */
        for (unsigned int i_11 = 4; i_11 < 18; i_11 += 4) 
        {
            arr_53 [i_11] [i_11 + 2] [i_1] = ((/* implicit */int) ((long long int) ((unsigned long long int) var_1)));
            arr_54 [17LL] = ((/* implicit */short) ((int) arr_7 [i_1 + 4]));
        }
        arr_55 [i_1] |= ((/* implicit */unsigned short) ((unsigned char) max((arr_9 [i_1] [i_1]), (max((var_11), (((/* implicit */long long int) arr_13 [i_1])))))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 2; i_12 < 17; i_12 += 4) /* same iter space */
    {
        arr_58 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_12])) ? (arr_16 [3U] [i_12] [i_12]) : (((/* implicit */int) ((unsigned char) arr_19 [i_12] [(unsigned short)8] [i_12] [(signed char)12])))));
        arr_59 [i_12 + 4] = ((/* implicit */unsigned long long int) arr_33 [(short)10] [i_12] [i_12] [6LL] [i_12]);
        arr_60 [i_12 - 1] = ((/* implicit */int) ((short) ((unsigned char) -4289348705628936180LL)));
    }
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -4289348705628936211LL)) ? (var_2) : (((/* implicit */int) (short)-32268))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-25836))) | (1056964608U)))) : (var_4))), (((/* implicit */unsigned long long int) ((unsigned char) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1020))) : (var_12)))))));
    var_19 = ((/* implicit */unsigned short) var_4);
}
