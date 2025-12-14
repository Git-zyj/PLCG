/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154894
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (arr_0 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (arr_2 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) >= (min((var_2), (var_2))))))) : (min((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (arr_0 [i_0]))), (((/* implicit */unsigned int) var_7))))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)9)) && (((/* implicit */_Bool) 17320392904876409972ULL))))), ((~(((/* implicit */int) (unsigned char)255)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_0])) - (16995)))))) ? (((((/* implicit */int) var_10)) << (((var_2) - (3269146779U))))) : ((-(((/* implicit */int) (unsigned char)9)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (min((arr_5 [i_1] [i_0]), (((/* implicit */unsigned long long int) var_11)))))))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) & (2502358310U))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1 + 2] [(short)10] [7ULL] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_5)), (arr_4 [i_2] [i_3] [(signed char)0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)6)))))))) || (((/* implicit */_Bool) var_4))));
                                var_14 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) arr_15 [i_1 - 2])))), ((!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_1)) - (90))))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2]))) % (min((((/* implicit */long long int) arr_13 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 1])), (((((/* implicit */long long int) var_7)) + (var_8)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_0] &= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) + (arr_2 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (min((((/* implicit */long long int) var_2)), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (long long int i_5 = 4; i_5 < 6; i_5 += 4) 
    {
        var_15 |= ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */long long int) arr_1 [i_5 + 3] [i_5])) : (arr_23 [i_5]))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_10 [i_5] [i_5])))))))) + (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
        var_16 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_22 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_22 [i_5 - 2]))) | (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_15 [i_5 - 4])), (arr_24 [i_5 - 3]))))));
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */long long int) 1001962831)) : (-7216757346444723248LL)))) : (3530671818821018463ULL))) >= (((/* implicit */unsigned long long int) min((1813678432U), (((/* implicit */unsigned int) (unsigned char)11)))))));
    }
    for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_32 [i_6] [13U] [i_8] [i_8] = ((/* implicit */short) min((((/* implicit */unsigned int) max((min((var_7), (((/* implicit */int) arr_16 [i_8])))), ((+(((/* implicit */int) arr_25 [i_6]))))))), (min((((arr_0 [i_6]) << (((/* implicit */int) var_6)))), (((/* implicit */unsigned int) (+(var_7))))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (arr_5 [i_6] [i_6])))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_15 [i_6])) ? (arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) var_7)))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_10 [i_6] [0LL]))));
    }
    /* LoopSeq 3 */
    for (int i_9 = 2; i_9 < 22; i_9 += 2) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), (var_6))))))) << (min((max((arr_33 [i_9 - 1]), (arr_33 [i_9 + 1]))), (((/* implicit */unsigned int) ((arr_34 [i_9 + 1] [i_9 + 1]) >= (arr_34 [i_9] [i_9 + 1]))))))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64338)) ? (3530671818821018461ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17800))))))));
    }
    for (signed char i_10 = 3; i_10 < 12; i_10 += 2) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_10] [i_10 - 3] [i_10]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_10] [i_10 - 3] [i_10 + 1])) != (((/* implicit */int) arr_8 [12LL] [1U] [i_10]))))) : (((/* implicit */int) min((var_10), (arr_15 [i_10]))))))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [0U]))) : (arr_0 [i_10 - 1])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_10]))) : (arr_27 [(unsigned short)0])))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((max((((((/* implicit */_Bool) arr_2 [i_10] [12LL])) ? (arr_27 [i_10 - 1]) : (((/* implicit */unsigned long long int) arr_1 [i_10 - 2] [i_10 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_10 - 1] [i_10 - 1])) ? (arr_0 [i_10 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10] [i_10])))))))) ^ (((((/* implicit */unsigned long long int) arr_33 [i_10 + 1])) * (((arr_27 [i_10]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))));
        var_24 -= ((/* implicit */signed char) ((((((arr_33 [i_10]) + (((/* implicit */unsigned int) var_7)))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_5))))))) - (((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (arr_29 [i_10 - 1]))))));
        arr_37 [i_10] = ((/* implicit */long long int) ((((((((/* implicit */int) var_0)) + (((/* implicit */int) arr_36 [i_10])))) - (((/* implicit */int) min((var_6), (arr_15 [6LL])))))) * (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_10 - 2] [i_10] [i_10])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_10] [i_10])))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_7 [i_10 - 2] [i_10 - 2] [i_10])))))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        var_25 &= ((/* implicit */int) arr_38 [i_11] [i_11]);
        arr_41 [i_11] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_38 [i_11] [i_11])) - (var_8)))), (((16133198498542573862ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1177)))))));
    }
    var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_11))))), (min((((/* implicit */int) var_6)), (var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) * (3289045085U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (var_7))))) : (((((/* implicit */_Bool) (unsigned char)246)) ? (18014398509219840ULL) : (((/* implicit */unsigned long long int) -1LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_10)))))))))));
    var_27 = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) < (var_7))))))));
}
