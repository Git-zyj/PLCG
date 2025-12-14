/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18087
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
    var_17 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) ((min((4095LL), (((/* implicit */long long int) (short)-1)))) >= (((/* implicit */long long int) (+(1770452594U)))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((9882923532981405612ULL) >> (((511U) - (466U))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : ((-(var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (2149074936U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2]))))))));
    }
    for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) var_1)) | (18446744073709551605ULL)))));
        arr_6 [i_1 - 1] = ((/* implicit */_Bool) ((signed char) arr_2 [i_1]));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(var_7))))));
                            var_21 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) >= (arr_3 [i_2] [i_3]))))));
                            var_22 |= ((/* implicit */int) (unsigned char)255);
                            var_23 &= ((/* implicit */int) arr_17 [i_2] [i_4] [i_4] [i_4] [i_6]);
                        }
                        for (unsigned short i_7 = 3; i_7 < 15; i_7 += 3) 
                        {
                            arr_25 [i_5] = ((/* implicit */long long int) -1985840818);
                            arr_26 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_18 [i_2] [i_3] [i_5] [i_5]) ^ (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (_Bool)1))))) ? ((~(404754423))) : (((((/* implicit */int) (unsigned char)107)) ^ ((-2147483647 - 1))))))));
                        }
                        var_24 = ((((_Bool) (unsigned char)148)) || (((_Bool) var_8)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1985840792)))) && (((/* implicit */_Bool) 404754417))));
                var_26 = ((/* implicit */unsigned short) (~((-(18446744073709551615ULL)))));
                arr_30 [i_8] [i_3] [(unsigned short)6] [i_3] = ((/* implicit */_Bool) ((long long int) arr_11 [i_2] [i_3] [i_8]));
                arr_31 [i_8] [i_8] [i_8] [i_3] = ((/* implicit */unsigned int) var_16);
                var_27 = ((/* implicit */long long int) var_11);
            }
            /* vectorizable */
            for (unsigned short i_9 = 1; i_9 < 15; i_9 += 1) 
            {
                arr_36 [i_9] [1U] [i_9] = ((/* implicit */int) ((((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149)))));
                /* LoopSeq 1 */
                for (int i_10 = 2; i_10 < 12; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */short) (-(((/* implicit */int) (signed char)28))));
                        var_29 &= (+(((/* implicit */int) arr_41 [i_11] [(unsigned char)12] [i_11] [i_11] [i_11 - 1] [i_11] [i_11])));
                        var_30 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)149));
                    }
                    for (signed char i_12 = 1; i_12 < 14; i_12 += 2) 
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_16 [i_9] [i_3] [i_9] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_2] [2ULL] [i_2] [i_2]))) : (var_8))) | (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((-404754399) - (((/* implicit */int) var_0)))))));
                    }
                    for (long long int i_13 = 2; i_13 < 12; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-127))))) ? (((/* implicit */long long int) arr_8 [i_2] [i_3])) : (((var_9) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_49 [i_2] [i_3] [i_9] [i_10] [i_13] = ((((/* implicit */_Bool) (unsigned char)106)) ? (((long long int) (unsigned short)26406)) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (986283533)))));
                        var_34 += (unsigned char)153;
                        var_35 += ((/* implicit */unsigned int) ((short) (_Bool)1));
                    }
                    arr_50 [i_9] [(short)2] [i_9] [i_9] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_48 [i_2] [i_9 + 1] [11] [i_10 + 4] [i_10 + 4])));
                }
                arr_51 [i_9] [i_3] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)28)) + (((/* implicit */int) var_11))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_14 = 1; i_14 < 12; i_14 += 2) 
            {
                var_36 -= (~(((((/* implicit */int) (signed char)97)) >> (((((/* implicit */int) (unsigned short)26406)) - (26380))))));
                var_37 *= ((/* implicit */unsigned long long int) (unsigned short)26406);
            }
            for (long long int i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                arr_57 [i_2] [(_Bool)1] [i_2] = 18446744073709551615ULL;
                arr_58 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_56 [i_2] [i_3] [i_15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)63369)))), (((((/* implicit */int) (unsigned char)149)) % (((/* implicit */int) (_Bool)1)))))) & ((-(((/* implicit */int) ((_Bool) -8533425627199301857LL)))))));
            }
            /* LoopNest 3 */
            for (short i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                for (long long int i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        {
                            arr_69 [i_16] [i_18] = ((/* implicit */_Bool) (unsigned short)12);
                            arr_70 [i_18] [i_3] [i_18] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)97)) <= (((/* implicit */int) arr_21 [i_18] [i_17] [i_18] [i_18] [i_2] [i_2])))))));
                            var_38 = ((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) <= (arr_18 [(signed char)5] [i_3] [i_16] [i_18]))))));
                            var_39 = max(((~(3017627074U))), (((/* implicit */unsigned int) arr_60 [i_2])));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_19 = 1; i_19 < 14; i_19 += 4) 
        {
            var_40 = ((/* implicit */unsigned int) ((((var_6) <= (((/* implicit */long long int) ((/* implicit */int) var_16))))) ? ((~(var_1))) : (-6247404197907154359LL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_20 = 2; i_20 < 15; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 1; i_21 < 14; i_21 += 3) 
                {
                    for (unsigned int i_22 = 0; i_22 < 16; i_22 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_74 [i_19 - 1] [i_19 + 1] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_19 - 1] [i_19] [i_19])))));
                            var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7060)))))));
                        }
                    } 
                } 
                var_43 += ((/* implicit */unsigned short) var_16);
            }
            arr_82 [i_2] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_78 [i_2] [i_19 - 1] [i_19])) ? (arr_78 [i_19] [i_19 + 1] [i_19]) : (arr_78 [i_19] [i_19 + 2] [i_19])));
            var_44 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_52 [i_19 - 1] [i_19 + 2] [i_19]))));
        }
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            var_45 = ((/* implicit */_Bool) ((long long int) (signed char)123));
            arr_85 [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_3)) + (((/* implicit */int) arr_73 [i_23 - 1] [i_23 - 1] [i_23 - 1]))))));
        }
        arr_86 [i_2] |= ((/* implicit */int) (~((-(((((/* implicit */_Bool) var_16)) ? (arr_39 [0U] [i_2]) : (arr_22 [(_Bool)1] [2U] [i_2] [i_2] [(unsigned char)12])))))));
        arr_87 [i_2] = ((/* implicit */signed char) 1505430652);
    }
}
