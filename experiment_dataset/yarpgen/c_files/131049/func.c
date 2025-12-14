/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131049
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(((((((/* implicit */int) (signed char)-2)) + (2147483647))) << (((((/* implicit */int) (signed char)-120)) & (((/* implicit */int) (signed char)114))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned long long int) ((((((((var_13) + (9223372036854775807LL))) >> (((var_2) - (7684722285428872896ULL))))) ^ (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-114))))))) != ((~(min((var_13), (-21LL)))))));
                                arr_15 [i_1] [(signed char)8] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((int) ((int) ((arr_14 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0]) == (((/* implicit */unsigned long long int) arr_3 [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 8; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (signed char)-115))) + (2147483647))) >> (((((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) 6799255371495272094LL))))) << (((((-6045232326536887417LL) / (((/* implicit */long long int) arr_5 [(signed char)14] [i_6] [i_6])))) - (8113266978LL)))))));
                arr_22 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((((/* implicit */int) (signed char)87)) == (((/* implicit */int) arr_11 [i_6 - 1] [22] [22] [i_5])))))))));
                var_16 = ((/* implicit */long long int) min((min((4045867948013451310ULL), (((/* implicit */unsigned long long int) -1829351415829905440LL)))), (((/* implicit */unsigned long long int) 925861991))));
                var_17 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)114)), (var_8)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        arr_25 [i_7] = ((/* implicit */int) (~(14791319599805783121ULL)));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) arr_23 [i_7])), (var_11))))) || (((/* implicit */_Bool) ((long long int) 976918581506800296LL)))));
        var_19 = ((/* implicit */long long int) ((min((((var_10) + (137437904896ULL))), (((/* implicit */unsigned long long int) ((arr_23 [i_7]) >= (((/* implicit */int) (signed char)116))))))) < (max((((/* implicit */unsigned long long int) (+(-12)))), (((arr_24 [i_7] [i_7]) | (((/* implicit */unsigned long long int) -6832148829430995043LL))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) ((((((arr_29 [i_7] [i_7] [i_7] [i_7]) + (2147483647))) >> (((arr_28 [i_9] [i_8] [(signed char)11] [i_7]) - (5940334688679367645ULL))))) + ((~(arr_29 [i_7] [i_7] [i_7] [i_7]))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 24; i_10 += 2) 
                    {
                        for (signed char i_11 = 1; i_11 < 24; i_11 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (+(14)));
                                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((arr_23 [i_10]) >> (((-6832148829430995043LL) + (6832148829430995065LL)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (372126991700379607ULL)))))))));
                                arr_34 [i_10 - 2] [i_9] [i_8] = ((max((((unsigned long long int) (signed char)-9)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-32))))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -3571601484729669321LL)))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((arr_26 [i_8] [i_8]) / (arr_26 [i_8] [12ULL]))) >= (((((/* implicit */long long int) arr_23 [i_10])) + (-4406473185134270819LL)))))) * (((int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)107))) > (6918253143342954249LL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_12 = 2; i_12 < 24; i_12 += 1) 
                    {
                        arr_37 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((int) min(((~(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17ULL)) || (((/* implicit */_Bool) arr_26 [4] [4]))))))));
                        var_24 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((signed char) arr_33 [i_12 - 2] [11] [i_9] [i_8] [0ULL]))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_11)))))))) << (((((int) (+(((/* implicit */int) arr_32 [i_7] [(signed char)18] [15] [i_7] [i_7] [i_7] [i_7]))))) - (97)))));
                    }
                    for (int i_13 = 2; i_13 < 22; i_13 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */unsigned long long int) -1472833276)) * (var_2)))), (((((min((((/* implicit */long long int) 1511262323)), (-4681305985695948269LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)112)) - (55)))))));
                        var_26 = ((/* implicit */long long int) ((max((max((((/* implicit */unsigned long long int) -8184506294227552727LL)), (10448412951023133945ULL))), (((/* implicit */unsigned long long int) ((long long int) (signed char)106))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((((/* implicit */int) var_5)) + (2147483647))) >> (((var_9) + (4445899813624246686LL))))) > (((int) arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
                        var_27 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-49)) / (673515091)))) || (((/* implicit */_Bool) ((signed char) (signed char)-2)))));
                        arr_42 [11] [i_9] [i_8] [i_7] = ((/* implicit */int) max((((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_7] [i_7] [13] [i_7])))) && ((!(((/* implicit */_Bool) var_6)))))), ((!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_27 [i_7]))))))));
                        arr_43 [i_13 + 2] [i_9] [i_8] [i_7] = max(((+(max((6832148829430995033LL), (4681305985695948272LL))))), (((-8184506294227552727LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)92))))));
                    }
                    for (signed char i_14 = 1; i_14 < 24; i_14 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) ((691934661122586855LL) <= (4681305985695948285LL)));
                        arr_47 [i_7] [i_7] [i_14] [i_7] = ((/* implicit */long long int) min((((/* implicit */signed char) ((11914791458264723405ULL) >= (((18446744073709551612ULL) / (((/* implicit */unsigned long long int) 4681305985695948292LL))))))), ((signed char)-115)));
                        var_29 = ((/* implicit */long long int) max((((max((var_10), (((/* implicit */unsigned long long int) var_3)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((14832608195841716612ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))))))), (((min((((/* implicit */unsigned long long int) arr_29 [i_7] [i_7] [(signed char)6] [i_7])), (2750498281982696343ULL))) != (((/* implicit */unsigned long long int) ((4681305985695948306LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        arr_52 [i_7] [i_7] [(signed char)11] [i_7] [i_7] [i_7] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 4681305985695948289LL)))))) << (((int) ((var_11) ^ (var_11)))));
                        var_30 = ((/* implicit */int) ((((/* implicit */long long int) ((int) (~(arr_29 [21ULL] [i_8] [i_8] [i_8]))))) ^ (((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_29 [i_15] [i_9] [(signed char)0] [17ULL])))) & ((~(var_9)))))));
                        arr_53 [i_7] [3ULL] = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */unsigned long long int) arr_33 [i_9] [i_9] [i_9] [i_9] [i_9])) - (12464917723295995172ULL))) >= (((/* implicit */unsigned long long int) ((1602170272) / (-146556461)))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_16 = 1; i_16 < 10; i_16 += 2) 
    {
        arr_56 [i_16] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)17))));
        arr_57 [i_16 + 1] [2LL] = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_50 [i_16 + 1] [i_16] [i_16 + 1] [i_16]) == (arr_8 [i_16 + 1] [i_16] [i_16]))))));
        arr_58 [i_16 + 1] = ((long long int) ((long long int) var_8));
        /* LoopNest 2 */
        for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            for (int i_18 = 1; i_18 < 8; i_18 += 2) 
            {
                {
                    var_31 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 19250373782862481LL))));
                    arr_63 [i_16 + 1] [i_16 - 1] [8ULL] [i_16] = (+(((146556461) << (((arr_62 [9] [i_17] [9]) - (16309362067430125177ULL))))));
                }
            } 
        } 
        var_32 *= ((signed char) ((var_8) / (arr_39 [i_16] [i_16 + 1] [i_16 + 1] [i_16] [22ULL] [i_16])));
    }
    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((int) 3289823021689672021LL)))) || (((((((/* implicit */_Bool) -693776351)) || (((/* implicit */_Bool) (signed char)0)))) || (((/* implicit */_Bool) 1999928801704939019ULL)))))))));
}
