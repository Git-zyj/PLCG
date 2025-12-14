/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123612
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_19 ^= ((/* implicit */unsigned long long int) max(((unsigned short)51619), (((/* implicit */unsigned short) ((short) (+(((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))))));
            var_20 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) (!(arr_5 [(unsigned char)5] [i_1] [8])))) : (((/* implicit */int) ((_Bool) arr_4 [(_Bool)1] [i_0]))))))));
        }
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)51609)) ? (var_6) : (((/* implicit */int) arr_4 [i_2] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_2]))))))))));
            var_23 = ((/* implicit */signed char) (~((-(((((/* implicit */int) (unsigned short)13941)) & (((/* implicit */int) arr_6 [12LL]))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                arr_11 [16ULL] [16ULL] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_10 [(unsigned char)18])))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3])))))));
                var_25 = ((/* implicit */unsigned long long int) ((arr_5 [i_0] [(signed char)9] [(signed char)15]) ? (((/* implicit */int) (unsigned short)51593)) : (((/* implicit */int) var_17))));
            }
            for (int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                var_26 = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_4]))))));
                var_27 += ((_Bool) (~(arr_12 [i_0] [i_0] [(signed char)2])));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_28 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((short) arr_4 [i_6] [i_2]))) ? (arr_8 [i_0] [i_4] [i_5] [i_6]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_5])))))))));
                            arr_19 [i_0] [i_2] [i_4] [i_4] [(signed char)8] [i_5] [i_6] = (-(((/* implicit */int) ((unsigned char) (signed char)-87))));
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)84))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_13), (((/* implicit */unsigned short) arr_1 [(unsigned char)6])))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)209)))))) : (((((var_17) ? (arr_16 [i_4] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-50))))) + ((-(arr_12 [(unsigned short)2] [i_2] [14U]))))))))));
            }
            for (unsigned short i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        {
                            arr_27 [i_0] [i_0] [(unsigned short)19] [i_0] [(signed char)7] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((arr_3 [i_0]), (((/* implicit */int) (unsigned short)51628))))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)130))))))) : (arr_17 [i_0] [i_0] [i_7] [i_8] [i_7])));
                            var_31 = ((/* implicit */unsigned int) ((int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_26 [i_0] [i_8])) : (arr_3 [i_0]))))));
                            var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)2719))));
                        }
                    } 
                } 
                arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))));
            }
            var_33 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_15))))))));
        }
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            arr_32 [i_0] [17] [17] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(var_4)))))) | ((((!(((/* implicit */_Bool) arr_16 [(signed char)6] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) : (var_16)))));
            var_34 = ((/* implicit */unsigned long long int) (+(((((arr_3 [i_10]) + (2147483647))) >> ((((~(((/* implicit */int) (unsigned short)13943)))) + (13963)))))));
            var_35 = ((/* implicit */long long int) (-(min((((var_14) / (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_10 [i_0]))))));
        }
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) arr_20 [i_0])) : (var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_22 [(_Bool)0] [i_0] [i_0])))))))) : (max((((/* implicit */unsigned long long int) arr_10 [i_0])), ((+(arr_22 [(unsigned char)5] [i_0] [(short)18]))))))))));
    }
    for (long long int i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((unsigned long long int) ((arr_1 [i_11]) || (arr_26 [i_11] [i_11])))))));
        var_38 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) (unsigned short)51592)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_13 [i_11] [i_11] [i_11])))) : (max((((/* implicit */unsigned long long int) ((short) (unsigned char)64))), (((unsigned long long int) (unsigned short)13955))))));
        arr_36 [i_11] [i_11] = (~(max(((-(((/* implicit */int) (short)-13517)))), ((+(((/* implicit */int) (unsigned short)20371)))))));
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned short i_13 = 1; i_13 < 18; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    {
                        var_39 |= arr_39 [i_11] [i_12];
                        var_40 = ((/* implicit */unsigned int) (!(max(((_Bool)1), ((!(((/* implicit */_Bool) 549755748352ULL))))))));
                        arr_46 [(short)6] [i_12] [i_12] = ((/* implicit */_Bool) ((long long int) max((((unsigned short) var_17)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)13943))))))));
                        var_41 += (!(((/* implicit */_Bool) ((unsigned char) ((_Bool) (unsigned short)13934)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
    {
        arr_50 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_38 [(_Bool)1] [(_Bool)1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)89)) < (((/* implicit */int) (unsigned short)51588))))))) : ((~(((((/* implicit */_Bool) (unsigned char)98)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
        arr_51 [i_15] [i_15] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)46)))))), (max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_48 [i_15])), ((unsigned short)13934))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 3) 
        {
            {
                var_42 = ((/* implicit */_Bool) ((unsigned long long int) arr_56 [i_16]));
                arr_58 [i_17] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */short) var_17)), (var_15))), (((/* implicit */short) (!(((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */int) min((arr_24 [i_17] [15ULL] [i_16] [i_16]), (arr_24 [13] [i_16] [i_17] [4])))) : (max((arr_33 [i_16]), (((/* implicit */int) ((signed char) (signed char)-80)))))));
            }
        } 
    } 
}
