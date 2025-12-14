/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153936
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)28915)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8)))))) * ((+(((/* implicit */int) (_Bool)1))))));
        var_11 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_12 [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)233))))) ^ (((-1177999110384795380LL) & (((/* implicit */long long int) 605117772U))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1 - 4] [i_2] [i_1 - 2])) > (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) <= (((/* implicit */int) var_8))));
                            var_13 ^= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_5 = 3; i_5 < 7; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_0]))));
                            var_15 = ((/* implicit */unsigned char) (short)-31995);
                            var_16 -= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_16 [i_5 - 2] [(_Bool)1] [i_1 - 2] [i_3] [(_Bool)1])) ? (((/* implicit */int) arr_16 [i_5 - 2] [i_5] [i_1 - 2] [(unsigned char)6] [i_5 + 2])) : (((/* implicit */int) arr_16 [i_5 - 2] [i_0] [i_1 - 2] [i_0] [i_5])))));
                        }
                        var_17 = ((/* implicit */long long int) arr_16 [i_1] [i_1 - 1] [(signed char)5] [i_1 - 2] [i_1 - 4]);
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((357485556785315328LL) % (357485556785315333LL))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            {
                var_19 = ((/* implicit */short) var_10);
                arr_26 [i_6] [i_6] [i_6] = ((unsigned long long int) max(((~(((/* implicit */int) arr_21 [i_6])))), (((/* implicit */int) (unsigned char)177))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        var_20 = (short)32742;
                        arr_34 [i_6] [i_6] [i_6] [i_6] [3LL] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) / (357485556785315326LL)));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1967847386))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [i_7] [i_8] [i_8])) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6]))));
                        var_23 = ((/* implicit */unsigned char) arr_35 [i_7]);
                    }
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_7] [i_11])) ? (((/* implicit */long long int) arr_20 [i_8])) : ((~(9223372036854775807LL)))));
                        var_25 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(var_9)))) / (((((/* implicit */_Bool) var_3)) ? (17147713439578432833ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_7] [(_Bool)1] [i_8] [i_11])))))));
                    }
                    arr_41 [i_6] [(signed char)5] [i_6] [(unsigned short)11] = ((/* implicit */long long int) ((unsigned long long int) 357485556785315312LL));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) == (357485556785315328LL)));
                    arr_42 [2LL] |= ((/* implicit */unsigned char) arr_28 [i_6] [i_6] [(_Bool)1] [i_6]);
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_6])) ? (arr_35 [i_6]) : (arr_35 [i_6])));
                }
                /* vectorizable */
                for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    arr_45 [i_6] [i_6] [i_7] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_44 [i_6] [i_7] [i_12] [i_7]))));
                    arr_46 [i_6] [i_7] [i_12] [i_12] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_28 [i_12] [i_12] [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_43 [i_6] [i_6]))))));
                    arr_47 [i_7] [i_7] [i_7] [i_6] = ((/* implicit */_Bool) arr_23 [i_7]);
                    arr_48 [i_12] [i_12] [(signed char)2] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_28 [i_6] [i_7] [i_12] [(_Bool)1])))));
                }
                arr_49 [i_6] [i_6] [i_6] = ((/* implicit */long long int) var_1);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) ((unsigned long long int) -1967847386));
    var_29 *= ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 3 */
    for (signed char i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
    {
        var_30 ^= ((/* implicit */unsigned char) ((long long int) min((var_8), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-23952))))))));
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                {
                    arr_58 [i_13] [i_14] [i_15] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_7))))));
                    arr_59 [i_15] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) min((max((((unsigned long long int) arr_56 [i_15] [i_13] [i_15] [i_13])), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) max((arr_52 [i_13] [i_14]), (arr_52 [i_14] [i_13]))))));
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned int) arr_51 [i_13]))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) : (18446744073709551610ULL)))));
        arr_60 [i_13] [i_13] &= ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_55 [i_13] [(unsigned char)13] [(unsigned char)13])))), (((/* implicit */int) min((arr_54 [i_13] [i_13] [i_13]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_57 [i_13] [i_13] [i_13] [i_13]))))))))));
    }
    for (signed char i_16 = 0; i_16 < 14; i_16 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned char) 357485556785315325LL);
        var_33 = ((/* implicit */unsigned short) arr_56 [i_16] [i_16] [i_16] [i_16]);
        arr_65 [2] = ((/* implicit */int) var_8);
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            for (unsigned short i_18 = 0; i_18 < 14; i_18 += 3) 
            {
                {
                    var_34 = ((/* implicit */long long int) min(((+(((unsigned long long int) arr_55 [8ULL] [i_17] [(unsigned char)0])))), (((/* implicit */unsigned long long int) ((_Bool) arr_64 [7ULL])))));
                    arr_70 [i_17] [i_17] [(_Bool)1] = ((/* implicit */unsigned char) ((min(((+(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_57 [i_17] [i_17] [(short)1] [i_17])), ((unsigned short)64971)))))) & (((/* implicit */int) (signed char)-26))));
                }
            } 
        } 
    }
    for (unsigned long long int i_19 = 1; i_19 < 10; i_19 += 1) 
    {
        var_35 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)11))));
        arr_73 [i_19] = ((/* implicit */short) var_10);
        var_36 = ((/* implicit */unsigned long long int) (signed char)58);
    }
}
