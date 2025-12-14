/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14598
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */int) max((var_10), ((+(((/* implicit */int) (((-(((/* implicit */int) (unsigned short)32704)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11073))))))))))));
                    var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    arr_6 [1] [1] [1] [i_2] = ((/* implicit */int) ((signed char) arr_3 [i_0]));
                    var_12 = ((/* implicit */int) ((signed char) ((unsigned short) (unsigned char)169)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) <= (((((/* implicit */int) var_8)) << (((((((/* implicit */int) var_6)) << (((3817201315U) - (3817201312U))))) - (342)))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3] [(signed char)6] [2])) ? (((/* implicit */int) arr_12 [i_3] [i_4])) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)84)))))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_22 [i_6] = ((/* implicit */signed char) var_4);
                                var_15 = ((/* implicit */int) var_1);
                            }
                        } 
                    } 
                } 
                arr_23 [i_3] = (+(((/* implicit */int) ((-1806286962) != (arr_16 [i_4] [i_4] [i_4] [16] [i_3] [i_3])))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    for (int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned int) arr_2 [i_8]);
        var_18 = ((/* implicit */unsigned int) (-((+((-(var_3)))))));
        var_19 = (-(((/* implicit */int) (unsigned short)27584)));
        arr_27 [(signed char)1] [i_8] = max((((/* implicit */int) (unsigned short)22846)), (arr_16 [i_8] [i_8] [i_8] [22] [i_8] [i_8]));
    }
    for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        arr_30 [(unsigned short)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)172)), (var_0))))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_28 [i_9])))))) : (((((/* implicit */_Bool) arr_2 [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_9]))))));
        arr_31 [i_9] = ((/* implicit */int) ((unsigned char) arr_28 [i_9]));
        arr_32 [i_9] [i_9] = ((/* implicit */signed char) min(((-(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_4 [i_9] [i_9] [i_9]))))))), (min((((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) arr_5 [(unsigned short)22] [i_9])) : (((/* implicit */int) var_7)))), (max((var_4), (((/* implicit */int) var_6))))))));
    }
    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        arr_36 [i_10] |= ((/* implicit */int) arr_4 [i_10] [i_10] [i_10]);
        var_20 = ((/* implicit */unsigned short) (-(((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_33 [i_10])) : (171577714U))))));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                arr_44 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (unsigned char)81))))) <= (((/* implicit */int) ((arr_16 [i_10] [(unsigned char)20] [i_11] [i_12] [i_12] [i_11]) != (((/* implicit */int) arr_14 [22] [i_11] [i_10])))))));
                /* LoopSeq 4 */
                for (int i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) arr_24 [i_10]);
                    arr_48 [i_10] [i_11] [i_12] [i_10] = ((((/* implicit */_Bool) ((max((var_4), (((/* implicit */int) var_1)))) + (((/* implicit */int) ((arr_15 [i_10] [i_11] [i_12]) != (((/* implicit */unsigned int) var_5)))))))) ? (((/* implicit */int) (((~(477765996U))) > (((/* implicit */unsigned int) var_9))))) : (((/* implicit */int) var_6)));
                }
                for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                    arr_52 [i_10] [i_11] [i_12] [i_14] [i_12] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_18 [i_14] [i_12] [(unsigned short)21] [7])) << (((((/* implicit */int) arr_18 [i_11] [i_11] [i_12] [i_14])) - (244))))) + (((((/* implicit */_Bool) arr_18 [i_10] [i_11] [i_12] [i_14])) ? (((/* implicit */int) arr_18 [i_10] [i_11] [i_11] [i_14])) : (((/* implicit */int) arr_18 [i_10] [i_10] [i_10] [i_10]))))));
                }
                for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    arr_56 [i_10] = ((/* implicit */signed char) 844931089);
                    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_9 [i_11]))))) | (((int) arr_40 [i_10] [i_11]))));
                }
                for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) arr_50 [i_10])))));
                    /* LoopSeq 1 */
                    for (signed char i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) (unsigned char)45);
                        var_25 ^= ((/* implicit */int) arr_1 [i_11]);
                    }
                    var_26 ^= (~(((/* implicit */int) (signed char)6)));
                }
                /* LoopSeq 1 */
                for (unsigned int i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    var_27 = ((/* implicit */unsigned char) 1392465317U);
                    arr_63 [i_18] [i_11] [i_11] = 3817201310U;
                    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) arr_24 [i_10]))) + (2147483647))) >> (((arr_57 [i_10]) - (686631935))))))));
                }
                var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)169))))))));
            }
            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned int) ((unsigned char) (~(var_4))))))));
        }
    }
}
