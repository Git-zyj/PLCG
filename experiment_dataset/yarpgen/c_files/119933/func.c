/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119933
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) (~(768261118U)))) ? (658708619) : (((/* implicit */int) (unsigned char)77)));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned long long int) arr_14 [i_4 - 2] [i_4] [i_4] [i_4] [i_3 + 1] [i_3] [i_3])))));
                                arr_15 [i_0] [18LL] [i_3] [i_3] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1] [8LL] [i_4 - 1] [i_4 - 2])) ? (var_12) : (((/* implicit */int) var_17))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (var_11))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_6))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_22 [i_1] [i_2] = ((/* implicit */signed char) (((-(4611686018427387904ULL))) * (((/* implicit */unsigned long long int) ((int) (unsigned short)57344)))));
                                var_22 = ((/* implicit */signed char) ((unsigned int) var_13));
                                arr_23 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 13835058055282163722ULL)) ? (var_11) : (((/* implicit */unsigned int) -658708620))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 140737488322560ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [10] [i_2]))))))))));
                                var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_2] [i_8 - 1] [12ULL] [i_8] [i_0])) ? (-3680807792524773483LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_9 = 4; i_9 < 18; i_9 += 3) 
                {
                    var_25 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_0))))));
                    arr_33 [i_9] [i_0] [i_0] [i_0] = ((/* implicit */short) 594290428);
                }
                arr_34 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned char) arr_29 [i_0] [i_0] [i_1] [i_1]))))) ? (min((((/* implicit */long long int) ((int) -9223372036854775787LL))), ((+(-7558233152713773263LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)28)), (var_10)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_26 &= ((int) var_17);
                        var_27 = ((/* implicit */long long int) var_5);
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 3; i_14 < 11; i_14 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) (+(var_12)));
                            arr_48 [i_14] [i_13] [(unsigned char)0] [i_10] [i_10] = ((/* implicit */short) var_5);
                            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_10] [i_10] [i_12] [i_13])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) >= (((/* implicit */int) var_15))));
                        }
                        for (unsigned long long int i_15 = 1; i_15 < 8; i_15 += 1) 
                        {
                            arr_51 [(unsigned short)3] [(unsigned short)3] [i_12] [6LL] [(unsigned short)3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (658708619) : (var_12)))) ? (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16))))) : (((/* implicit */long long int) (+(var_13))))));
                            arr_52 [i_10] [(signed char)1] [i_12] [i_13] [5U] [i_15] = ((/* implicit */int) (+(((unsigned long long int) var_17))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)1070)) + (658708624))) == (((/* implicit */int) ((var_8) <= (arr_18 [i_13] [i_13] [i_13] [i_13] [i_13])))))))));
                        }
                    }
                    var_31 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_50 [i_12] [i_11] [i_10] [i_10]))));
                    arr_53 [i_11] = ((/* implicit */int) var_7);
                    arr_54 [i_11] = ((/* implicit */signed char) var_14);
                }
            } 
        } 
        arr_55 [i_10] [i_10] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (var_6))));
    }
    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_16)))) ? (((((/* implicit */_Bool) var_16)) ? (447618684U) : (((/* implicit */unsigned int) -658708598)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))))))))));
    var_33 = min(((-((+(var_6))))), ((+((-(var_6))))));
}
