/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181611
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned long long int) max(((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))), (arr_7 [4U] [4U])))))));
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)39244))))) ? (max((((/* implicit */unsigned int) (unsigned char)73)), (188918941U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))))));
                    var_18 = ((/* implicit */int) min((max((((unsigned long long int) (signed char)-1)), (((/* implicit */unsigned long long int) (unsigned char)212)))), (max((max((14072972089328702074ULL), (((/* implicit */unsigned long long int) (short)-27113)))), (((/* implicit */unsigned long long int) ((-1) - (((/* implicit */int) (signed char)-18)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 447688287U)) ? (min((var_11), (((var_11) >> (((arr_6 [i_0] [i_3] [i_0]) - (363496499))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -769223967)))) >= (447688287U))))))))));
                                arr_14 [i_2] [(_Bool)1] [i_2] [(short)17] [i_4] = ((/* implicit */unsigned short) ((signed char) arr_7 [i_0 + 1] [i_3 - 3]));
                                arr_15 [17U] [i_1] [i_2] [17U] [(signed char)5] = min((((((/* implicit */int) ((short) 0))) - (((/* implicit */int) (short)1342)))), ((-(((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)3)))))));
                                var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 447688287U)) ? (3847279020U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))))), (((/* implicit */unsigned int) (signed char)-10))));
                                var_21 = ((signed char) arr_6 [i_0 + 3] [i_0 + 3] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_8 = 2; i_8 < 11; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_6))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)123))))) ? (((/* implicit */int) arr_24 [(short)10] [i_7] [i_8])) : (arr_6 [i_5] [2] [i_7]))))));
                        arr_26 [i_5] [i_6] [i_7] [3ULL] [i_8 - 1] &= arr_6 [i_5] [i_5] [i_5];
                    }
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (14072972089328702078ULL))))));
                        arr_30 [i_5] [(unsigned char)7] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)46818)));
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? (-254519761) : (((/* implicit */int) (signed char)69))));
                            arr_33 [i_10] [i_10] [(unsigned short)10] [i_10] [3U] = ((/* implicit */unsigned char) arr_19 [i_5] [i_7] [(signed char)1]);
                            arr_34 [i_5] [i_6] [i_6] [i_9] [i_7] [i_10] = ((/* implicit */unsigned char) (-(var_8)));
                        }
                        for (unsigned short i_11 = 4; i_11 < 10; i_11 += 1) 
                        {
                            var_26 = var_13;
                            var_27 = ((/* implicit */unsigned char) (-((((+(447688260U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (short)-21453)) : (1338373421))))))));
                        }
                        var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_19 [0ULL] [i_7] [i_9]), ((signed char)-30)))) ? (-16) : (((((/* implicit */_Bool) (unsigned char)123)) ? (211934032) : (-2119367441)))));
                    }
                    arr_37 [i_5] [i_5] [(signed char)10] [3U] = ((/* implicit */unsigned short) arr_11 [i_7]);
                    var_29 = ((/* implicit */signed char) min((1285494681865511373ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)11)) >> (((((/* implicit */int) (unsigned char)142)) - (140))))))));
                    var_30 *= ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_5] [i_5] [i_6] [i_7])) * (((/* implicit */int) max(((short)0), (((/* implicit */short) (signed char)-3)))))));
                }
            } 
        } 
    } 
    var_31 = var_16;
    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((unsigned char) var_11)))));
    /* LoopSeq 4 */
    for (signed char i_12 = 1; i_12 < 9; i_12 += 1) 
    {
        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((arr_18 [i_12]) % (((/* implicit */unsigned int) ((int) arr_16 [i_12 + 1]))))))));
        var_34 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_12] [i_12] [i_12] [i_12])), (-2119367437))))));
    }
    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) arr_1 [i_13] [i_13]))));
        arr_43 [i_13] [i_13] = ((/* implicit */signed char) (unsigned short)9093);
    }
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned char) (unsigned short)9110);
        arr_46 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2119367436)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (14028143582422589028ULL)))) ? (max((((/* implicit */int) arr_11 [i_14])), (((((/* implicit */_Bool) arr_2 [i_14] [i_14])) ? (arr_6 [i_14] [i_14] [3ULL]) : (arr_6 [i_14] [i_14] [i_14]))))) : (((/* implicit */int) arr_12 [i_14] [i_14] [i_14] [i_14] [i_14]))));
    }
    for (unsigned short i_15 = 0; i_15 < 17; i_15 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) (short)-16)))), ((((+(11))) != (((/* implicit */int) min(((signed char)72), (arr_11 [i_15]))))))));
        arr_50 [i_15] = ((/* implicit */short) (+(((int) arr_40 [i_15]))));
        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((signed char) (-(((/* implicit */int) (short)-12))))))));
        var_39 += arr_3 [i_15];
        var_40 = ((/* implicit */int) max((var_8), (((/* implicit */unsigned int) ((signed char) arr_13 [i_15] [i_15] [(signed char)6] [(signed char)6] [i_15] [i_15] [i_15])))));
    }
}
