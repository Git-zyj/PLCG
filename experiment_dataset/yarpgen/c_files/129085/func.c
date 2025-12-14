/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129085
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((((unsigned char) arr_1 [i_0])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 766445449)))))))) : ((-(min((-766445449), (((/* implicit */int) (unsigned short)53186))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12347)) << (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-9835))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) var_13);
            arr_6 [i_0] [i_1 - 4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) ((unsigned short) -5243555367713643224LL))) : (((/* implicit */int) arr_4 [i_1] [i_0])))))));
        }
    }
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 15; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_21 [i_2] [i_3 - 1] [i_4] [i_5] [i_6] |= ((/* implicit */unsigned short) (+(((arr_4 [i_3 + 2] [i_3 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 2] [i_3 - 1]))) : (934639380153756007ULL)))));
                            arr_22 [i_2] [i_2] [i_4 - 1] [i_5] [i_5] [i_6] [i_3] = ((/* implicit */unsigned int) ((short) ((_Bool) ((((/* implicit */int) (unsigned short)53192)) << (((766445449) - (766445443)))))));
                            arr_23 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_4 - 4] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46487))) : (var_17)))) ? (((/* implicit */int) arr_16 [i_2] [i_3] [i_5] [i_6])) : (((/* implicit */int) var_13))))) <= (min((((/* implicit */long long int) ((unsigned int) (unsigned short)58666))), (min((((/* implicit */long long int) 665339282U)), (9072255588556018896LL)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_7 = 2; i_7 < 15; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 2; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) min((((/* implicit */int) max((min((arr_15 [i_8] [i_8]), (((/* implicit */short) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */short) min((var_0), (arr_4 [i_2] [i_3]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 137854272U)) ? (((/* implicit */int) (_Bool)1)) : (var_12))) : ((~(((/* implicit */int) (unsigned short)64298))))))));
                            var_23 = max((((/* implicit */unsigned short) (short)25717)), ((unsigned short)46477));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((arr_30 [i_2] [i_3] [i_7 - 2] [i_9] [(unsigned short)6]) + (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)62829))))))))));
                            arr_31 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_29 [i_2] [i_7 + 1] [i_7] [i_8] [i_9] [i_9 - 1]))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (unsigned short)22845))));
            arr_32 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)255))));
        }
        arr_33 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (unsigned short)896)) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)46487), (((/* implicit */unsigned short) (_Bool)1))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) (signed char)85);
            var_27 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2]))))));
        }
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) var_14))), (((((/* implicit */_Bool) arr_37 [i_2])) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [(signed char)12] [i_2])) : (((/* implicit */int) arr_37 [i_2])))))))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_7 [i_2]), (arr_7 [i_2])))) ? (((unsigned long long int) arr_15 [i_2] [i_11])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_2] [i_11]))))));
        }
        arr_38 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)100))));
        arr_39 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-1)), ((~(arr_30 [i_2] [i_2] [i_2] [(signed char)10] [i_2])))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_30 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_41 [(_Bool)1] [(unsigned char)16]), (arr_41 [(signed char)6] [(signed char)6])))) != (min((((/* implicit */unsigned long long int) arr_41 [i_12] [18ULL])), (70093866270720ULL)))));
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (unsigned short)19048))));
        arr_43 [i_12] [i_12] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_17)) ? (arr_41 [(unsigned short)9] [i_12]) : (((/* implicit */long long int) -354022438)))) / (((/* implicit */long long int) (-(arr_40 [i_12] [i_12]))))));
        var_32 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((((-(((/* implicit */int) (unsigned short)36449)))) + (2147483647))) >> (((((/* implicit */_Bool) arr_41 [i_12] [20])) ? (0) : (((/* implicit */int) arr_42 [i_12]))))))), ((~(1550683069U)))));
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
    {
        arr_47 [i_13] = ((/* implicit */unsigned long long int) arr_45 [i_13]);
        var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_13] [i_13])) ? (((/* implicit */unsigned long long int) arr_40 [i_13] [i_13])) : (arr_44 [i_13])));
    }
    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        arr_51 [i_14] [14U] &= ((/* implicit */unsigned int) arr_42 [i_14]);
        var_34 += ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)156), (((/* implicit */unsigned char) var_1)))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) - (9876503357881842684ULL))))), (18446744073709551615ULL)));
        var_35 |= ((/* implicit */signed char) 1534182399);
    }
}
