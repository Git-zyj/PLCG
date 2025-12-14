/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144448
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) max((arr_0 [i_0]), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ^ ((~(arr_1 [i_0] [i_0])))))));
                var_20 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))), (min((4294967276U), (((/* implicit */unsigned int) var_15))))))));
                arr_6 [i_0] [i_1] [i_1] = max((((((((/* implicit */long long int) 1632045440U)) / (72057594037923840LL))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7U)))))))), (min((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (short)28079)))), (((arr_4 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) (((~(var_6))) * (((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_1))) ^ (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_4))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967274U), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_0] [i_2] [i_2]))))) ? (((((/* implicit */int) arr_2 [i_2] [i_1] [i_0])) - (((/* implicit */int) (signed char)-9)))) : (min((var_17), (((/* implicit */int) arr_12 [i_3] [i_0] [i_0] [i_4] [i_4]))))));
                                var_22 = ((/* implicit */int) ((((((/* implicit */int) arr_5 [i_2])) == (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) (short)3))))))) || (((/* implicit */_Bool) (~(min((-1892518681), (((/* implicit */int) (_Bool)0)))))))));
                                var_23 = ((/* implicit */unsigned char) arr_5 [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5]))) % (-3959871716712933209LL)))));
        arr_17 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10982))) : (24U)))) ? (max((4278190080U), (((/* implicit */unsigned int) (signed char)12)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) == (((/* implicit */long long int) arr_16 [i_5] [i_5]))))))));
        /* LoopSeq 3 */
        for (unsigned int i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            arr_20 [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_5) >> (((/* implicit */int) arr_19 [i_6])))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65535))))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))))))));
            arr_21 [i_5] = ((/* implicit */unsigned short) var_18);
        }
        for (signed char i_7 = 1; i_7 < 22; i_7 += 2) 
        {
            var_26 = ((/* implicit */short) var_17);
            var_27 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) var_13))), (min((((/* implicit */int) min((arr_23 [i_5] [(signed char)17] [i_5]), (((/* implicit */unsigned char) (_Bool)1))))), (arr_16 [i_5] [i_5])))));
        }
        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                for (unsigned int i_10 = 2; i_10 < 22; i_10 += 3) 
                {
                    for (unsigned int i_11 = 1; i_11 < 23; i_11 += 2) 
                    {
                        {
                            arr_35 [i_5] [i_5] [i_5] [i_10 - 2] [(unsigned char)17] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) == ((~(arr_16 [i_5] [i_11])))))) != (((/* implicit */int) ((unsigned short) min((var_15), (var_7)))))));
                            arr_36 [i_5] [i_8] [i_5] [i_10] [i_5] [i_5] = (~(((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_29 [i_5] [i_5] [i_8] [i_10 - 2]))))))));
                        }
                    } 
                } 
            } 
            var_28 = ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)2694), (((/* implicit */unsigned short) (short)-23369)))))) < (var_6));
            arr_37 [i_5] [i_8] [i_8] = ((/* implicit */unsigned char) max((((short) 2967290429U)), (((/* implicit */short) var_3))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_14))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)4), (((/* implicit */signed char) (_Bool)1)))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57132))) / (4294967295U))))) : (((/* implicit */unsigned int) min((max((-298331221), (arr_16 [i_5] [(signed char)13]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5]))))))))));
        }
        var_30 = ((/* implicit */signed char) (~(((/* implicit */int) ((40U) == (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
        var_31 = ((/* implicit */unsigned int) arr_19 [0LL]);
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
    {
        arr_41 [i_12] = ((/* implicit */unsigned short) var_11);
        /* LoopSeq 2 */
        for (short i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            arr_44 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_12] [i_13])) && (((/* implicit */_Bool) arr_25 [i_12] [i_13]))));
            var_32 = ((((((/* implicit */_Bool) 66060288U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) << (((/* implicit */int) (unsigned short)1)));
            var_33 = ((/* implicit */short) var_6);
            arr_45 [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_43 [i_12]))));
        }
        for (unsigned int i_14 = 1; i_14 < 17; i_14 += 1) 
        {
            var_34 = ((/* implicit */unsigned char) arr_46 [i_14]);
            var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))));
            arr_49 [i_14] [i_14] = ((/* implicit */unsigned int) ((arr_28 [i_12] [i_14 + 2] [i_14 + 2] [i_12]) & (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 2])))));
        }
        arr_50 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) ^ (((((/* implicit */int) (signed char)2)) + (((/* implicit */int) (signed char)1))))));
        /* LoopSeq 1 */
        for (unsigned int i_15 = 1; i_15 < 17; i_15 += 1) 
        {
            var_36 = ((/* implicit */signed char) ((((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) && (((((/* implicit */int) (signed char)99)) != (((/* implicit */int) (unsigned short)3828))))));
            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((4294967289U) >> (((((/* implicit */int) (unsigned short)55471)) - (55465)))))) ? (((((/* implicit */_Bool) (short)-8090)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (1536U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        arr_53 [(unsigned short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (unsigned short)29971)) : (((/* implicit */int) (_Bool)1))));
    }
}
