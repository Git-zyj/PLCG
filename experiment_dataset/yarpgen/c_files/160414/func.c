/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160414
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0 + 1])), (min((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])), (-648545861)))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))))) ? (((arr_0 [i_1] [i_1]) ? (var_16) : (var_1))) : (((/* implicit */unsigned long long int) (+(var_6))))))));
                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 9223372036854775783LL)) <= (arr_5 [i_1] [(short)2] [(_Bool)1]))))) / (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1])))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) arr_0 [i_0] [i_0])))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_5 [i_2] [i_1] [i_0 - 1]))))))));
                    arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)39230)) ? (((/* implicit */unsigned int) 2147483647)) : (890760180U)));
                }
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 648545876)) ? (648545861) : (((/* implicit */int) (unsigned char)123))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (short i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_3] [i_0] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)132)) << (((-648545861) + (648545884))))) >= (((((/* implicit */_Bool) arr_11 [i_1])) ? (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) << (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) ((1531675098164469685LL) != (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
                                var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (4294967295U)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_3] [i_4])))))));
                                var_21 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)123))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_3] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
                                var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_5])) == (((/* implicit */int) arr_2 [i_1]))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (10519947156839390577ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1] [i_5 - 2] [i_5 - 1]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (unsigned char)136))))), (max((var_10), (var_3)))))));
                                arr_18 [i_0] [i_0] [(short)10] [(unsigned char)3] [i_0 + 1] [i_0] = ((((((/* implicit */_Bool) ((int) arr_11 [i_4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_0] [i_5] [i_4] [i_5])), (var_15))))) : ((+(var_1))))) <= (max((arr_5 [i_0] [i_0] [i_0 - 1]), (arr_5 [(_Bool)1] [i_0 + 1] [i_0 - 1]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_3] [i_0 - 1])) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_3] [i_0 + 1])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_1] [i_1] [i_0] [i_0 - 1])) == (((/* implicit */int) var_15)))))));
                }
            }
        } 
    } 
    var_24 *= ((/* implicit */signed char) ((((var_12) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))) : (var_3))) : (max((var_1), (((/* implicit */unsigned long long int) var_0)))))) > ((((~(var_10))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */short) ((var_16) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) & (arr_13 [i_6] [i_6] [i_6] [11])));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_7 [4U] [i_6])))))));
    }
    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) ((arr_12 [i_7] [i_7] [i_7] [i_7] [i_7]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7])) ? (arr_6 [i_7] [(_Bool)0] [(unsigned char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7]))) : ((~(var_16))))) : (((/* implicit */unsigned long long int) (~(((arr_13 [i_7] [(unsigned char)15] [i_7] [i_7]) - (((/* implicit */int) arr_11 [i_7])))))))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)140)))))))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 19; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_29 [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)1578)), (var_10)));
                    arr_30 [i_9] [i_9] = ((/* implicit */unsigned int) (~(var_8)));
                    arr_31 [i_9] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (((-(-544638815))) >= (((/* implicit */int) (unsigned char)136))))), (19ULL)));
                    arr_32 [i_9] [i_8 - 1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_8] [i_8 - 1] [i_8] [i_9] [i_8 - 1])) & (((/* implicit */int) var_0))))), (min((1683172951U), (((/* implicit */unsigned int) (unsigned char)149))))))) && (((/* implicit */_Bool) (+(13807392252474069325ULL))))));
                }
            } 
        } 
        arr_33 [i_7] = 0LL;
    }
    var_29 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
    var_30 = ((/* implicit */unsigned short) var_3);
}
