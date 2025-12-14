/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118920
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 4])) - (((/* implicit */int) (short)1356)))), (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 3])) & (((/* implicit */int) arr_2 [i_0 + 2]))))));
        var_15 = ((/* implicit */short) ((((unsigned long long int) var_11)) << (((4185097956U) - (4185097941U)))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) : (109869350U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) min((((unsigned int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 1123599972970128086ULL)) ? (var_1) : (arr_6 [i_2] [i_2] [i_2]))) : (((/* implicit */int) ((unsigned short) 967843104U))))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_2 [i_0 + 2]))));
                    var_18 = ((/* implicit */int) arr_4 [i_0 + 4] [i_1] [i_0 + 4]);
                }
            } 
        } 
    }
    for (short i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_9 [i_3] [i_3]) <= (((((/* implicit */_Bool) (short)10068)) ? (((/* implicit */int) arr_5 [(short)6] [(short)6])) : (var_1)))))) % (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_12 [i_3]))) >= ((+(var_1))))))));
        var_20 = ((/* implicit */unsigned char) min((max((arr_8 [17ULL] [i_3 + 4]), (((/* implicit */unsigned int) arr_2 [i_3 + 4])))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_6 [i_3 + 1] [i_3 + 1] [i_3])) == (min((arr_8 [i_3] [i_3]), (((/* implicit */unsigned int) 1189139174)))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_11 [i_3 + 4])) ? (arr_11 [i_3 - 1]) : (arr_11 [i_3 + 4]))) : (((/* implicit */unsigned int) ((arr_6 [i_3] [i_3] [i_3 + 2]) / (arr_6 [i_3] [i_3] [i_3 + 4]))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 24; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 24; i_7 += 4) 
                    {
                        for (short i_8 = 2; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */short) ((arr_22 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2]) == (arr_25 [i_7] [(unsigned char)21] [i_7] [i_7] [i_7 + 1])));
                                var_23 = ((/* implicit */unsigned short) ((arr_26 [i_4] [i_4] [(short)11] [i_5 - 1] [i_8]) * (arr_26 [i_6] [i_5] [i_6] [i_5 - 1] [i_8])));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((4185097946U) >= (3327124191U)));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) 8388607))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_23 [i_4] [i_4] [i_4] [i_4]))));
        var_27 = ((/* implicit */unsigned int) (unsigned short)58411);
    }
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((((/* implicit */_Bool) 3902972354U)) ? (((unsigned long long int) (short)-10094)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-9543)) || (((/* implicit */_Bool) (short)-2933)))))))) >> (((((/* implicit */int) (unsigned short)65535)) - (65478))))))));
        var_29 += ((short) max((((/* implicit */short) var_4)), (min((((/* implicit */short) (unsigned char)104)), ((short)-1)))));
    }
}
