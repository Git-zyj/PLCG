/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116660
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
    var_20 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) (-(var_11)))) : (((var_18) ? (34359738367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((5874521960554581779LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : ((-9223372036854775807LL - 1LL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_3))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) >> (((var_3) - (13139701834584660392ULL))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */int) var_14)) | (((/* implicit */int) ((max((((/* implicit */long long int) (signed char)0)), (arr_11 [i_1] [i_1] [i_2] [0LL]))) != (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_7 [i_0] [i_0])) : (arr_11 [i_1] [i_1] [i_1] [i_3]))))))));
                        var_24 = ((var_1) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_3]))) / (((5874521960554581788LL) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [(signed char)16] [i_1] [i_1] [12U] [i_3]))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) ((((var_6) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_1]))))) + (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_0] [i_0] [i_1]), (var_0)))))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (min((5874521960554581779LL), (562949953421311LL))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_5] [i_5] [14ULL])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1]))));
                            arr_21 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -562949953421306LL)) && (((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (var_10) : (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [(unsigned short)18] [(unsigned short)18] [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1])))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_28 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_10)))), (((unsigned long long int) var_19))))) ? (((/* implicit */int) ((var_8) != ((~(((/* implicit */int) var_17))))))) : ((-(((((/* implicit */int) (unsigned char)197)) * (((/* implicit */int) (signed char)-94))))))));
                            arr_24 [i_0] [i_0] [i_0] [i_1] [(unsigned short)15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)13), (((/* implicit */unsigned char) var_17))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9734)))));
                        }
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) (short)32553);
                            arr_27 [i_0] [i_1] [11LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_3))));
                            var_32 = ((/* implicit */long long int) (~(max((max((var_7), (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_2] [i_5] [14LL])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9732))) != (5478669905860901101ULL))))))));
                        }
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) 562949953421308LL)), (13740040812356047691ULL)))));
                            var_34 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-102)) ? (-5874521960554581782LL) : (((/* implicit */long long int) -763314300)))) + (((/* implicit */long long int) ((arr_29 [i_0] [i_0] [14LL] [i_0] [(short)16] [i_0]) - (arr_29 [i_0] [i_0] [10U] [i_0] [i_0] [i_0]))))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((max((arr_0 [i_9]), (var_12))) | (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [(_Bool)1] [(unsigned short)16] [8U] [(short)8])) : (24ULL))))) : (((/* implicit */unsigned long long int) var_2)))))));
                            var_36 = ((/* implicit */unsigned int) min((arr_23 [i_1]), (var_5)));
                        }
                        arr_31 [i_1] [i_1] [10U] [(unsigned short)16] [i_1] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)0)))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_29 [21ULL] [i_1] [i_1] [6ULL] [i_5] [i_5])) : (var_9)))) - (arr_18 [i_0] [i_1] [i_1] [i_1] [0ULL] [(_Bool)1])));
                        var_38 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1363))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max(((unsigned short)10897), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (0LL))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        var_39 = ((/* implicit */short) min((var_3), (((/* implicit */unsigned long long int) ((arr_30 [i_10]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_40 = ((/* implicit */short) min((arr_23 [(unsigned short)18]), (((/* implicit */long long int) ((((/* implicit */int) min((arr_32 [i_10] [(short)6]), (((/* implicit */unsigned char) (signed char)31))))) > (((/* implicit */int) var_13)))))));
    }
    for (short i_11 = 4; i_11 < 12; i_11 += 1) /* same iter space */
    {
        arr_36 [i_11] [i_11] = ((/* implicit */unsigned long long int) var_15);
        /* LoopSeq 1 */
        for (unsigned int i_12 = 2; i_12 < 10; i_12 += 2) 
        {
            arr_40 [i_11] [(_Bool)0] [i_11] = (i_11 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((5874521960554581769LL) | (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) || (((/* implicit */_Bool) ((var_2) >> (((((/* implicit */int) arr_3 [i_11])) - (46179))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((5874521960554581769LL) | (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) || (((/* implicit */_Bool) ((var_2) >> (((((((/* implicit */int) arr_3 [i_11])) - (46179))) + (38348)))))))));
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_41 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)57537)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9LL)));
                var_42 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
            }
            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) + (0))) * (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) (short)-31654)) ? (((0ULL) & (((/* implicit */unsigned long long int) arr_43 [i_11])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_11]))))))))));
            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -7360299554693733194LL))))) / (((((/* implicit */int) var_14)) - (((/* implicit */int) (short)32767))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_13)) - (21469))))))))) : (min((-4LL), (max((0LL), (14LL)))))));
        }
        var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) (unsigned short)24511)) : (((/* implicit */int) (short)1023))))) & (((((/* implicit */_Bool) arr_41 [i_11] [i_11] [i_11])) ? (var_10) : (((/* implicit */long long int) arr_26 [i_11] [3U] [3U] [i_11] [i_11]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_11] [i_11] [(_Bool)1] [9LL] [(_Bool)1] [0LL])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_34 [i_11 - 4]))))) ? (9223372036854775807LL) : (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) var_4))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)41020)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) : (2651155960U))))));
    }
    for (short i_14 = 4; i_14 < 12; i_14 += 1) /* same iter space */
    {
        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_14] [i_14 - 2] [19LL] [2LL] [i_14 + 2] [9U]))))) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */_Bool) 920551353763181464LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (8885195031404791385LL)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_14] [(signed char)0] [20U] [i_14] [i_14] [i_14 + 2]))) : (var_3)))))));
        var_47 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
    {
        arr_50 [i_15] = ((/* implicit */_Bool) var_2);
        arr_51 [i_15] = ((/* implicit */short) (~(arr_39 [i_15])));
        /* LoopSeq 1 */
        for (signed char i_16 = 2; i_16 < 8; i_16 += 2) 
        {
            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_6)))) ? (((var_10) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
            var_49 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) var_17))) | (var_6)))));
            var_50 = ((((((/* implicit */_Bool) (unsigned short)60252)) || (((/* implicit */_Bool) 2271621790663559056LL)))) ? (((unsigned long long int) 793766332U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned short)5283)))))));
        }
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_51 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (9223372036854775807LL)))), (arr_0 [i_17]))) - (((/* implicit */unsigned long long int) (((((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)32741))))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_6 [i_17] [i_17])), (3273912101U))))))));
        arr_56 [(signed char)12] = ((/* implicit */unsigned long long int) ((short) var_2));
        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)128))))) ? ((-(((((/* implicit */_Bool) var_0)) ? (4249446531267651710ULL) : (((/* implicit */unsigned long long int) 23U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_17] [i_17])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-4)))))));
    }
    /* vectorizable */
    for (unsigned short i_18 = 4; i_18 < 17; i_18 += 3) 
    {
        var_53 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned short)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (10U))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_17))) / (var_11)))));
        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)304)) ? (((/* implicit */long long int) ((arr_8 [i_18] [18U]) / (((/* implicit */int) arr_4 [i_18]))))) : (arr_11 [10ULL] [i_18 - 4] [i_18 + 1] [i_18 - 4])));
        arr_60 [i_18] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_23 [2U])) & (arr_0 [i_18])));
    }
}
