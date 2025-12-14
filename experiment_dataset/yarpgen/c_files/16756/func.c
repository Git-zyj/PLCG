/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16756
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((((/* implicit */int) var_5)) - (-220324565))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_18))))))) << (((((/* implicit */int) var_13)) - (7904))))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)61674)) ? (((((arr_1 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61674)) ^ (((/* implicit */int) (unsigned short)5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)3868))))))))))));
        var_21 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)25876))) - (((((/* implicit */_Bool) ((unsigned int) (unsigned short)65533))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_1)))))) : (arr_1 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (3227124834U)));
        arr_4 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */unsigned short) (short)-3615)), (var_2)))), (((((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) (short)-5215))))));
        arr_5 [i_1] = (unsigned short)6;
        var_23 ^= ((/* implicit */unsigned short) var_1);
        arr_6 [i_1] [i_1] = ((/* implicit */int) (unsigned short)65535);
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) ((short) var_17));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6622)) ? (((/* implicit */int) (unsigned short)44224)) : (((/* implicit */int) (short)-19762))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)6643)) >> (((((/* implicit */int) (unsigned short)58884)) - (58857)))));
        }
        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
                        {
                            var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) ^ (((((/* implicit */int) (unsigned short)43711)) << (((3161265948U) - (3161265939U)))))));
                            arr_24 [i_2] [i_7] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) (unsigned short)28638);
                            arr_25 [i_7] = ((/* implicit */unsigned int) arr_13 [i_2] [i_4] [i_4]);
                        }
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6637)) ? (var_4) : (((/* implicit */int) (signed char)-28))))) || (((((/* implicit */int) var_11)) >= (((/* implicit */int) (signed char)-22))))));
                            var_29 ^= ((unsigned short) arr_10 [i_5] [i_4] [i_5]);
                        }
                        arr_29 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_11))));
                        var_30 ^= ((/* implicit */unsigned int) (unsigned char)0);
                    }
                } 
            } 
            arr_30 [i_2] [i_2] [i_2] = ((/* implicit */short) (unsigned short)0);
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                for (unsigned short i_10 = 2; i_10 < 11; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1006632960U)) ? (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_36 [i_9] [i_2] [i_9] [i_2] [i_2])))) : (((((/* implicit */int) arr_11 [i_2] [i_2] [i_9])) >> (((((/* implicit */int) (unsigned short)27594)) - (27583)))))));
                            arr_38 [i_9] [i_10] [i_2] [i_2] [i_4] [i_2] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_10 - 1])) ? (((((/* implicit */_Bool) (unsigned short)33069)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65522)))) : (((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */int) arr_9 [i_9]))))));
                            arr_39 [i_9] = ((/* implicit */short) var_10);
                            var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_9] [i_10] [i_10] [i_10])) < (((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */int) (unsigned short)54979)) : (((/* implicit */int) (short)31497))))));
                            var_33 ^= ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_16))))) : (arr_1 [i_2]));
                        }
                    } 
                } 
            } 
        }
        arr_40 [i_2] = ((/* implicit */int) (short)32767);
        var_34 = ((/* implicit */int) max((var_34), (((var_0) + (((/* implicit */int) ((short) 2290882044U)))))));
        arr_41 [i_2] = ((/* implicit */short) var_5);
    }
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
    {
        for (unsigned short i_13 = 2; i_13 < 13; i_13 += 2) 
        {
            {
                arr_46 [i_13 + 2] [i_12] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)29307)), (((unsigned int) (unsigned short)2))));
                var_35 ^= (unsigned short)0;
                var_36 = ((short) ((((((/* implicit */int) arr_42 [i_13 + 2] [i_13 - 2])) + (2147483647))) << (((((/* implicit */int) (unsigned short)65522)) - (65522)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    var_37 = (unsigned short)48599;
                    var_38 = (signed char)16;
                    arr_49 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2640300701U)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (var_14) : (((/* implicit */int) arr_45 [i_13 - 1]))));
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */int) (short)10491)) - (((/* implicit */int) var_10)))))));
                }
                for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    var_40 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)65533)), (min((((/* implicit */unsigned int) (short)-3615)), (var_17)))));
                    arr_52 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) var_1)) + (20552)))))) : (((((/* implicit */_Bool) var_11)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) == (3227124834U)))))))));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 15; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        {
                            arr_58 [i_16] [i_16] [i_16] [i_13 - 2] [i_12] [i_12] = ((/* implicit */signed char) ((unsigned int) (unsigned short)40134));
                            arr_59 [i_12] [i_12] [i_17] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_12] [i_13])) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) min(((unsigned char)255), ((unsigned char)15))))))), (min((min((4294967278U), (((/* implicit */unsigned int) (unsigned short)10)))), (((/* implicit */unsigned int) min(((unsigned short)55444), (((/* implicit */unsigned short) var_18)))))))));
                            arr_60 [i_17] = ((/* implicit */unsigned short) max((((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-3589))) < (arr_54 [i_12] [i_17]))), (((3673552431U) < (72408317U)))))), (((short) var_18))));
                        }
                    } 
                } 
            }
        } 
    } 
}
