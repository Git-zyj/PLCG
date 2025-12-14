/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131840
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
    var_18 = ((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */unsigned int) ((((var_13) && (((/* implicit */_Bool) var_12)))) ? ((~(((/* implicit */int) var_17)))) : (var_12)))) : ((~((~(3331504882U)))))));
    var_19 = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((_Bool) var_2))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_4))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_12 [i_3] = ((/* implicit */unsigned short) var_10);
                        arr_13 [i_0] [i_0] [i_3] [1LL] [1LL] [i_3] = ((/* implicit */unsigned char) arr_0 [1ULL] [1ULL]);
                        var_20 = ((/* implicit */unsigned char) var_11);
                        arr_14 [i_3] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_9 [1LL] [i_0] [(signed char)6] [1LL] [1LL]))) ? (((((/* implicit */int) var_13)) | (var_12))) : (((/* implicit */int) ((_Bool) var_2)))));
                    }
                    var_21 = ((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)1]);
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            arr_19 [(signed char)4] [(signed char)4] [i_5] [i_4] [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))) % (((/* implicit */int) var_10))))) ? ((~(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_2 [i_1] [i_5])) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_11))));
                            arr_20 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) (+(arr_17 [i_0] [i_0])));
                        }
                        for (short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            arr_23 [i_0 + 1] [i_0 + 1] [i_6] [i_0 + 1] [i_2] [i_4] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_9))))))) > (((/* implicit */int) (((~(((/* implicit */int) var_14)))) != ((~(((/* implicit */int) arr_18 [i_0] [i_4] [i_0] [i_0] [i_0])))))))));
                            arr_24 [i_0] [i_0] [i_6] [i_0] [i_6] = ((/* implicit */int) var_10);
                        }
                        for (short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            var_22 &= ((/* implicit */int) var_1);
                            arr_28 [i_0] [i_0] [i_0] [i_0] [4U] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_2)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_4]))))) | (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (((((unsigned long long int) var_2)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4))))))));
                            var_23 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
                        }
                        for (short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) var_2);
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_11))));
                            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_25 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0])))));
                            var_27 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) -2029937193)) ? (3800188737040070536ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65124)))))))));
                            arr_32 [i_0] [i_1] [i_8] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)101))))) ? (((((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_4] [i_8])) && (((/* implicit */_Bool) arr_26 [i_2] [i_0 + 1] [i_0 + 1] [i_4] [i_1])))) ? (((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_13))))) : (var_3))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))));
                        }
                        var_28 |= ((/* implicit */short) arr_17 [i_0 - 1] [i_0 - 1]);
                    }
                    for (unsigned char i_9 = 3; i_9 < 10; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */int) arr_30 [i_2]);
                        arr_35 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)411))));
                        /* LoopSeq 2 */
                        for (int i_10 = 1; i_10 < 8; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) arr_5 [i_2] [3ULL] [i_2]);
                            arr_38 [i_10] [i_2] [i_2] [i_1] [8U] [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || ((!(((/* implicit */_Bool) (-(((/* implicit */int) var_17)))))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            arr_42 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((unsigned short) (~(((((/* implicit */_Bool) (unsigned short)65131)) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))))))));
                            arr_43 [i_0] [i_0] [i_0] [(short)7] [(signed char)9] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((-(var_12))) : (((/* implicit */int) var_13)))))));
                            var_31 = (-(var_12));
                        }
                    }
                    for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_46 [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) (~((~(((/* implicit */int) var_14)))))));
                        arr_47 [i_0] [i_0] [i_2] [i_12] = ((/* implicit */_Bool) var_14);
                        arr_48 [i_1] [(unsigned short)9] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((arr_7 [1LL] [i_12]) >> (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) var_17)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65124))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                    }
                    arr_49 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_8))));
                }
            } 
        } 
    } 
}
