/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136506
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_12)) - (var_1)));
    var_18 = ((/* implicit */int) var_6);
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) var_15)), (((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-11)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)6]))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned char)3)))))));
        var_21 &= ((signed char) arr_1 [14]);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) ((3ULL) << (((2406217513U) - (2406217504U)))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            arr_12 [i_2] [i_2] [i_4] [i_2] [i_2] [i_2] |= ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_2]);
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) / (arr_2 [i_0])))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(4294967288U)))) ? (arr_1 [i_0]) : (arr_7 [i_0] [i_0] [i_0])));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) 15))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((long long int) 6)))));
                            var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_7] [i_7])) ? (arr_5 [i_0] [i_5] [i_5]) : (arr_5 [(unsigned char)10] [i_5] [2U])));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) -10LL))) ? (((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) : (arr_7 [i_0] [i_0] [i_0])));
            var_29 = ((/* implicit */short) ((-15) | (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_0])) && (((/* implicit */_Bool) -8LL)))))));
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_0] [(signed char)0] [15ULL])) : (((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_5] [i_0] [i_5] [20U] [i_5]))));
            var_31 = ((/* implicit */unsigned char) (signed char)-126);
        }
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
        {
            var_32 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9] [i_0] [i_0]))) * (3ULL)));
            arr_29 [(signed char)13] [(signed char)13] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [i_9] [i_9] [i_9])) < (((/* implicit */int) ((unsigned short) -3)))));
        }
    }
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        var_33 = ((/* implicit */signed char) -7329422250554761144LL);
        /* LoopSeq 3 */
        for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) var_8);
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) arr_20 [i_10] [i_13] [i_12] [i_13] [i_14]))));
                            var_36 = ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (signed char)-98)) : (12));
                            arr_45 [i_12] [i_13] [i_12] [i_11] [i_12] = arr_43 [i_10];
                            var_37 -= var_3;
                        }
                    } 
                } 
            } 
            arr_46 [i_11] [i_10] [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)243)) && (((/* implicit */_Bool) (unsigned short)0)))));
            var_38 = ((/* implicit */_Bool) (-(((unsigned int) arr_5 [i_10] [i_10] [i_11]))));
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 3) 
        {
            arr_49 [i_15] = ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) ((signed char) (signed char)106))) : (((/* implicit */int) (unsigned char)0)));
            var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_15]))));
        }
        for (int i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            var_40 = ((/* implicit */unsigned char) var_4);
            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_10] [(unsigned short)5])) ? (-1) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) arr_28 [i_16]))))) ? (((/* implicit */int) ((unsigned char) -10))) : (((/* implicit */int) arr_33 [i_10]))))));
            var_42 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7))))), ((-(4294967274U)))));
        }
        var_43 = (short)-11;
    }
    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 1) 
    {
        arr_56 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_17])) ? (((/* implicit */unsigned long long int) ((arr_52 [i_17]) % (((/* implicit */long long int) arr_53 [i_17]))))) : ((-(5346979837903564423ULL)))));
        var_44 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_17])) ? (((((/* implicit */_Bool) arr_53 [i_17])) ? (((/* implicit */int) (unsigned char)252)) : (10))) : (((/* implicit */int) ((_Bool) arr_54 [i_17])))))) ? (((((/* implicit */_Bool) arr_52 [i_17])) ? (((long long int) 3962386574U)) : (((arr_52 [i_17]) - (arr_52 [i_17]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((_Bool) 1)))))));
    }
}
