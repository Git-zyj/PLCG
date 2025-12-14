/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126489
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 11)) ? (1119920270) : (-28)))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) var_9)))))) & ((~(((((/* implicit */_Bool) -28)) ? (((/* implicit */int) (unsigned short)7965)) : (1119920249)))))));
    var_20 |= ((/* implicit */unsigned int) ((var_4) >> (((((3667177318U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (3667177296U)))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((unsigned int) -2131058087))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)152)))) ^ (((((((/* implicit */int) (signed char)-96)) + (2147483647))) << (((((/* implicit */int) var_10)) - (2627))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) var_17)) - (169)))))) ? (max((((/* implicit */unsigned int) arr_1 [(_Bool)1])), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)6])) || (((/* implicit */_Bool) (unsigned short)7963)))))))), (((/* implicit */unsigned int) (((_Bool)1) ? (977661305) : (((/* implicit */int) (unsigned short)57570)))))));
        var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_12))))))) - (((((var_11) ? (var_5) : (((/* implicit */unsigned int) arr_1 [i_0])))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (_Bool)1))))))));
        var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((-1) / (1119920246)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-50)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)227)) - (209)))));
    }
    for (short i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((signed char) (_Bool)0)), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) || (((/* implicit */_Bool) -941622099)))))))) ? (((/* implicit */unsigned long long int) max((1119920246), (((/* implicit */int) (_Bool)1))))) : (max(((-(6004584845963960633ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) : (3988927651526830384LL))))))));
                    var_26 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) var_15)))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) ((((long long int) 2131058101)) == (max((((/* implicit */long long int) var_11)), (3599709312794893565LL)))));
                                arr_15 [i_1] = ((/* implicit */_Bool) var_14);
                                arr_16 [i_1] [(unsigned short)3] [i_3 + 2] [i_5] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])) ? (arr_13 [i_5] [i_4] [(unsigned char)5] [(short)12] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [(signed char)4])))))) ? (min((((/* implicit */unsigned int) arr_5 [i_1])), (596217455U))) : (((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))))))));
                            }
                        } 
                    } 
                    arr_17 [i_3 + 2] [i_2 + 2] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
                }
            } 
        } 
        arr_18 [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((unsigned int) var_2))))));
    }
    for (short i_6 = 1; i_6 < 11; i_6 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            for (unsigned int i_8 = 1; i_8 < 11; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 12; i_9 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((_Bool) var_17));
                        arr_29 [i_8] [i_7] [i_8 + 2] [i_6 - 1] = ((((/* implicit */_Bool) ((unsigned short) (((_Bool)1) ? (-1119920249) : (2131058099))))) ? (((/* implicit */unsigned int) max((((659427598) >> (((((/* implicit */int) arr_8 [i_6] [i_7])) - (12605))))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)4431))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2131058094)) && ((_Bool)1))))) : (arr_25 [i_8] [i_8] [0] [i_8]))));
                        var_29 = ((_Bool) (+((-(((/* implicit */int) var_9))))));
                        var_30 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) var_11)) : (var_4))) : (((/* implicit */int) var_9)))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((int) (short)7083)))));
    }
}
