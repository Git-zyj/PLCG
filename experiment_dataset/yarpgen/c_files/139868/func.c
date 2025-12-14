/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139868
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (-(var_17)))) : (max((4160749568U), (4160749554U)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_0 [i_1]) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_1]))))), (((((/* implicit */_Bool) var_0)) ? (17689091376472420904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(134217736U)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((_Bool) -533572585)))));
        }
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(arr_8 [i_0] [i_0]))) ^ (((((/* implicit */_Bool) 533572585)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11114)))))))) ? ((+(arr_3 [i_2]))) : (757652697237130718ULL))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 395565021)) : (14414907660025896694ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_2) : (var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (2147483647) : (((/* implicit */int) (unsigned char)183))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_6)) ? (17689091376472420904ULL) : (((/* implicit */unsigned long long int) 45916901)))))) : (((/* implicit */unsigned long long int) max((arr_7 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -3596655027473150559LL)) > (5195942569064427592ULL)))))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38183))) : (15236492930744439416ULL))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (var_3))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
        {
            arr_12 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 483627322215366951ULL)) ? (var_2) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535))))))), (min((arr_8 [i_3] [i_0]), (min((var_13), (((/* implicit */unsigned int) var_12))))))));
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (int i_5 = 2; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned int i_6 = 4; i_6 < 16; i_6 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_0] [13U] [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 0ULL)) ? (var_13) : (var_13))));
                            var_22 = ((/* implicit */signed char) var_17);
                            var_23 = ((/* implicit */int) min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) max((arr_20 [i_5] [i_5] [13ULL] [i_5 + 3] [i_5]), (arr_20 [i_5] [i_5] [i_5] [i_5 - 1] [i_5]))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_8] [i_7 + 1] [i_3] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_3] [i_7] [i_8]))))) ? (((/* implicit */int) min(((unsigned short)55444), (((/* implicit */unsigned short) arr_13 [i_3] [i_3] [i_3] [i_3]))))) : (((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */int) arr_13 [i_0] [(short)18] [i_0] [i_0]))))));
                    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -333827318)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 45916880)) ? (arr_20 [(signed char)5] [i_3] [i_3] [16U] [i_3]) : (333827311)))) : (var_3)))) ? (((/* implicit */long long int) min((max((var_9), (((/* implicit */int) (unsigned short)65535)))), (((arr_19 [(signed char)6] [i_0] [i_0] [(unsigned short)15] [i_7] [i_7 + 4] [i_8]) | (((/* implicit */int) arr_21 [i_0] [i_3] [i_0] [(short)9] [i_8]))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) (signed char)124)))))) : (max((((/* implicit */long long int) (_Bool)0)), (arr_23 [i_0] [i_0] [i_0] [i_0]))))));
                }
                arr_28 [i_0] = ((/* implicit */short) ((1748509162U) >= (((/* implicit */unsigned int) ((arr_24 [i_7 + 3] [i_7 - 1] [i_7 + 1]) ? (((/* implicit */int) var_0)) : (((722380811) ^ (2147483647))))))));
                var_25 -= arr_10 [i_7 - 1];
                var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned int) 536870912)), (1697360623U)));
            }
            for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 3) /* same iter space */
            {
                arr_31 [(short)8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)182)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3])) >> (((var_6) - (2316593181U)))))) ? (min((8017360993780149774ULL), (((/* implicit */unsigned long long int) arr_10 [i_0])))) : (((/* implicit */unsigned long long int) ((int) -674199613))))) : (((unsigned long long int) var_12))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (signed char i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        {
                            arr_38 [i_0] [i_3] [i_9] [i_10] [i_11 - 1] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (unsigned short)36060)), (var_7)))));
                            arr_39 [i_3] [i_9] [9ULL] [i_11] = ((/* implicit */int) min((((/* implicit */unsigned int) ((arr_4 [i_0] [i_9 + 3] [i_11 + 1]) || (arr_0 [i_11 - 1])))), (max((var_6), (((/* implicit */unsigned int) var_8))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((-45916899) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)17)) || (((/* implicit */_Bool) (unsigned short)64656)))))))), (var_5)));
            }
            arr_40 [i_0] [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (unsigned char)131))))) - (((var_6) - (var_7))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)45)) ? (-1917127236) : (((/* implicit */int) var_16)))))));
        }
        var_28 = ((/* implicit */unsigned short) 13947243164646572748ULL);
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0]))))) ? (max((var_15), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8191))))))))) ? (((/* implicit */unsigned int) -45916881)) : (var_4))))));
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
    {
        arr_44 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -533572585))));
        /* LoopSeq 2 */
        for (int i_13 = 3; i_13 < 9; i_13 += 2) /* same iter space */
        {
            arr_49 [i_12] [i_12] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4499500909062978861ULL))));
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5830127334826771844ULL)) ? (var_1) : (var_1)));
        }
        for (int i_14 = 3; i_14 < 9; i_14 += 2) /* same iter space */
        {
            arr_52 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 23U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60180))) : (var_2)))));
            var_31 *= ((/* implicit */_Bool) ((8080352173661564563LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_14 - 3] [i_14 - 1] [i_14] [i_14 - 1])))));
            arr_53 [i_12] [i_12] = ((((/* implicit */_Bool) 536870912U)) ? (var_9) : (((/* implicit */int) var_8)));
        }
        var_32 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_36 [i_12] [i_12] [i_12] [i_12] [i_12])) - (var_4)));
    }
    var_33 = ((/* implicit */long long int) var_3);
    var_34 = var_9;
}
