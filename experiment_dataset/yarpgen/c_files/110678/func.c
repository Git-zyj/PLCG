/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110678
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
    var_11 = ((/* implicit */unsigned char) max((12204895106312454557ULL), (((((/* implicit */_Bool) var_10)) ? (343339615659621630ULL) : (((/* implicit */unsigned long long int) var_3))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) (+(min((arr_1 [i_0] [i_0]), (((int) 18103404458049929991ULL))))));
        var_13 = (~(343339615659621624ULL));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */short) (signed char)-96))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 7; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) (short)1023);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_15 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8386560)) ? (((/* implicit */long long int) -3)) : (var_8)));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (8386560) : (((/* implicit */int) var_1)))))));
                            var_16 = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))) : (arr_7 [i_0] [i_1])))));
                            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18103404458049929991ULL) ^ (3ULL)))) ? (((/* implicit */unsigned long long int) 793762563U)) : (2147483647ULL)));
                            var_17 ^= 343339615659621636ULL;
                        }
                        arr_17 [2ULL] [i_1] [i_2] [4] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))) : (var_10)));
                    }
                } 
            } 
            arr_18 [9] [i_1] = ((/* implicit */unsigned short) var_5);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_5] = ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5]))) <= (2623771633145960672ULL))))) : (var_5));
            var_18 = ((/* implicit */int) (~(arr_14 [i_5] [i_0] [i_0])));
        }
        for (int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) max((var_8), (((/* implicit */long long int) var_1)))))) ? (-653052410) : (((/* implicit */int) var_1))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 3; i_7 < 6; i_7 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) -1958834532))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)68), (((/* implicit */unsigned char) (signed char)-4)))))) : (((((/* implicit */_Bool) arr_5 [i_7 + 1] [i_7 + 1] [i_7 + 2])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_7 + 2] [i_7 + 1] [i_7 + 4]))))))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_7] [8])) + (((((/* implicit */unsigned long long int) (~(8608512502963609313LL)))) % (((((/* implicit */unsigned long long int) 0)) ^ (343339615659621644ULL)))))));
                var_22 = (-((+(((/* implicit */int) (signed char)-56)))));
                var_23 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */int) (-(var_7)));
            }
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                arr_29 [i_6] [i_8] [i_8] [i_0] = ((/* implicit */unsigned long long int) (short)-20666);
                var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 582962177)) >= (((((/* implicit */_Bool) 669711467U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20641))) : (var_0)))));
            }
            var_26 = ((/* implicit */int) arr_7 [i_6] [i_0]);
            var_27 *= ((/* implicit */unsigned int) var_0);
        }
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            arr_32 [i_9] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (-1513411992))))) : (var_10))));
            arr_33 [i_9] = ((/* implicit */signed char) var_4);
        }
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
        {
            var_28 = (~(max((((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */long long int) -1089159719))))), (var_0))));
            arr_36 [(unsigned char)3] [(unsigned char)3] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68)))))));
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((var_10) - (17997156580307710741ULL)))))))))) / (max((((unsigned long long int) (unsigned char)13)), (min((9290888556905984099ULL), (((/* implicit */unsigned long long int) (short)18637)))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
        {
            arr_39 [i_11] [i_11] = ((/* implicit */short) 9155855516803567516ULL);
            var_30 = ((/* implicit */int) arr_31 [i_0]);
            var_31 = (((!(((/* implicit */_Bool) (unsigned char)42)))) ? (((/* implicit */unsigned long long int) (~(arr_9 [5ULL] [i_11] [5ULL])))) : (var_0));
        }
    }
}
