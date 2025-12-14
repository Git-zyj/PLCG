/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177183
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_11 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) : (2674512838U)))) ? (2674512838U) : (2388405930U)));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_8))));
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((unsigned long long int) ((var_15) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        arr_17 [i_3] [i_3] = ((/* implicit */_Bool) arr_16 [i_3] [i_3]);
        arr_18 [i_3] = ((/* implicit */unsigned int) var_8);
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_4 = 3; i_4 < 16; i_4 += 3) 
        {
            arr_21 [i_4] = ((/* implicit */unsigned short) ((unsigned int) 2388405930U));
            var_19 = ((/* implicit */long long int) ((var_10) ? (((/* implicit */int) arr_6 [i_4 - 3] [i_4 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) 2674512830U)))))));
            arr_22 [i_4] [5U] = ((/* implicit */unsigned short) arr_5 [i_4 - 1] [i_3]);
        }
        /* vectorizable */
        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) 
        {
            var_20 ^= (!(((/* implicit */_Bool) var_15)));
            arr_25 [i_5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1906561343U)) && (((/* implicit */_Bool) 1620454465U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_3]))) : (2674512841U)));
            var_21 += ((/* implicit */signed char) ((var_5) / (((/* implicit */long long int) arr_0 [i_5 - 1]))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                var_22 &= (~(2996466806U));
                arr_33 [i_3] [i_6] [i_6] [i_3] = ((/* implicit */signed char) ((var_10) && (((/* implicit */_Bool) arr_32 [i_7] [i_6]))));
                arr_34 [i_3] [i_6] [i_7] = ((/* implicit */_Bool) (-(var_15)));
                var_23 = ((/* implicit */unsigned short) var_7);
            }
            arr_35 [i_3] [i_6] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_26 [i_6] [i_3] [i_3])) & (((/* implicit */int) arr_26 [i_3] [i_3] [i_3]))))));
            arr_36 [i_6] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
        }
        for (unsigned int i_8 = 3; i_8 < 17; i_8 += 2) 
        {
            var_24 = max((1737597272204957134LL), (((/* implicit */long long int) arr_6 [i_3] [(unsigned short)12])));
            /* LoopNest 2 */
            for (signed char i_9 = 3; i_9 < 16; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_38 [i_3] [i_3])) && (((/* implicit */_Bool) 1620454466U)))))), (min((((/* implicit */long long int) var_13)), (-7616306389506353612LL)))));
                        arr_44 [i_3] [6ULL] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (arr_27 [i_8 - 3] [i_9 - 3])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((arr_26 [i_3] [i_8 - 2] [i_9 + 2]), (arr_26 [i_8] [i_8 - 1] [i_9 - 1]))))));
                        arr_45 [i_9] [i_9] [i_9] [15LL] [i_9 - 3] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_9)) || (((((/* implicit */_Bool) arr_41 [i_3] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) var_7))))))));
                        arr_46 [i_10] [i_8] [i_8] [i_3] = ((/* implicit */unsigned int) arr_26 [i_9 - 2] [i_8 + 1] [i_9 - 3]);
                    }
                } 
            } 
            arr_47 [i_3] |= ((/* implicit */long long int) (~(arr_1 [i_8])));
        }
    }
    var_26 = ((/* implicit */unsigned long long int) var_10);
}
