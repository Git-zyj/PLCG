/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116223
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
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((2921133835426271472ULL) % (15525610238283280144ULL))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(arr_1 [i_0])))) > (((/* implicit */int) ((_Bool) var_4))))))) | (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ^ (((arr_1 [i_0]) ? (var_1) : (((/* implicit */unsigned long long int) var_8))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            arr_10 [i_1] [i_2] = ((((_Bool) 2156137132011200685ULL)) ? (((((((/* implicit */_Bool) 16290606941698350931ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (2156137132011200665ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_18 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_9 [i_1] [i_2] [i_3])))));
                arr_13 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (signed char)15);
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) arr_3 [i_1])))))))));
            }
            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_20 ^= ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4]))) : (2156137132011200665ULL)))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 13440564524189985421ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((arr_8 [i_2]) ^ (arr_8 [i_1]))))))));
            }
            for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
            {
                arr_19 [7ULL] [1ULL] [i_5 - 1] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (var_8)))) ? (((var_4) + (16290606941698350931ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1]))) > (arr_8 [i_2])))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)1))))))));
                var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (unsigned char)85)) | (((/* implicit */int) (unsigned char)125)))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)47)))) - (((arr_18 [2ULL] [i_2] [i_5]) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) arr_11 [i_1] [i_2] [(unsigned char)1]))))))) / (2156137132011200667ULL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (((15790969408867648734ULL) * (arr_8 [i_5 - 1]))))))));
                            arr_26 [i_7] [(_Bool)1] [i_5] [i_2] [i_1] = ((/* implicit */_Bool) ((arr_22 [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_7]) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_22 [i_5 - 3] [i_5 + 1] [i_5 + 1] [i_5])))));
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((((((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned char)3] [(unsigned char)3] [i_7]))) >= (-1LL))) ? (((/* implicit */unsigned long long int) arr_20 [i_1] [i_7] [i_5 + 2] [i_6] [i_7])) : (var_14))), (((/* implicit */unsigned long long int) arr_1 [(_Bool)1]))));
                            arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 2] [i_5 - 3] |= arr_3 [i_1];
                        }
                    } 
                } 
                var_25 -= ((/* implicit */unsigned long long int) ((arr_7 [i_5 - 1]) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) arr_7 [i_5 + 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_5 + 1] [i_2] [i_1])) == (((/* implicit */int) arr_17 [i_5 - 2] [i_2] [9LL])))))));
            }
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (max((((/* implicit */unsigned long long int) max((max((var_3), (var_3))), (((((/* implicit */_Bool) var_1)) || ((_Bool)1)))))), (arr_15 [i_2] [i_2] [i_1] [i_2])))));
        }
        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
        {
            var_27 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2156137132011200667ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))) : (262143ULL)))) || (((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((3180925073039736482ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))))) : (13440564524189985418ULL));
            var_28 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_1] [i_1] [i_1]))))) / (var_14)));
            var_29 = arr_8 [i_1];
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [(_Bool)1] [i_8] [i_8])) >= (((/* implicit */int) var_15)))))) != ((-(18446744073709289473ULL))))) ? (17429491067030902065ULL) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (18ULL))) * ((+(arr_22 [i_1] [i_1] [i_8] [i_8])))))))));
        }
        arr_31 [8ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [6ULL] [i_1])) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)70)) ? (5655883786473680663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_1] [i_1])))))))) : (((/* implicit */int) ((unsigned char) arr_29 [i_1] [(_Bool)1])))));
    }
    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 4) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned char)133)), (var_10))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))))));
        var_31 *= (+(((16916754420219415210ULL) % (((3180925073039736482ULL) - (0ULL))))));
        arr_35 [i_9] [i_9 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((12683509283506735094ULL) & (var_6)))) || (((/* implicit */_Bool) (+(((arr_24 [i_9] [i_9 - 1] [9ULL] [i_9] [i_9 - 1]) ? (16518684898249088155ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 1; i_10 < 11; i_10 += 1) 
    {
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_3 [i_10]))))))));
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 2) 
            {
                for (long long int i_13 = 4; i_13 < 12; i_13 += 4) 
                {
                    {
                        var_33 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) / (((1529989653490136406ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) arr_2 [i_12] [i_10 + 1]))));
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((arr_48 [i_12 + 2] [i_11] [i_10]) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >> (((/* implicit */int) arr_37 [i_13 - 2] [i_14 + 1])))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                        {
                            var_36 -= ((/* implicit */signed char) ((((var_8) >= (9223372036854775807LL))) ? (var_1) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)100)))))));
                            var_37 = ((/* implicit */unsigned long long int) ((arr_39 [i_10 + 1] [i_12 + 1] [i_13 - 4]) || (arr_39 [i_10 - 1] [i_12 + 1] [i_13 - 3])));
                            arr_54 [i_10 + 1] [i_11] [i_10] [3ULL] [i_12] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_46 [i_12 - 1] [i_13] [i_13] [i_15] [i_15 + 1])) : (arr_47 [i_15 + 1] [i_13 - 1] [i_12] [i_13] [i_15 + 1]));
                        }
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                        {
                            arr_57 [i_10] [i_11] [(unsigned char)7] [i_13 - 2] [i_12] = ((/* implicit */unsigned char) 2399271509597857453ULL);
                            var_38 *= ((((/* implicit */_Bool) ((unsigned long long int) 12683509283506735094ULL))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10275095010260610142ULL) <= (10275095010260610142ULL))))));
                        }
                        var_39 = ((/* implicit */_Bool) (signed char)-100);
                        var_40 = ((/* implicit */unsigned long long int) (unsigned char)114);
                        arr_58 [i_12] [i_11] [i_12] = ((1679099269679579029ULL) % (((/* implicit */unsigned long long int) 8668723872973801482LL)));
                    }
                } 
            } 
        } 
        arr_59 [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_10 + 1]))) <= (18446744073709551615ULL)));
    }
    var_41 -= ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)114), (((/* implicit */unsigned char) (_Bool)0)))))) : (max((((/* implicit */long long int) (unsigned char)30)), (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) ((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
}
