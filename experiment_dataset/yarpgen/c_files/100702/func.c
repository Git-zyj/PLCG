/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100702
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
    var_18 = ((/* implicit */unsigned long long int) -7149051855346998881LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((arr_0 [i_0]) == (((/* implicit */int) (!(((/* implicit */_Bool) 7149051855346998902LL)))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned long long int) (((+(var_15))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) arr_4 [i_1]))));
            arr_7 [i_0] = ((/* implicit */unsigned int) ((((int) var_1)) > ((+(-1288182096)))));
        }
        for (long long int i_2 = 3; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 3) 
                {
                    for (int i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned long long int) -1959453262)) : (18446744073709551615ULL))))));
                            var_22 = ((/* implicit */unsigned long long int) var_1);
                        }
                    } 
                } 
                arr_21 [i_0] [i_2] [i_2] = ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (signed char)-47)));
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 23; i_6 += 3) 
                {
                    for (unsigned short i_7 = 1; i_7 < 23; i_7 += 4) 
                    {
                        {
                            var_23 = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_8 [i_6 + 1]));
                            var_24 = ((/* implicit */unsigned int) var_1);
                            var_25 = ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_20 [i_6]))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (6732324299848840838ULL) : (arr_11 [i_3 + 1] [i_2 + 2])));
                            var_27 *= ((/* implicit */unsigned long long int) ((((arr_28 [i_7 - 1] [i_6 - 1] [i_6] [i_3] [i_2] [i_0]) - (7149051855346998880LL))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_0] [i_2 + 2] [i_3] [i_6] [i_3] [i_3]) <= (((/* implicit */unsigned long long int) var_9))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                var_28 = ((/* implicit */_Bool) (unsigned short)45819);
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_29 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_10 [i_10] [i_10]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                            var_30 *= ((/* implicit */unsigned short) (!((_Bool)1)));
                        }
                    } 
                } 
                arr_35 [i_0] = ((/* implicit */unsigned long long int) (signed char)46);
            }
            var_31 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
            arr_36 [i_0] = ((/* implicit */short) (signed char)2);
            var_32 = ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0))))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [4])) ? (var_14) : (arr_17 [i_0] [i_2] [21LL])))) ? (((/* implicit */int) arr_25 [i_0] [i_12] [i_12] [i_2] [i_12])) : (((/* implicit */int) ((arr_3 [i_2]) > (var_6))))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) arr_17 [i_2] [i_2 + 2] [i_2]))));
                        arr_42 [i_12] [i_2 + 4] [i_0] = ((/* implicit */unsigned long long int) ((arr_28 [i_0] [(unsigned short)23] [i_2 + 3] [i_2 + 3] [i_11] [i_12]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        }
        for (int i_13 = 2; i_13 < 23; i_13 += 4) 
        {
            arr_45 [i_0] [i_13 + 1] = ((/* implicit */long long int) (signed char)47);
            arr_46 [9] [i_13] [i_0] = ((/* implicit */short) ((18446744073709551608ULL) & (((/* implicit */unsigned long long int) var_15))));
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_15 = 1; i_15 < 23; i_15 += 3) 
            {
                var_34 = (-(((((/* implicit */unsigned long long int) var_8)) - (arr_43 [i_15] [10U] [10U]))));
                arr_52 [i_0] = ((/* implicit */signed char) ((((((long long int) arr_47 [i_0] [7U] [i_15 + 1])) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (signed char)-103)) ? (-7149051855346998881LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)2))))) + (7149051855346998902LL)))));
                var_35 |= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (1288182112)));
            }
            for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                arr_56 [i_0] [22ULL] [i_16] = ((/* implicit */long long int) arr_12 [i_14] [i_16] [(unsigned short)11]);
                var_36 = ((/* implicit */unsigned long long int) var_15);
            }
            var_37 ^= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)16577))));
        }
        var_38 = ((/* implicit */_Bool) (((-(var_16))) % (((/* implicit */unsigned long long int) 9223372036854775795LL))));
    }
    for (unsigned short i_17 = 1; i_17 < 8; i_17 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_18 = 1; i_18 < 9; i_18 += 3) 
        {
            for (long long int i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                {
                    arr_64 [i_17 + 2] [i_18] [i_17 + 1] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (min((((((/* implicit */_Bool) 9007199254740991LL)) ? (((/* implicit */unsigned long long int) arr_48 [i_17] [i_19])) : (arr_8 [i_17]))), (((((/* implicit */_Bool) arr_33 [i_18] [i_18 - 1] [i_19])) ? (arr_17 [i_17] [i_18 + 1] [i_17]) : (var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2127))) : (arr_10 [i_19] [i_18])))) && (((/* implicit */_Bool) arr_55 [i_19] [i_19]))))))));
                    var_39 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7149051855346998902LL)) ? (7913591014077143441LL) : (((/* implicit */long long int) 1288182112))))) ? (var_6) : (var_6)));
                    var_40 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_22 [i_17] [i_18] [i_17] [i_17 + 1] [i_17] [i_17 - 1])) / (var_0))) * (((((/* implicit */int) var_17)) / (var_2)))))), ((+(max((18059264665660888169ULL), (((/* implicit */unsigned long long int) var_10))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_20 = 1; i_20 < 6; i_20 += 2) 
        {
            arr_67 [i_20] [i_17 - 1] = ((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) -1288182099)) ? (arr_26 [i_17] [i_17] [16] [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_17] [i_17] [i_17])))))) - (((/* implicit */long long int) var_0))));
            var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 8126190946459379410LL)) > (((max((var_16), (4221273258380176670ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) > (arr_43 [i_20] [(signed char)2] [i_17])))))))));
            var_42 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        arr_68 [8LL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((7149051855346998902LL), (((/* implicit */long long int) (signed char)122))))) ? (var_2) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_17])))))))), (var_16)));
        var_43 = (-(((((/* implicit */_Bool) 1984592243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (1400240078763814518ULL))));
        /* LoopNest 3 */
        for (long long int i_21 = 2; i_21 < 9; i_21 += 2) 
        {
            for (int i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                for (int i_23 = 0; i_23 < 10; i_23 += 4) 
                {
                    {
                        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) (-(arr_47 [i_21 - 2] [i_21] [i_17 - 1]))))));
                        arr_78 [i_17 + 1] [i_21] [i_22] [i_23] [i_21] [i_21] = ((/* implicit */int) ((((((/* implicit */int) arr_65 [i_17 + 1])) / (((/* implicit */int) arr_65 [i_17 + 1])))) > ((-(((/* implicit */int) arr_65 [i_17 - 1]))))));
                    }
                } 
            } 
        } 
    }
}
