/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162460
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
    var_20 |= ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_9)) | (((/* implicit */int) var_19)))), ((~(var_8)))));
    var_21 = ((/* implicit */signed char) max((var_21), (var_14)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (unsigned char)51)) + (var_8))));
            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (signed char)17))));
            var_24 &= ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)50))) : (var_13))), (-5760444521516470661LL)))));
        }
        for (unsigned char i_2 = 4; i_2 < 10; i_2 += 4) 
        {
            var_25 += ((/* implicit */int) (((-((((_Bool)1) ? (((/* implicit */int) (unsigned char)238)) : (348327975))))) > ((+(((/* implicit */int) ((signed char) var_2)))))));
            var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((5760444521516470661LL) ^ (5760444521516470661LL)))) ? (((/* implicit */int) ((arr_6 [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))) : (((/* implicit */int) var_5))))));
            arr_8 [i_2 + 1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 5760444521516470661LL))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((910369394776307506ULL) & (((/* implicit */unsigned long long int) -6162083246498148632LL)))))) ? (((((/* implicit */int) (short)-6606)) % (var_11))) : (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
        }
        var_28 -= ((/* implicit */unsigned int) ((var_11) >= (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0]))))));
        arr_9 [i_0] = ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_18)), (9223372036854775805LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_17)))))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)54269))) : (((/* implicit */int) min(((short)8107), (((/* implicit */short) ((((/* implicit */_Bool) 4294967287U)) && (((/* implicit */_Bool) -8972100012955684069LL)))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_11 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))));
        var_30 = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_3])) && (((/* implicit */_Bool) (unsigned char)203))))), (var_4))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (int i_6 = 3; i_6 < 10; i_6 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)8121))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned int) var_2)) & (arr_19 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_16 [i_4] [i_4] [i_4]))))));
                    }
                } 
            } 
            arr_22 [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112))))) | (((arr_3 [(unsigned char)1]) ^ (((/* implicit */int) (unsigned char)64))))));
            var_33 = ((/* implicit */long long int) ((arr_17 [i_3] [i_3] [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        /* vectorizable */
        for (signed char i_7 = 1; i_7 < 8; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 4; i_8 < 10; i_8 += 4) 
            {
                arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_24 [i_3] [i_3] [i_3]) & (((/* implicit */int) arr_7 [i_3])))))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 2; i_9 < 9; i_9 += 1) 
                {
                    var_34 = ((/* implicit */short) var_6);
                    var_35 = ((/* implicit */short) ((arr_2 [i_9 - 2]) >> (((((/* implicit */int) (short)-8107)) + (8126)))));
                    var_36 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) (short)-31442)) + (2147483647))) >> (((((/* implicit */int) (short)-8091)) + (8093)))))));
                    arr_31 [i_3] [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned short) ((arr_17 [i_7 + 4] [i_7 + 3] [i_9 - 2]) == (arr_17 [i_7 - 1] [i_8] [i_9 - 1])));
                }
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_37 = ((/* implicit */signed char) var_1);
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)207)) % (((/* implicit */int) (short)-8081))));
                }
            }
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                var_39 = ((/* implicit */unsigned long long int) var_2);
                var_40 -= ((/* implicit */unsigned int) ((1616423042) & (((/* implicit */int) (signed char)-50))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    for (unsigned int i_13 = 2; i_13 < 8; i_13 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_41 [i_3] [i_3] [i_3])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))))));
                            arr_43 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (unsigned char)194);
                            arr_44 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_7 + 4] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        }
                    } 
                } 
            }
            arr_45 [i_7 + 2] = ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned long long int) arr_4 [i_7] [1U])) : (8616444476035289721ULL)));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    {
                        var_42 &= ((/* implicit */unsigned short) ((int) arr_38 [i_7 - 1] [i_7 + 4]));
                        var_43 = ((/* implicit */unsigned int) min((var_43), (2790911655U)));
                    }
                } 
            } 
            arr_50 [i_3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1616423043)) % (2768271097U)));
        }
        for (signed char i_16 = 1; i_16 < 8; i_16 += 3) /* same iter space */
        {
            var_44 |= ((/* implicit */long long int) ((unsigned int) (signed char)(-127 - 1)));
            var_45 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_3] [i_16 + 4] [i_3]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (+(arr_21 [i_3] [i_3] [i_3] [i_16]))))) : (((18446744073709551609ULL) & (arr_46 [i_16 + 2] [i_16 + 3] [i_16])))));
            var_46 = ((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned short)65517)), (var_8))) / (((/* implicit */int) ((unsigned char) (~(var_16)))))));
        }
        for (signed char i_17 = 1; i_17 < 8; i_17 += 3) /* same iter space */
        {
            var_47 = ((/* implicit */int) ((short) -1616423043));
            arr_59 [i_17] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7696945738341647401LL)) ? (((/* implicit */int) arr_0 [i_3])) : (arr_21 [i_3] [i_17] [i_17 + 3] [i_3])))) || (((/* implicit */_Bool) ((unsigned int) arr_5 [i_17 + 1]))))))));
            var_48 &= ((/* implicit */int) (unsigned short)15037);
        }
    }
    var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)55)) ? (65011712) : (1616423040)));
}
