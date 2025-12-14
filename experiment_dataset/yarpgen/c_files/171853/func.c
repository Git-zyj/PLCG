/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171853
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            arr_5 [i_0] [(unsigned char)6] = ((/* implicit */unsigned int) (~(4090965769669137330LL)));
            var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1 - 1]))));
            arr_6 [7U] = ((unsigned long long int) ((arr_4 [i_1 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))));
        }
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            arr_10 [i_0 - 3] [(unsigned char)4] = min((2905426687650496480ULL), (((/* implicit */unsigned long long int) 4060164189U)));
            var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned char) arr_7 [i_0] [i_2 + 2])), (arr_0 [5U])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0])))));
                var_14 ^= ((/* implicit */short) ((((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_8 [i_0] [i_0 - 4] [i_0 - 1]) : (((/* implicit */long long int) arr_12 [i_0 - 2] [i_0])))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 + 1])) ? (arr_8 [i_0] [i_2] [(_Bool)1]) : (((/* implicit */long long int) arr_12 [i_0] [(unsigned short)11])))) + (7669568567061285456LL)))));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((arr_12 [i_0 + 1] [i_0 - 4]) << (((((((/* implicit */_Bool) arr_13 [i_0] [i_2 + 1] [i_3])) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 2] [i_0 - 2] [(unsigned short)0]))))) - (2931835843U))))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_0]))))))), ((+(max((((/* implicit */unsigned long long int) arr_8 [i_0 - 2] [i_2 + 2] [i_4])), (arr_9 [i_0] [i_0] [i_0])))))));
                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(arr_8 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_13 [i_0] [i_2] [i_4])) : (((/* implicit */int) arr_11 [i_4]))))))))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 3) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(min((arr_4 [i_0 - 1]), (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 + 1]))))))), (min((((/* implicit */unsigned long long int) max((234803107U), (4060164180U)))), (((unsigned long long int) arr_15 [i_0 - 3])))))))));
            arr_19 [i_5] [i_5 + 3] = ((/* implicit */unsigned char) min(((((+(((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3])))) >> ((((+(((/* implicit */int) arr_3 [i_0] [i_0] [12LL])))) - (12055))))), (((/* implicit */int) max((arr_2 [i_0 - 2] [i_0 - 2]), (((/* implicit */short) arr_13 [i_0] [i_5 - 2] [i_0])))))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+((((-(arr_8 [i_0 - 3] [i_5 + 1] [i_5 + 1]))) / (((/* implicit */long long int) min((arr_4 [6ULL]), (((/* implicit */unsigned int) arr_15 [i_0]))))))))))));
        }
        var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_13 [i_0 - 3] [i_0 + 1] [i_0 - 1])) ? (min((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_14 [i_0] [(_Bool)1] [18ULL] [(_Bool)1])))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_11 [i_0])), (arr_12 [i_0] [i_0])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_14 [i_0] [i_0 - 1] [i_0 + 1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0])))))))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (unsigned char i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_12 [i_0] [i_8])), (arr_8 [(_Bool)1] [i_6] [i_6])))), (((unsigned long long int) arr_0 [i_7])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6]))))), (((((/* implicit */int) arr_0 [i_7 - 1])) * (((/* implicit */int) arr_7 [i_6] [i_8 - 1])))))))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_6] [i_0] [i_0] [i_8]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_9 = 4; i_9 < 18; i_9 += 2) /* same iter space */
    {
        var_23 *= ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_2 [i_9] [i_9])) >> (((max((arr_28 [i_9]), (((/* implicit */unsigned int) arr_29 [4ULL])))) - (3013138155U)))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_12 [i_9] [13U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [i_9 - 1] [i_9]))) : (arr_9 [i_9] [12U] [i_9 - 1])))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_27 [i_9])), (arr_16 [i_9] [i_9] [i_9])))) ? (((/* implicit */int) ((_Bool) arr_21 [i_9]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 234803106U))))))) : (((/* implicit */int) arr_24 [i_9 + 1] [i_9 + 1] [i_9]))));
    }
    for (unsigned int i_10 = 4; i_10 < 18; i_10 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_12 = 3; i_12 < 15; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
                    {
                        {
                            arr_44 [i_10] [i_10 - 2] [i_12] [i_10 + 1] [i_10 - 2] [2ULL] = ((/* implicit */unsigned int) min((min(((-(arr_32 [i_10]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_14])) << (((((/* implicit */int) arr_3 [(short)9] [i_11] [i_12])) - (12057)))))))), (min((((/* implicit */unsigned long long int) 234803106U)), (((((/* implicit */_Bool) (unsigned char)0)) ? (14143837812704584868ULL) : (((/* implicit */unsigned long long int) 234803118U))))))));
                            var_25 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (unsigned char)0)), (arr_18 [i_12]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_10 - 4]))) >= (arr_28 [i_12 + 4])))))));
                            var_26 = ((/* implicit */unsigned char) min((((min((-8265937191410083647LL), (((/* implicit */long long int) (unsigned short)24806)))) + (((/* implicit */long long int) 4060164189U)))), (((min((arr_17 [i_10] [i_12] [i_10]), (((/* implicit */long long int) arr_31 [i_10])))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [17U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_10 - 3] [i_10] [i_12]))) : (arr_12 [i_11] [i_11]))))))));
                            arr_45 [i_10 - 3] [(unsigned char)13] [i_10 - 3] [i_12] [i_10 - 3] [i_10 - 3] [i_12] = min((max((((arr_33 [i_14] [i_14]) & (arr_22 [i_10] [i_10]))), (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) 3U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_17 [i_11] [i_12] [i_13]) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10 - 3] [(short)5])))))) != (max((1364943978612334714ULL), (((/* implicit */unsigned long long int) (short)-30296))))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-1LL) & (((/* implicit */long long int) 234803107U))))) ? (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) arr_7 [i_10] [(short)1])), (arr_36 [i_11] [i_11] [i_11])))))) : (((((/* implicit */_Bool) min((arr_33 [i_10 - 2] [i_10 - 2]), (((/* implicit */unsigned long long int) arr_27 [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10 + 1] [i_10]))) : (arr_27 [i_10 - 1])))));
            arr_46 [i_10 - 2] [i_10 - 2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((max((arr_39 [i_10] [i_10] [16U] [(unsigned char)16]), (((/* implicit */unsigned long long int) arr_25 [i_10 - 3] [i_10] [i_10])))) > (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_35 [i_10] [i_10] [i_10])), (arr_17 [i_10] [i_10] [14U]))))))), (max((max((arr_8 [i_10] [i_10 - 1] [i_10]), (((/* implicit */long long int) arr_35 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9])))), (((/* implicit */long long int) max((arr_28 [i_10]), (arr_43 [8U] [i_11] [i_11] [i_11]))))))));
            var_28 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 58486353U)))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_10] [i_10]))) * (arr_23 [i_10] [i_11]))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-13))))) ? (max((arr_9 [i_10 - 1] [i_10] [i_10 - 3]), (((/* implicit */unsigned long long int) arr_36 [i_10] [i_10] [i_11])))) : (((/* implicit */unsigned long long int) min((arr_12 [i_10] [i_10 - 2]), (((/* implicit */unsigned int) arr_42 [18ULL] [18ULL] [i_10])))))))));
        }
        var_29 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_43 [i_10 - 3] [i_10 - 1] [i_10] [i_10]) >> ((((~(((/* implicit */int) arr_0 [i_10])))) + (179)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_10 - 1])) ? (((/* implicit */int) arr_29 [i_10 - 2])) : (((/* implicit */int) arr_42 [i_10 - 4] [i_10 - 4] [i_10]))))), (((((/* implicit */_Bool) arr_16 [i_10 - 3] [i_10] [i_10 - 3])) ? (arr_8 [i_10] [i_10] [i_10]) : (arr_8 [i_10] [i_10] [i_10])))))));
        arr_47 [i_10] = ((/* implicit */unsigned int) ((max((7483008748660079735ULL), (((/* implicit */unsigned long long int) 3U)))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_10 - 1] [i_10 - 4] [i_10 - 4] [i_10] [i_10 - 4] [i_10 - 2])))))));
        arr_48 [i_10] [i_10] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_16 [13ULL] [13ULL] [i_10])) ? (max((arr_22 [i_10] [i_10 + 1]), (((/* implicit */unsigned long long int) arr_36 [i_10] [i_10 - 2] [i_10 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1486938126U)))))))), (min((10963735325049471892ULL), (((/* implicit */unsigned long long int) 4060164189U))))));
        var_30 = ((/* implicit */unsigned int) arr_38 [i_10] [i_10 - 1]);
    }
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */long long int) ((unsigned short) var_10))), (((long long int) var_3)))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_5)) ? (var_0) : (var_3))), (min((var_3), (((/* implicit */unsigned int) var_1)))))))));
}
