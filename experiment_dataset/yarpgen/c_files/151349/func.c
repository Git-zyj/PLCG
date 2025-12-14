/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151349
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
    var_20 = ((/* implicit */int) (!(((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && ((_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) max((arr_8 [i_1] [0U]), (arr_8 [i_1] [6])))))));
                                var_22 = (!(((/* implicit */_Bool) var_2)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((var_3) == (((/* implicit */int) arr_3 [(_Bool)1] [i_1 - 1]))));
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (unsigned short)20385))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */long long int) -791272106)))))) : (((var_12) ^ (((/* implicit */long long int) -791272101)))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                    {
                        var_25 = var_9;
                        arr_25 [i_8] [i_8] [i_6] [i_8] [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_14 [i_6 + 4] [i_7 - 1])) ? (arr_14 [i_6 + 4] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-127)))))));
                        arr_26 [i_8] = ((/* implicit */signed char) var_2);
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) arr_19 [i_6] [i_6 + 1] [6] [i_7 + 1])))) : (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) arr_12 [i_7] [i_7 - 1] [i_7] [i_8] [i_8] [i_8] [i_7])) : (((/* implicit */int) arr_12 [12ULL] [i_7 + 2] [(signed char)11] [i_8] [(unsigned short)3] [(signed char)5] [i_8]))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) arr_24 [i_5] [i_6] [7ULL] [i_5]);
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)13617))));
                        var_29 = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_19)), (((((/* implicit */_Bool) var_1)) ? (4669706275366616446LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)34)))))))) ? (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34609))) <= (3355829083U)))), ((signed char)7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (791272107) : (((/* implicit */int) (signed char)-35)))))))));
                        var_30 = ((/* implicit */unsigned int) var_7);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                    {
                        var_31 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-8)) ? (791272129) : (((/* implicit */int) (signed char)109))))) - (max((var_7), (((/* implicit */unsigned long long int) arr_1 [i_7 + 1] [i_6 - 1])))));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
                        {
                            arr_33 [i_5] [i_6 + 2] [i_7 + 2] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_6 + 2] [i_7 + 2])) != (((/* implicit */int) (signed char)-8)))) ? ((+(((/* implicit */int) arr_0 [i_6 - 1] [i_7 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6 + 3] [i_7 + 2])))))));
                            arr_34 [i_5] [(unsigned short)7] [(unsigned short)7] [i_10] [i_11] [i_7] [i_7 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8225))));
                            arr_35 [5U] [5U] [i_10] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (unsigned char)162)) ? (((((/* implicit */int) arr_4 [i_5] [i_10] [(signed char)0] [16])) << (0U))) : ((+(((/* implicit */int) (signed char)-121)))))));
                            arr_36 [i_6] [i_6 + 1] = ((/* implicit */unsigned short) ((unsigned int) max(((+(var_7))), (((/* implicit */unsigned long long int) max((arr_8 [i_5] [2]), (((/* implicit */unsigned char) var_1))))))));
                        }
                        for (long long int i_12 = 1; i_12 < 10; i_12 += 4) /* same iter space */
                        {
                            var_32 -= ((((/* implicit */_Bool) max(((+(791272084))), (-791272101)))) ? ((-(max((((/* implicit */unsigned long long int) var_8)), (var_17))))) : (((/* implicit */unsigned long long int) max((-791272107), (((/* implicit */int) min(((unsigned short)62481), (((/* implicit */unsigned short) (signed char)112)))))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (9223372036854775791LL)));
                            var_34 = ((/* implicit */int) (signed char)109);
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)114)))))));
                        }
                        var_36 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) 791272119)) ? (((/* implicit */int) (short)-12732)) : (791272099)))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)-124)), (((unsigned char) 791272090))));
                        arr_45 [i_5] [i_13] = min((((((/* implicit */_Bool) arr_12 [(short)13] [i_5] [i_7] [i_7] [1U] [16U] [i_7])) ? (65535ULL) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (-(var_12)))));
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_22 [i_5] [i_6] [i_7] [(unsigned short)8])), (var_2))))));
                    }
                    var_39 = ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) (signed char)-115)))) : (((/* implicit */int) ((unsigned char) ((var_2) << (((var_7) - (4548899101949909798ULL))))))));
                }
            } 
        } 
    } 
}
