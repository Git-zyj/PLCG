/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108799
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
    var_14 = ((/* implicit */unsigned short) min((var_7), (((/* implicit */int) var_5))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned short) arr_0 [(_Bool)1]);
        var_16 = ((/* implicit */unsigned int) (unsigned char)172);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)227)) > (-1639223439))) ? (((((/* implicit */int) var_4)) >> (((var_10) - (2138035451))))) : (((/* implicit */int) arr_3 [6]))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) arr_3 [i_1])))) : (((var_7) * (((/* implicit */int) var_5))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 = var_6;
                        var_19 = ((/* implicit */long long int) (unsigned char)64);
                    }
                } 
            } 
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_2 - 1])) / (var_7)));
            var_21 ^= ((/* implicit */unsigned char) arr_10 [16]);
        }
    }
    for (int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            arr_24 [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) ((var_1) ? (((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), (var_12)))), (var_2)))) : (((((((/* implicit */int) var_0)) * (((/* implicit */int) var_12)))) * (((/* implicit */int) (unsigned char)184))))));
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                var_22 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (-13) : (((/* implicit */int) var_4))))) - (max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) arr_26 [(signed char)12] [(signed char)12])) ? (387739762U) : (((/* implicit */unsigned int) var_7))))))));
                var_23 -= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) arr_1 [i_5])))));
                var_24 = ((((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (_Bool)0)) : (-13))) == (((/* implicit */int) ((signed char) var_9))));
            }
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                arr_32 [i_6] [i_5] [i_6] = ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((signed char) arr_5 [i_6])))));
                var_25 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)172))))) ? (((/* implicit */int) var_13)) : (((int) (_Bool)1)))), (min(((+(((/* implicit */int) arr_13 [i_8] [i_6] [i_5])))), (((/* implicit */int) max((var_8), (arr_2 [(unsigned short)0]))))))));
            }
            for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                arr_35 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((var_10) / (var_10)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_20 [i_5] [i_5] [i_5]), (arr_20 [i_5] [i_6] [i_5]))))) : (4082080159U)))) : (max((((/* implicit */long long int) (~(1044480)))), (((-7379076913618018670LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51092)))))))));
                arr_36 [i_5] [i_6] [i_6] = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) arr_21 [i_5])) : (((/* implicit */int) (unsigned char)164)))))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_27 [i_6])) : (((/* implicit */int) var_8)))) >= (var_10)))));
                arr_37 [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_12 [i_5] [i_9])))));
                arr_38 [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (((~(-668645719063315827LL))) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)231))))))))));
            }
            arr_39 [i_5] [i_5] [i_5] = ((/* implicit */signed char) 937108857);
        }
        for (int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
        {
            arr_42 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(31))) / (-2114145107)))) ? (((((/* implicit */int) var_12)) / (((((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5])) / (((/* implicit */int) var_8)))))) : (min(((-(((/* implicit */int) (signed char)109)))), (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5]))))));
            var_26 = ((/* implicit */int) arr_15 [i_5] [i_10]);
        }
        for (int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
        {
            arr_46 [i_5] [i_5] [i_11] = ((/* implicit */unsigned char) (~(((var_5) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_5]))))));
            var_27 = ((/* implicit */signed char) min((min((arr_33 [i_11] [i_11] [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)34525))))))), (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned short) arr_12 [i_11] [i_11])))))));
            var_28 = ((((/* implicit */_Bool) max((arr_28 [i_5]), (arr_28 [i_5])))) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_28 [i_5])), ((unsigned char)195)))));
            arr_47 [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max(((signed char)127), ((signed char)-109)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (1640957875U))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_1)), (arr_18 [i_5])))))));
        }
        for (int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (1021856201U)))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_12])))) : (((((/* implicit */int) var_8)) ^ (arr_17 [i_12])))))));
            arr_50 [i_5] = ((/* implicit */_Bool) arr_16 [i_5] [i_12]);
        }
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                for (signed char i_15 = 2; i_15 < 22; i_15 += 4) 
                {
                    {
                        arr_59 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (+(((((/* implicit */_Bool) max((arr_30 [i_14] [i_14] [i_14] [i_5]), (((/* implicit */unsigned char) var_4))))) ? (((/* implicit */int) ((unsigned short) arr_17 [i_15 - 2]))) : ((-(((/* implicit */int) var_9)))))));
                        arr_60 [i_5] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) var_3))))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) min((var_12), ((signed char)0))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_16 = 1; i_16 < 23; i_16 += 3) 
        {
            arr_64 [i_5] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_16 - 1] [i_16 - 1])) ? (((/* implicit */int) arr_9 [i_16] [i_16 + 1])) : (((/* implicit */int) arr_9 [i_5] [i_16 + 1]))))), ((-(arr_8 [i_16 + 1] [i_16 - 1]))));
            arr_65 [i_5] [i_16] [i_5] = min((((/* implicit */int) min((((/* implicit */unsigned short) min((var_8), (var_13)))), (min((((/* implicit */unsigned short) var_13)), ((unsigned short)15935)))))), (var_7));
            arr_66 [i_5] [i_16] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
        }
    }
    for (int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
    {
        var_30 ^= ((/* implicit */signed char) ((((/* implicit */int) var_8)) <= ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)232)) : (var_10)))))));
        arr_69 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - ((~(((/* implicit */int) var_8))))));
        arr_70 [i_17] [i_17] = ((/* implicit */int) arr_26 [i_17] [i_17]);
    }
    /* LoopSeq 2 */
    for (signed char i_18 = 3; i_18 < 9; i_18 += 3) 
    {
        arr_73 [i_18] = ((/* implicit */unsigned short) (signed char)127);
        var_31 = ((/* implicit */unsigned int) ((unsigned short) -50));
    }
    for (unsigned int i_19 = 1; i_19 < 17; i_19 += 1) 
    {
        arr_76 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)13))))) ? (((/* implicit */int) min((arr_53 [i_19 - 1] [i_19 - 1]), (var_0)))) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))), (((var_1) ? (((/* implicit */int) (signed char)76)) : (var_10)))))));
        var_32 = ((/* implicit */signed char) max((((/* implicit */int) min((max((var_3), (var_0))), (((/* implicit */signed char) ((((/* implicit */int) arr_62 [(signed char)6] [(signed char)6])) <= (((/* implicit */int) arr_9 [i_19] [i_19])))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_19] [2U])) / (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) arr_31 [i_19 + 1] [i_19])))) : (var_7)))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 3) 
    {
        arr_80 [i_20] [i_20] = ((/* implicit */signed char) ((((_Bool) 1640957875U)) ? ((((+(var_10))) / (min((((/* implicit */int) (signed char)-116)), (var_10))))) : (-194689883)));
        var_33 *= ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_20] [i_20]))) - (((6648917212161420714LL) / (((/* implicit */long long int) var_7))))))));
    }
    for (int i_21 = 0; i_21 < 14; i_21 += 1) 
    {
        var_34 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (var_1))))) : (((long long int) (~(((/* implicit */int) var_9)))))));
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (var_7)))) % (((/* implicit */int) (signed char)-127))))) ? (((/* implicit */int) var_5)) : ((+(var_10)))));
    }
}
