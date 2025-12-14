/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188745
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
    var_19 = var_14;
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0 + 2] [i_0] = ((/* implicit */unsigned short) max((18446744073709551615ULL), (6515210417225494314ULL)));
        arr_4 [i_0] = arr_2 [i_0];
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_15))));
        arr_7 [i_1 + 1] = (~(((4494761344000048737ULL) & (8464301917494225872ULL))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_21 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6515210417225494343ULL)) ? (((/* implicit */unsigned long long int) var_18)) : (11931533656484057302ULL)))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (int i_4 = 2; i_4 < 19; i_4 += 3) 
            {
                {
                    arr_18 [(_Bool)1] [i_3] [i_4] &= ((/* implicit */unsigned char) ((11931533656484057267ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54369)))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_17))));
                        arr_21 [i_3] [2ULL] &= ((/* implicit */int) (~(arr_17 [i_4 - 1] [i_4 - 2] [i_3])));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6])) ? (arr_0 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4 - 2] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11931533656484057273ULL)) || (((/* implicit */_Bool) arr_22 [(signed char)11] [i_4])))))) : (((((/* implicit */_Bool) arr_20 [i_2] [i_4] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_8 [i_2])))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            arr_26 [i_2] [15LL] [i_3] [i_4] [i_4] [i_7 + 1] = ((/* implicit */signed char) var_12);
                            var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_2 - 1])) ? (((/* implicit */int) arr_13 [i_2 - 3])) : (((/* implicit */int) arr_13 [i_2 - 1]))));
                            var_25 = ((/* implicit */signed char) ((((arr_6 [i_4] [(unsigned short)13]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_17 [i_2 - 1] [i_2 - 1] [i_4]))) >> (((/* implicit */int) ((arr_1 [(unsigned char)2] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [i_4 - 2] [i_2] [i_2]))))))));
                            var_26 = ((/* implicit */long long int) arr_8 [i_2]);
                            arr_27 [i_7] [i_3] [i_4 + 1] [4] [i_7 - 1] [i_3] [i_7] &= ((/* implicit */_Bool) (((-(((/* implicit */int) arr_25 [i_3] [i_4 + 1] [i_3] [13U])))) >> (((((((/* implicit */_Bool) arr_24 [i_7] [i_6] [i_3] [i_3] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) arr_11 [i_7])) : (12018007583547536878ULL))) - (9029220090751341986ULL)))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            var_27 = 11931533656484057301ULL;
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((arr_30 [i_3] [i_8 + 2]) / (((/* implicit */unsigned long long int) arr_23 [i_2 + 1] [i_3] [i_3] [i_4])))))));
                        }
                        arr_31 [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12018007583547536878ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 11931533656484057273ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) : (arr_14 [i_6]))))));
                        arr_32 [i_3] [i_4] [i_3] [(_Bool)1] [i_3] &= ((/* implicit */unsigned long long int) ((arr_1 [i_2 - 1] [i_2 - 1]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    arr_33 [i_4] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 12018007583547536878ULL)) ? (arr_14 [i_4]) : (((/* implicit */unsigned long long int) arr_2 [i_4])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (unsigned int i_11 = 1; i_11 < 18; i_11 += 4) 
                {
                    {
                        arr_41 [i_2] [i_2] [i_11] [i_2 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (2611495544772640324ULL) : (((/* implicit */unsigned long long int) arr_29 [i_2 + 1] [i_9] [i_10] [i_9] [i_10] [10ULL] [i_11]))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            arr_44 [i_2] [i_12] &= ((/* implicit */unsigned char) 18446744073709551615ULL);
                            var_29 = ((/* implicit */unsigned char) ((unsigned long long int) arr_25 [i_9] [i_9 - 3] [i_12] [i_12]));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 4) 
        {
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_2 - 2] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) : (arr_36 [i_2 - 2] [i_2 - 3])));
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? (arr_2 [i_2 + 1]) : (arr_2 [i_2 - 3])));
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) 5020882275886579532ULL))))))));
        }
    }
}
