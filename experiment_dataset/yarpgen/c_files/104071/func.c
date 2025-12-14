/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104071
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (short)-10025)) : ((-(((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned char)175))));
        var_21 = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) max((-254856951), (((/* implicit */int) (unsigned short)23681))));
                        var_23 = ((unsigned short) (~(((/* implicit */int) (unsigned char)173))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (signed char)-29))));
                    }
                } 
            } 
        } 
    }
    var_25 = min(((unsigned char)219), (((/* implicit */unsigned char) (signed char)11)));
    /* LoopSeq 4 */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-11))));
        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_4]))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_11 [(unsigned char)12]) <= (arr_11 [(unsigned char)12])))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)23680)) >= (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)34)))))))));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-11)), ((unsigned char)80))))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5]))) * (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)243)) << (((((/* implicit */int) (signed char)29)) - (12)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))));
    }
    for (short i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                {
                    var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_17 [i_8] [i_7 + 1])))));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) : (((arr_18 [i_7 + 1] [i_7 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7 - 1] [i_7]))))))))));
                    arr_23 [i_6] [i_7 + 1] [i_8] = (unsigned char)227;
                    var_33 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)89)) + (((/* implicit */int) ((((/* implicit */int) arr_17 [i_7 - 1] [i_7 + 1])) <= (((/* implicit */int) arr_17 [i_7 - 1] [i_7 - 1])))))));
                }
            } 
        } 
        arr_24 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)81))));
        arr_25 [5ULL] [i_6] = max((((/* implicit */unsigned long long int) arr_20 [i_6])), (((9ULL) ^ (6358904784979229259ULL))));
        arr_26 [i_6] = ((/* implicit */_Bool) min((((unsigned long long int) -45944693)), (arr_22 [i_6] [i_6] [i_6])));
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) arr_16 [i_6]))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) (~(2147483647)));
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */_Bool) ((arr_28 [i_11]) ? (arr_31 [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))));
                var_37 = ((/* implicit */unsigned char) arr_28 [i_9]);
            }
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
            {
                var_38 *= ((/* implicit */unsigned char) ((arr_28 [i_10]) ? (((/* implicit */int) arr_27 [i_12] [i_9])) : (((/* implicit */int) arr_35 [i_9] [i_10] [i_12]))));
                var_39 = ((/* implicit */unsigned char) (-(arr_31 [i_9] [i_10])));
            }
            var_40 = ((/* implicit */short) ((unsigned long long int) var_7));
        }
        for (unsigned char i_13 = 2; i_13 < 24; i_13 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_14 = 1; i_14 < 23; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        {
                            var_41 -= ((/* implicit */unsigned char) (~(arr_47 [(unsigned char)20] [i_14 - 1] [i_14] [i_14] [(short)13])));
                            var_42 = ((/* implicit */unsigned short) ((short) var_8));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 1; i_17 < 23; i_17 += 2) 
                {
                    for (unsigned char i_18 = 1; i_18 < 24; i_18 += 2) 
                    {
                        {
                            var_43 *= ((/* implicit */unsigned long long int) arr_27 [i_9] [i_18 + 1]);
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (signed char)-3))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned char) (short)32767);
            }
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_13 + 1] [i_13 + 1] [i_13 + 1] [(short)13] [i_13 + 1])) ? (arr_33 [i_13] [i_9] [i_13]) : (arr_33 [i_13] [i_9] [i_13])));
            arr_53 [i_13] [i_13 - 1] = ((/* implicit */unsigned short) 2874413971489915771ULL);
        }
        /* LoopNest 2 */
        for (unsigned short i_19 = 1; i_19 < 23; i_19 += 4) 
        {
            for (unsigned short i_20 = 2; i_20 < 23; i_20 += 1) 
            {
                {
                    var_47 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_32 [i_9] [i_19] [i_20]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_21 = 0; i_21 < 25; i_21 += 2) /* same iter space */
                    {
                        var_48 = ((/* implicit */int) ((869278897653274939ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_49 = ((/* implicit */unsigned long long int) -797841782);
                    }
                    for (unsigned char i_22 = 0; i_22 < 25; i_22 += 2) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned char) (signed char)29);
                        arr_67 [i_19] = ((/* implicit */unsigned char) arr_33 [i_19] [i_20 + 2] [i_20]);
                        arr_68 [i_9] [i_9] [i_19] [i_9] = ((/* implicit */_Bool) 18446744073709551610ULL);
                    }
                }
            } 
        } 
        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1002011698)))) ? (((/* implicit */int) (_Bool)1)) : ((~(-907748579))))))));
    }
    var_52 = ((/* implicit */int) var_9);
    var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((_Bool) (signed char)16)))));
}
