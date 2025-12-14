/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181708
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
    var_14 = ((/* implicit */_Bool) (unsigned char)5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) arr_4 [i_0]))))) != (arr_6 [i_0] [i_0] [i_0] [i_1])));
                    arr_8 [i_2] [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_16 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(362858832U)))) : (((unsigned long long int) var_2))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_11 [i_3]))))));
                            var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (_Bool)1))))));
                            var_18 = ((/* implicit */unsigned char) 1081329262633648108ULL);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 4294967284U)) : (12062432556870358452ULL))), (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 3290633667U)))))), (var_0)));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_3]))));
                            var_20 = ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_3] [i_3] [i_5])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (min((((/* implicit */long long int) var_2)), (var_10))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) (((-(var_10))) < (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))))))))));
                            arr_18 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_3])) << (((((((/* implicit */_Bool) max(((unsigned char)208), ((unsigned char)117)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_1])), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */int) (unsigned char)152)) + (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_0] [i_0])))))) - (74)))));
                        }
                        arr_19 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) var_2)) << (((/* implicit */int) arr_0 [i_0]))))));
                    }
                    for (unsigned char i_6 = 3; i_6 < 14; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_12 [i_0] [i_0] [i_0] [i_6 - 3] [i_0]), (arr_12 [i_2] [i_2] [i_6] [i_6 - 3] [i_0])))), (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (17365414811075903501ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_2])))))));
                        var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)6))));
                    }
                }
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? ((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((6800001764806531072ULL) < (18446744073709551615ULL))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_25 [i_7] [i_7])) > (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 6384311516839193173ULL))))))));
        arr_27 [i_7] = max((((((/* implicit */_Bool) (unsigned char)208)) && (var_9))), (((arr_24 [i_7]) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_7] [i_7])) % (((/* implicit */int) (unsigned char)155))))))));
        arr_28 [i_7] &= ((/* implicit */unsigned int) max((arr_23 [i_7] [i_7]), (((4872048706167062446ULL) <= (((/* implicit */unsigned long long int) 3001018148U))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
    {
        var_24 &= ((/* implicit */long long int) ((_Bool) ((arr_24 [i_8]) > (arr_31 [i_8] [i_8]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_25 = (!(((/* implicit */_Bool) arr_30 [i_8] [i_8])));
            var_26 = ((((/* implicit */unsigned long long int) ((arr_29 [i_8]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_34 [i_8] [i_8]))))) ^ (((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? (4093715227052217837ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_8]))))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) arr_35 [i_8]);
                arr_39 [i_8] [i_8] [(_Bool)1] [i_8] &= ((/* implicit */long long int) arr_34 [i_8] [i_8]);
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(18ULL)))) ? (((var_11) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9] [i_9]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned char)57)))))));
                            arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) -634790197909952375LL);
                        }
                    } 
                } 
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_48 [i_8] [i_13] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_45 [i_13] [i_13])) >> (((var_1) + (5621206172130119493LL))))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (-((+(((/* implicit */int) var_6)))))))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((arr_24 [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [(_Bool)1] [i_13]))))))));
            var_31 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_32 [(signed char)6])) ^ (((/* implicit */int) (unsigned char)164))));
            var_32 &= ((/* implicit */long long int) arr_46 [16LL] [16LL]);
        }
        for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                for (long long int i_16 = 2; i_16 < 15; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 1; i_17 < 15; i_17 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) arr_36 [i_8] [i_8] [i_8] [i_8]);
                            arr_62 [i_17 - 1] [i_16] [i_8] [i_8] [i_16] [i_8] &= ((/* implicit */long long int) arr_42 [i_15]);
                            var_34 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_46 [i_15] [i_15])) ^ (((/* implicit */int) var_7)))) >= (((/* implicit */int) arr_50 [i_15] [i_15] [i_15 + 1]))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */signed char) ((((arr_31 [i_8] [i_8]) + (((/* implicit */unsigned long long int) arr_51 [i_14] [i_8] [i_8])))) <= (((6384311516839193193ULL) ^ (((/* implicit */unsigned long long int) arr_56 [i_14] [i_8] [i_8] [i_8]))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_18 = 2; i_18 < 12; i_18 += 4) 
    {
        for (unsigned long long int i_19 = 1; i_19 < 12; i_19 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    for (unsigned int i_21 = 0; i_21 < 13; i_21 += 2) 
                    {
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_36 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_21])) ? (((((/* implicit */_Bool) (signed char)1)) ? (1081329262633648139ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))))) : (((/* implicit */unsigned long long int) arr_30 [i_20 + 1] [i_19]))));
                                var_37 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_45 [i_21] [i_21])) > (((/* implicit */int) arr_45 [i_21] [i_21])))));
                                var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (max((arr_66 [i_18] [i_18] [i_18]), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_16 [i_18] [i_18] [i_18] [i_18] [i_22] [i_18])))))))) > (min((((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_21]))) : (17365414811075903507ULL))), (max((17365414811075903477ULL), (14737211711718802569ULL)))))));
                                arr_75 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_21] [i_18])) << (((((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_20 + 1] [i_20] [i_20 + 1]))))) - (18446744073709551416ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (long long int i_24 = 0; i_24 < 13; i_24 += 2) 
                    {
                        {
                            arr_82 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (+((~(((3044644084U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                            var_39 = ((/* implicit */unsigned char) max((min((arr_24 [i_24]), ((~(arr_21 [i_18] [i_18] [i_23] [i_23] [i_18]))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((arr_49 [i_18] [i_18] [i_18]) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_24] [i_24]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_23] [i_24])))))));
                            var_40 = ((/* implicit */unsigned int) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
}
