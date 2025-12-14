/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183063
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
    var_12 |= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (var_9)))) <= (var_8)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (unsigned short)65535))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_14 += ((/* implicit */unsigned short) ((max((-19LL), (max((((/* implicit */long long int) var_5)), (-19LL))))) / (((7LL) % (((/* implicit */long long int) arr_5 [(_Bool)1]))))));
            var_15 ^= (((-2147483647 - 1)) & (((/* implicit */int) (unsigned char)30)));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_16 += ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((arr_4 [i_2 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                        arr_15 [i_0] [i_1] [(short)6] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)245), ((unsigned char)212)))) && ((!(((/* implicit */_Bool) var_3)))))))) : (0ULL));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */int) max((min(((-(var_3))), (var_7))), (min((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_2] [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) var_11)))), (var_7)))));
                            var_18 = ((/* implicit */short) max((var_8), (((/* implicit */unsigned long long int) (short)29699))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (arr_19 [8]) : (((/* implicit */int) var_1)))), ((-(((/* implicit */int) (unsigned short)5151))))))) ? ((+(((/* implicit */int) var_2)))) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_0)))) + (((/* implicit */int) var_5)))))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32766)) / (((/* implicit */int) (unsigned char)212))))))))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64566)) << (((((/* implicit */int) (unsigned char)48)) - (35))))))));
                            var_22 ^= ((/* implicit */int) 3U);
                            var_23 += ((/* implicit */int) (short)-32767);
                            var_24 = ((/* implicit */unsigned short) max((var_24), (var_10)));
                            arr_23 [i_0] [i_1] [i_2] [i_0] [i_1] [(unsigned char)2] [i_0] = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned short)19623)))));
                        }
                    }
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_7]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)64566))))));
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_7 [6]))) ? (((arr_27 [i_10] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) (short)21905))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                            var_27 *= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_19 [i_8])), (7170993579104804823LL))), (((/* implicit */long long int) ((arr_19 [i_0]) >= (arr_19 [i_0]))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_24 [(unsigned char)10] [i_8] [(unsigned char)4])))) + ((+(1023))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21925))) ^ (((var_8) >> (((arr_8 [10ULL] [i_7] [10ULL] [i_12]) + (2441489484841004484LL))))))) & (min((var_3), (((/* implicit */unsigned long long int) (unsigned short)64546)))))))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_31 [i_13] [(short)10] [i_7] [i_7] [i_7])), (((((/* implicit */_Bool) var_5)) ? (arr_29 [i_0]) : (arr_30 [i_13] [i_13] [i_13]))))))))));
                            var_31 = var_9;
                            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_24 [i_12] [i_7] [i_0])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10))))) << (((((/* implicit */int) (unsigned short)60385)) - (60373)))));
                            arr_43 [i_0] [i_0] [i_11] [i_0] [i_0] = arr_0 [i_0];
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11)));
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) var_5))));
                            var_36 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-11)) > (((/* implicit */int) (short)28829)))))));
                        }
                        for (unsigned short i_15 = 1; i_15 < 10; i_15 += 3) 
                        {
                            var_37 *= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)64546))))), (((((/* implicit */_Bool) -7170993579104804824LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [(unsigned char)2] [i_11] [i_0] [(unsigned char)2]))) : (var_8))))) * (((/* implicit */unsigned long long int) max((min((arr_0 [i_0]), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((unsigned short) arr_20 [i_0] [i_7]))))))));
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (max((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 1193872254456082589ULL))))), ((-(var_9))))) : (((/* implicit */int) var_2)))))));
                            var_39 = ((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned short) var_4))));
                            var_40 += ((((/* implicit */_Bool) (short)28829)) ? (1193872254456082601ULL) : (((/* implicit */unsigned long long int) 2653690981562896566LL)));
                            var_41 ^= ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (short)31263)))), (-222310279)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_5)), (arr_47 [i_12]))) < (((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */long long int) arr_22 [i_0] [i_7] [i_11] [i_12] [i_15]))))))))) : (((((/* implicit */_Bool) (short)25078)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_7] [i_11] [i_7] [(short)4]))) : (var_7))) : (max((((/* implicit */unsigned long long int) (unsigned short)3)), (var_3)))))));
                        }
                        var_42 |= ((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)3))) ? (max(((-(var_8))), (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [(unsigned char)4] [i_7] [i_11] [(unsigned char)3]))))))));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_10 [i_7] [i_7] [i_7] [i_0]), (arr_10 [i_7] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_7] [i_7])) << (((((/* implicit */int) arr_10 [i_0] [i_7] [0U] [i_7])) - (26071)))))) : (max((((/* implicit */long long int) (unsigned short)22606)), (var_11)))));
        }
    }
    for (signed char i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) min((-9223372036854775799LL), (((/* implicit */long long int) (unsigned char)255)))))));
        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) var_8))));
        var_46 = ((/* implicit */long long int) ((((((long long int) 3122715818178932359LL)) > (((/* implicit */long long int) ((/* implicit */int) (short)-21908))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_16])) * (((/* implicit */int) arr_49 [i_16])))))));
    }
    var_47 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (-4992856711105036221LL)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) (+(((/* implicit */int) var_5))))))));
}
