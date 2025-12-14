/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165730
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
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-8), ((short)-31873))))) : (max((((/* implicit */unsigned int) var_7)), (var_2)))))), (((((/* implicit */_Bool) max(((short)7), (((/* implicit */short) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_10))) : (min((((/* implicit */unsigned long long int) (unsigned char)76)), (var_1)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */long long int) min((max((max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_0])), (var_10))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((unsigned char)78), ((unsigned char)8)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (2133997858U))))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))), (min((((/* implicit */unsigned long long int) (short)-7093)), (9222483266324562002ULL)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-1)), (arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_1 + 1] [i_2])), (var_12)))) : (max((((/* implicit */unsigned long long int) var_3)), (15633944520764080566ULL))))) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) (signed char)11))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)97)), (18446744073709551590ULL))) : (min((2516856335277653351ULL), (((/* implicit */unsigned long long int) 2133997840U)))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 8; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 4) 
                        {
                            var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-3)) : (arr_5 [i_5])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) (short)-13))))) : (((((/* implicit */_Bool) (unsigned short)31884)) ? (var_1) : (18446743798831644672ULL)))));
                            arr_20 [3ULL] [i_3] [i_4] [i_5] [3ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13999661518500772180ULL)) ? (((/* implicit */unsigned long long int) arr_13 [i_6] [i_5] [(unsigned short)7] [i_3] [(unsigned short)7] [i_0])) : (var_8)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_10 [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_3] [i_4] [i_3])) : (((/* implicit */int) (short)2))))));
                        }
                        var_16 = min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)0)), (63U)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (0ULL)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26963))) : (var_9))) : (((((/* implicit */_Bool) (unsigned short)29331)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_2)))))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)13)), (1ULL)))) ? (max((((/* implicit */unsigned long long int) arr_13 [i_5] [i_5] [5LL] [i_3] [i_0] [i_0])), (18ULL))) : (((/* implicit */unsigned long long int) ((var_5) ? (arr_12 [i_3] [i_3] [i_5] [i_3]) : (arr_3 [i_4])))))) : (max((min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_3] [i_0])), (arr_19 [i_5] [i_0] [i_4] [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_0)), (var_7)))))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (_Bool)0)), (0ULL))), (min((((((/* implicit */_Bool) (short)-7093)) ? (((/* implicit */unsigned long long int) 0)) : (3ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)13336)) : (((/* implicit */int) (short)10768))))), (min((((((/* implicit */_Bool) (unsigned char)163)) ? (arr_12 [i_3] [i_4] [i_3] [i_0]) : (((/* implicit */long long int) arr_15 [i_4] [i_7])))), (min((arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned char)6]), (((/* implicit */long long int) var_11))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        arr_27 [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_22 [i_3] [i_3] [i_3] [i_3] [i_3]), (13146724453333380962ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)92)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16752468267611731149ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_4]))) : (arr_26 [i_3] [i_4] [i_8])))), (((((/* implicit */_Bool) 10060691248175223865ULL)) ? (8386052825534327752ULL) : (((/* implicit */unsigned long long int) 2047765261009592467LL)))))) : (max((((var_5) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_3] [i_4] [8LL])) : (18446744073709551600ULL))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))))));
                        arr_28 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) min((var_7), (var_7)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_10 [i_0] [i_3] [i_4]))))), (min((max((3184279128302079891ULL), (arr_4 [i_8]))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_4] [(unsigned char)1]))) : (var_9)))))));
                        arr_29 [i_0] [i_3] [i_4] [i_8] = ((/* implicit */int) min((min((max((((/* implicit */unsigned long long int) var_4)), (8386052825534327746ULL))), (min((var_6), (((/* implicit */unsigned long long int) -3467462426170201604LL)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8386052825534327768ULL)) ? (arr_3 [i_0]) : (((/* implicit */long long int) arr_5 [i_4]))))), (min((var_8), (arr_19 [i_0] [i_0] [i_3] [i_4] [i_8])))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)20)), (arr_4 [i_8])))) ? (((/* implicit */unsigned long long int) max((642958133U), (((/* implicit */unsigned int) (signed char)-84))))) : (min((((/* implicit */unsigned long long int) arr_21 [i_0] [(_Bool)1] [(signed char)4] [i_8])), (var_8))))), (max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned short)6])) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_3])) : (arr_4 [i_0]))), (((/* implicit */unsigned long long int) min((arr_14 [i_0] [i_0] [i_3] [i_4] [i_8]), (((/* implicit */long long int) var_4))))))))))));
                    }
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_2)), (arr_22 [i_0] [i_3] [i_4 - 2] [i_3] [i_4]))), (((/* implicit */unsigned long long int) min((arr_16 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_4)))))))) ? (min((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (6692230239186235422ULL))), (max((4504514441688407226ULL), (var_1))))) : (max((((/* implicit */unsigned long long int) min((arr_24 [i_0] [i_3] [9ULL] [i_3]), (((/* implicit */long long int) arr_15 [i_0] [i_0]))))), (max((((/* implicit */unsigned long long int) var_11)), (4504514441688407226ULL)))))));
                    var_22 = ((/* implicit */short) min((((/* implicit */int) (unsigned char)92)), (-194788843)));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (arr_14 [i_0] [i_9] [i_9] [i_0] [i_9])))), (((((/* implicit */_Bool) var_11)) ? (arr_25 [(unsigned char)6] [i_0] [i_0] [(unsigned char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_0])), (arr_12 [(short)1] [i_0] [(unsigned short)7] [(short)1])))), (min((11198790430190353495ULL), (((/* implicit */unsigned long long int) var_5)))))) : (((((/* implicit */_Bool) max((3116881986671850603ULL), (18446744073709551598ULL)))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_9] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (10060691248175223870ULL))) : (min((var_6), (((/* implicit */unsigned long long int) var_7))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (unsigned short i_11 = 1; i_11 < 6; i_11 += 1) 
                {
                    {
                        var_24 = max((((/* implicit */unsigned long long int) max((min((0U), (((/* implicit */unsigned int) (short)24808)))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13942229632021144396ULL)) ? (-1270293439787346527LL) : (288230376151711743LL)))) ? (max((1694275806097820453ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (short)0))))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 888010953290638211ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (2047ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_11] [i_11 + 4])))))))) ? (((((/* implicit */_Bool) min((arr_14 [i_9] [i_9] [i_11 + 4] [i_11] [i_9]), (((/* implicit */long long int) (_Bool)1))))) ? (min((var_6), (var_9))) : (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) arr_33 [i_0]))))))) : (min((((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [0ULL])) ? (11314172187285671118ULL) : (var_9))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [i_0] [i_0] [(unsigned short)6]))))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            arr_40 [2LL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((max((117416548U), (((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [i_12] [i_12] [i_12])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) var_0)) : (var_12))))))), (min((min((((/* implicit */long long int) arr_9 [i_0] [0ULL])), (arr_14 [i_12] [i_12] [i_0] [(unsigned short)5] [i_0]))), (max((arr_32 [i_12] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_12] [i_12] [i_12])))))));
            /* LoopNest 2 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [4ULL] [i_12] [i_12] [i_14] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)151))))) ? (min((arr_17 [i_13 - 1] [i_13 - 1] [i_13] [i_13] [i_13] [i_14] [i_12]), (((/* implicit */unsigned long long int) arr_5 [i_12])))) : (min((((/* implicit */unsigned long long int) arr_33 [1])), (var_9))))), (((((/* implicit */_Bool) min((var_6), (arr_25 [i_14] [i_13 - 1] [i_12] [i_0])))) ? (min((var_10), (((/* implicit */unsigned long long int) arr_42 [i_0] [i_12] [i_13])))) : (min((var_9), (var_8))))));
                        var_26 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) min((arr_36 [i_0] [i_14] [4LL] [4LL] [i_14]), (((/* implicit */short) var_4))))), (max((arr_22 [(signed char)5] [(signed char)5] [i_12] [i_13] [8ULL]), (((/* implicit */unsigned long long int) arr_5 [i_14])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_42 [i_13] [i_13] [(signed char)2])), (1694275806097820466ULL)))) ? (((/* implicit */int) min(((_Bool)1), (var_5)))) : (((((/* implicit */_Bool) arr_30 [i_14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            arr_50 [i_0] [i_0] [i_0] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17536078699317418756ULL)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) min((var_2), (var_2)))) : (((((/* implicit */_Bool) (unsigned short)4)) ? (var_6) : (var_6)))))) ? (min((min((((/* implicit */unsigned long long int) arr_49 [i_0] [1ULL] [i_13] [i_0] [i_14] [i_14] [(unsigned char)5])), (var_10))), (((/* implicit */unsigned long long int) min(((unsigned short)6), ((unsigned short)28214)))))) : (max((max((((/* implicit */unsigned long long int) var_5)), (17661178203289624659ULL))), (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_12] [i_0] [i_12] [i_12])), (17536078699317418756ULL)))))));
                            var_27 = max((((((/* implicit */_Bool) max((3388942664U), (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */_Bool) 452631719U)) ? (1896568391188634144ULL) : (((/* implicit */unsigned long long int) arr_26 [i_0] [4ULL] [i_0])))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)7909)))))), (min((min((17536078699317418756ULL), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_12] [i_13] [i_13])))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) (_Bool)1))))))));
                        }
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
    {
        var_28 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */short) (signed char)0)), (var_7)))), (min((var_2), (((/* implicit */unsigned int) var_12))))))) ? (max((max((arr_51 [i_16] [i_16]), (((/* implicit */unsigned long long int) var_3)))), (max((var_9), (((/* implicit */unsigned long long int) arr_16 [i_16] [i_16] [i_16])))))) : (max((((/* implicit */unsigned long long int) min((arr_52 [i_16] [i_16]), (((/* implicit */long long int) var_3))))), (max((arr_4 [i_16]), (((/* implicit */unsigned long long int) var_12)))))));
        var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4128157888046438708LL)) ? (((/* implicit */int) arr_9 [i_16] [i_16])) : (((/* implicit */int) arr_0 [i_16] [i_16]))))) ? (((((/* implicit */_Bool) arr_17 [i_16] [4ULL] [i_16] [i_16] [4ULL] [i_16] [i_16])) ? (((/* implicit */int) arr_49 [(signed char)7] [5U] [i_16] [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) (unsigned char)210)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_16] [i_16] [(unsigned short)0] [i_16])) ? (arr_4 [i_16]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (min((16942049364911577078ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((((/* implicit */_Bool) arr_12 [i_16] [i_16] [i_16] [i_16])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212)))))))));
    }
    var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_8)))) ? ((((_Bool)1) ? (((/* implicit */int) var_11)) : (var_12))) : (((((/* implicit */_Bool) (unsigned short)32153)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))), (max((((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-17)), ((unsigned short)57627))))))));
}
