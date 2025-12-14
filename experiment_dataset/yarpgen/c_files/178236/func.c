/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178236
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        var_12 = ((long long int) (-(((/* implicit */int) arr_7 [i_1 + 4]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_14 [(signed char)10] [(signed char)10] [(signed char)0] [i_4] [i_3] [i_4] |= (~(588777928875906451LL));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_1] [(unsigned short)6] [i_3] [i_2] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_2] [i_2] [i_4])) ? (((/* implicit */long long int) arr_15 [(short)2] [i_2] [i_2] [i_2])) : (-588777928875906443LL))))));
                            arr_19 [i_2] [i_5] [i_4] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_16 [i_1 + 4] [i_2] [i_3 + 3] [i_4] [i_5]);
                            arr_20 [i_1] [i_1] [i_3 + 2] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)18839)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_2] [i_5])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_4] [i_2])) || (((/* implicit */_Bool) -588777928875906446LL)))))));
                            var_13 = ((/* implicit */unsigned char) (-(arr_10 [i_1 + 2] [i_1 + 4])));
                            var_14 |= ((/* implicit */signed char) ((arr_11 [i_1 - 1] [i_1 - 1] [i_3] [i_3 + 3]) ? (((/* implicit */int) (unsigned short)18839)) : (((/* implicit */int) arr_12 [i_1 + 3] [4LL] [12LL] [i_3 + 1]))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        arr_26 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) -588777928875906451LL);
                        arr_27 [i_1] [i_1] [(_Bool)1] [i_2] [i_7] = ((/* implicit */_Bool) 588777928875906426LL);
                        arr_28 [(short)2] [i_2] [i_2] [i_1] = ((/* implicit */int) (unsigned short)18837);
                    }
                } 
            } 
            arr_29 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)18837))));
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2802567744U)) ? (3380244401U) : (174035977U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))));
            var_16 = ((/* implicit */unsigned long long int) 588777928875906439LL);
            arr_32 [i_8] [i_1] [i_8] = arr_21 [i_1 + 2] [i_1 + 4];
        }
        var_17 = max((((arr_31 [(unsigned char)10]) ? (arr_10 [i_1 + 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)5094)))))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)199))))));
        arr_33 [i_1] |= ((/* implicit */unsigned long long int) var_9);
        arr_34 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5088)) ? (((/* implicit */int) arr_22 [i_1] [i_1 - 1] [(unsigned char)2])) : (((/* implicit */int) arr_22 [i_1 + 4] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 4] [i_1 + 4] [i_1] [(unsigned char)10] [(unsigned char)10] [i_1]))) : (((((/* implicit */_Bool) -1694576503922065231LL)) ? (arr_30 [12ULL]) : ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */long long int) arr_15 [0LL] [i_1] [(unsigned short)2] [i_1 - 2])) : (min((((/* implicit */long long int) arr_15 [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1])), (((((/* implicit */_Bool) arr_23 [i_1] [0LL] [0LL] [i_1])) ? (588777928875906449LL) : (((/* implicit */long long int) arr_15 [(short)12] [(signed char)0] [i_1] [i_1 + 4]))))))));
    }
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
}
