/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125421
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
    var_11 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(2525391649U)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 - 3] = ((/* implicit */int) arr_1 [i_0]);
        arr_3 [i_0 - 2] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (min((((/* implicit */unsigned int) arr_0 [i_0])), (1769575647U))))));
        arr_4 [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (var_8)))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (2525391649U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 2])) << (((-408738145) + (408738152))))))));
        arr_5 [i_0 - 3] = ((/* implicit */unsigned long long int) 1769575646U);
        arr_6 [i_0 + 1] = ((/* implicit */unsigned int) ((signed char) max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 2]))));
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) var_0);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        arr_19 [i_4] = (~(arr_11 [i_3]));
                        arr_20 [i_4] [i_2 + 1] = var_2;
                        arr_21 [i_3] [i_2] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_0 [i_2 - 1]))))));
                        arr_22 [i_3] [i_2] [i_3 - 1] = ((/* implicit */long long int) var_6);
                        arr_23 [i_4] [i_2] [i_2 + 2] = ((/* implicit */int) var_5);
                    }
                } 
            } 
            arr_24 [i_2 + 1] [i_2] = ((/* implicit */long long int) (-((+(2525391651U)))));
        }
        arr_25 [i_1] [i_1 - 3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) + (arr_18 [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 + 1])));
        arr_26 [i_1] [i_1] = ((/* implicit */int) ((arr_18 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 2]) >= ((-(arr_18 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1])))));
    }
    for (unsigned char i_5 = 3; i_5 < 18; i_5 += 3) /* same iter space */
    {
        arr_29 [i_5] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) -1LL)) ? (var_4) : (arr_7 [i_5 + 1] [i_5 + 1]))));
        arr_30 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_5 - 1])), (var_1)))) < ((+(arr_18 [i_5 + 1] [i_5] [i_5 - 1] [(signed char)11])))));
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            arr_33 [6] = ((/* implicit */long long int) min((arr_0 [i_6]), (((/* implicit */signed char) ((var_2) > (((/* implicit */unsigned long long int) 2525391649U)))))));
            arr_34 [i_6] = ((/* implicit */unsigned int) arr_0 [i_6]);
            arr_35 [i_5] [i_6] [i_6] = arr_18 [i_5] [i_6] [i_5] [i_5];
            arr_36 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20617)) ? (1788166226) : (((/* implicit */int) (unsigned char)181))))) * (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 - 3])))))));
        }
        for (long long int i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
        {
            arr_39 [(short)1] [i_7] [i_5 + 1] = ((/* implicit */int) var_9);
            arr_40 [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_0 [i_7 - 2])))) > (((/* implicit */int) ((unsigned char) max((var_8), (((/* implicit */long long int) arr_1 [i_5]))))))));
            arr_41 [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned long long int) ((min((max((arr_9 [i_7 - 1] [i_5]), (var_6))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_8 [i_7] [(signed char)15]))))))))));
        }
        for (long long int i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_9 = 4; i_9 < 16; i_9 += 3) 
            {
                arr_46 [i_8] [i_8 - 1] [i_9] [i_8] = var_4;
                arr_47 [i_5] [i_8] [i_9 - 4] [i_9] = ((/* implicit */unsigned char) 2179160487U);
                arr_48 [18ULL] = ((/* implicit */long long int) 1023);
            }
            for (unsigned char i_10 = 1; i_10 < 16; i_10 += 4) /* same iter space */
            {
                arr_51 [4U] [i_8 + 1] = ((/* implicit */int) (~((~(arr_44 [i_5 - 3] [7U] [i_10 + 2])))));
                arr_52 [i_10] [12U] [(unsigned char)18] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_45 [2LL] [i_8] [4ULL])))), (((/* implicit */int) ((arr_15 [i_5] [i_5 - 3] [(unsigned char)10] [i_5 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))))))));
            }
            for (unsigned char i_11 = 1; i_11 < 16; i_11 += 4) /* same iter space */
            {
                arr_56 [(signed char)12] [i_8] [i_8] |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_11 [i_5 - 2]))))));
                arr_57 [(signed char)2] [6U] [i_11 - 1] = ((/* implicit */unsigned long long int) var_7);
                arr_58 [i_5] [i_8] [i_11 + 2] = (-(min((((/* implicit */unsigned long long int) arr_16 [i_5 - 1] [i_5] [i_8 - 1] [i_8] [i_11] [i_11 - 1])), (((unsigned long long int) arr_16 [i_11 + 1] [i_8 - 2] [i_8] [i_8] [i_5] [i_5])))));
            }
            arr_59 [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_7)) & (((((/* implicit */_Bool) arr_0 [i_5 - 3])) ? (var_6) : (((/* implicit */unsigned long long int) var_7))))));
        }
    }
}
