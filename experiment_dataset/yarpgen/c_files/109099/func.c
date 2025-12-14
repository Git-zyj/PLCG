/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109099
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(258072895U)))))) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56038)) ? (125857677) : (arr_3 [i_1] [i_1])))) || (((/* implicit */_Bool) (unsigned short)64165)))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2262)) ? (((/* implicit */int) (short)-13233)) : (((/* implicit */int) (unsigned short)165))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) (~(max((min((((/* implicit */long long int) (short)10948)), (arr_7 [i_2]))), (((/* implicit */long long int) (unsigned short)2262))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 3; i_3 < 21; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) (!((((_Bool)1) && (((/* implicit */_Bool) arr_5 [i_2] [i_3 + 1]))))));
            var_20 |= ((/* implicit */unsigned char) ((arr_13 [i_3 + 1] [i_3] [i_3]) ? (((/* implicit */int) (!(arr_13 [i_3 - 2] [i_3] [i_3 + 1])))) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_13 [i_3 + 1] [i_3] [i_3])))))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 19; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned short)43155), (((/* implicit */unsigned short) (_Bool)0))))) || (((/* implicit */_Bool) var_12)))) ? (var_11) : (((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-29402))))) * (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    arr_20 [i_2] [i_2] [i_2] [i_5 + 4] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)5410)) ? (((/* implicit */int) ((((/* implicit */int) (short)-22064)) > (((/* implicit */int) (unsigned char)120))))) : (((/* implicit */int) (unsigned char)106)))));
                }
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((unsigned char)106), (((/* implicit */unsigned char) (_Bool)1)))))));
            }
            for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_30 [i_8] [i_7] [i_2] [i_3] [i_2] = ((/* implicit */int) ((-232255393361125198LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2262)))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_18 [i_2] [0] [i_3] [i_3] [i_8] [i_6]))));
                    }
                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        arr_33 [i_2] = ((/* implicit */unsigned char) (unsigned short)2243);
                        var_24 |= ((/* implicit */unsigned short) ((int) arr_10 [i_2] [i_3 - 3]));
                        var_25 = ((/* implicit */int) ((((/* implicit */int) arr_27 [i_9 - 1] [i_9] [i_9] [i_9 - 3] [i_9] [i_9 + 1])) > (((((/* implicit */_Bool) (short)19095)) ? (-1435299941) : (((/* implicit */int) (unsigned char)62))))));
                        arr_34 [i_9] [i_2] [i_3 - 3] [i_6 + 1] [i_3 - 3] [i_2] [i_2] = ((/* implicit */short) ((unsigned short) -1435299941));
                        var_26 -= ((/* implicit */int) ((unsigned int) var_13));
                    }
                    for (int i_10 = 4; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) var_10);
                        arr_37 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((arr_13 [i_7] [i_3] [i_3]) ? (arr_26 [i_10 - 4] [i_7] [i_3 + 1] [i_3 + 1] [i_3 - 3] [i_3 - 3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6])))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_3 - 3] [i_7])) : (arr_32 [i_2] [i_3] [i_6] [i_7] [i_2]))) : (((/* implicit */int) arr_28 [i_6 - 1] [i_3 + 2])))));
                        var_28 = ((/* implicit */unsigned short) ((((min((((/* implicit */int) arr_36 [i_2] [i_3] [i_6 - 1] [i_7] [i_10])), (1230105590))) == (((((/* implicit */int) arr_31 [i_2])) + (((/* implicit */int) var_15)))))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((max((((/* implicit */int) arr_23 [i_2])), (-46242103))) > (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_23 [i_2])))))))));
                        arr_38 [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */int) ((unsigned char) arr_22 [i_2] [i_3] [i_6 - 1] [i_7]))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2]))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))))))));
                        var_29 = ((((int) ((((/* implicit */int) arr_18 [i_10] [i_2] [i_6 - 1] [i_10] [i_6] [i_2])) == (((/* implicit */int) arr_21 [i_2] [i_2] [i_6 + 1]))))) ^ (max(((~(-717102343))), (((arr_13 [i_10] [i_6] [i_6]) ? (((/* implicit */int) arr_36 [i_10] [i_7] [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_2] [i_7] [i_2])))))));
                    }
                    arr_39 [i_2] = ((/* implicit */long long int) (~((~(arr_26 [i_2] [i_2] [i_3] [i_6 - 1] [i_7] [i_7] [i_7])))));
                    var_30 = ((/* implicit */int) ((((((767344127U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_2] [i_2] [i_2]))))) << (((var_3) - (945940489))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2])))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) var_11);
                        var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) -2086453553)) & (arr_7 [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41162))))) : (max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) -975958131)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_35 [i_2]))))))));
                        var_33 = max(((unsigned short)29632), (((/* implicit */unsigned short) (_Bool)1)));
                    }
                    arr_44 [i_2] [(short)18] [i_6] [i_7] &= ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -115663864)))))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2] [i_3] [i_6] [i_2] [i_7]))) - (338870563U)))))), (var_4)));
                }
                for (int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] [i_13] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_36 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (-3876088226071348736LL)))))), (var_9)));
                        var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) min(((unsigned char)56), ((unsigned char)232)))))));
                    }
                    arr_50 [i_2] [i_3 - 1] [i_6] [i_2] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_22 [i_2] [i_3] [i_6] [i_12])) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_12)))))))));
                    arr_51 [i_12] [i_3 + 1] [i_6 - 1] [i_12] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1984091167)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17427)) || (((/* implicit */_Bool) (short)-21646))))), (4055916757U))) : (((/* implicit */unsigned int) -1506709571))));
                }
                /* vectorizable */
                for (int i_14 = 3; i_14 < 21; i_14 += 3) 
                {
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (((+(((/* implicit */int) var_10)))) >= (((/* implicit */int) ((((/* implicit */int) arr_47 [i_14] [i_6 + 1] [(unsigned short)22] [i_2] [i_2])) >= (var_9)))))))));
                    arr_56 [i_2] [i_3] [i_2] [i_14] = ((/* implicit */_Bool) ((var_12) << (((((1377393167) ^ (((/* implicit */int) arr_13 [i_6] [i_3 + 2] [i_14])))) - (1377393158)))));
                    var_36 |= ((/* implicit */int) arr_41 [i_3 - 1] [i_3 - 1] [i_3 - 1] [(unsigned short)6] [i_6 - 1] [i_14 - 1] [i_14 + 1]);
                    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_45 [i_14 + 1] [i_6 + 1] [i_6 + 1] [i_2] [i_2]))));
                }
                arr_57 [i_2] [i_2] [i_6] [i_2] = ((/* implicit */unsigned short) min((8960068267767508129ULL), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (-1469447740) : (1810568102)))))));
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-21645)) : (((/* implicit */int) (unsigned short)41162))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)120))));
            }
        }
    }
}
