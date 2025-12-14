/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133367
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) arr_0 [i_0 + 1] [i_1]))))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 246342574))) && (((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned char)235)), (246342574))), (min((((/* implicit */int) var_7)), (2015906655))))))));
                                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((short) 246342574))), (min((arr_11 [i_1] [i_0 - 2] [i_2 - 2] [i_3]), (((/* implicit */unsigned int) (unsigned short)36048))))));
                                var_20 = ((/* implicit */short) (+((+(arr_1 [i_2 - 2])))));
                                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                                arr_17 [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)25907)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 2296684116U)) > (var_14))))) : ((~(660917140U)))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_6 [i_0 + 1]), (arr_6 [i_0 + 2]))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (short i_7 = 1; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_13 [i_7] [i_7 + 1] [i_1] [i_7 + 4] [i_7])) ? (var_14) : (((/* implicit */long long int) min((8388352U), (((/* implicit */unsigned int) arr_20 [i_1])))))))));
                                var_23 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_16))))));
                                var_24 = ((/* implicit */unsigned char) (((~(max((0ULL), (((/* implicit */unsigned long long int) 246342574)))))) < (((/* implicit */unsigned long long int) min((arr_26 [i_7 - 1] [i_1] [i_7 + 3] [i_7] [i_1]), (arr_26 [i_7 - 1] [i_1] [i_7 + 3] [i_7 - 1] [i_7]))))));
                                var_25 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36048)))))))) ? (((unsigned int) min((((/* implicit */int) var_4)), (1539135481)))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), ((~(((/* implicit */int) (signed char)124)))))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */long long int) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 3; i_8 < 10; i_8 += 4) 
    {
        for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned int) arr_33 [i_8 + 1] [i_8 - 1] [i_10])), (2314143192U))) : ((-(((((/* implicit */_Bool) arr_13 [i_8] [14LL] [i_8] [i_10] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) : (975916168U)))))));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 13; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) <= (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) + (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_7))))))));
                                arr_40 [i_8] = ((/* implicit */long long int) min((min((min((((/* implicit */unsigned long long int) (signed char)44)), (15867358597497463866ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)247)) && (((/* implicit */_Bool) (short)24722))))))), (((/* implicit */unsigned long long int) var_15))));
                                var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)21823)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (2579385476212087749ULL))) >> (((min((((/* implicit */int) (short)-12045)), (147109689))) + (12079)))));
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (_Bool)1))));
                                var_31 = min((min((arr_22 [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 2]), (var_15))), (((/* implicit */long long int) (-(16)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 3; i_14 < 12; i_14 += 1) 
                        {
                            {
                                arr_47 [i_8] [i_8] = ((/* implicit */short) (~((~(((/* implicit */int) arr_28 [i_8]))))));
                                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_10)))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_10])) & (((/* implicit */int) (unsigned char)75))))) ? (min((((/* implicit */unsigned long long int) var_16)), (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2343806807901856629LL)))))))))));
                                var_33 = ((/* implicit */short) (+(((int) -5387471358300107035LL))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) min((1172077966U), (((/* implicit */unsigned int) (unsigned char)9)))))));
                }
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        var_35 = ((/* implicit */int) (short)17650);
                        arr_54 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) var_13);
                        arr_55 [i_9] [i_8] [i_16] = ((/* implicit */unsigned short) ((_Bool) arr_32 [i_9] [i_15] [i_16]));
                    }
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 0; i_18 < 14; i_18 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
                            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [12ULL] [i_9] [i_9] [i_8 - 3])) ? (((/* implicit */int) arr_49 [i_8] [i_15] [i_15] [i_8 - 3])) : (((/* implicit */int) arr_49 [i_8] [i_8] [i_8] [i_8 + 3])))))));
                        }
                        arr_60 [i_8] [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) (+(268435455LL)));
                        /* LoopSeq 1 */
                        for (short i_19 = 3; i_19 < 13; i_19 += 4) 
                        {
                            var_38 = ((/* implicit */short) arr_62 [i_8] [i_15] [i_19]);
                            var_39 = ((/* implicit */unsigned long long int) var_6);
                            arr_63 [i_8] [i_8] [i_8] [i_8] [i_19 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_8] [i_8] [i_8 + 2] [i_8 + 4] [i_8] [i_19] [i_19 - 1])) ? (var_15) : (var_15)));
                        }
                    }
                    arr_64 [i_8] [i_9] [i_9] = ((((/* implicit */_Bool) arr_39 [i_8 - 3])) ? (((((/* implicit */_Bool) arr_44 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_22 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_15]))) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_8] [i_8] [i_8] [i_8] [i_8 + 3]))));
                    var_40 = ((/* implicit */signed char) 2162701758U);
                }
                var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (var_5)))), ((-(arr_1 [i_8 + 2]))))))));
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_58 [i_8] [i_8] [i_8] [i_8] [i_9] [i_9] [i_8])))))) ? ((+(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) arr_33 [(_Bool)1] [i_9] [i_9]))))));
            }
        } 
    } 
}
