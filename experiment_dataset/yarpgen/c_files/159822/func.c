/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159822
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((454798998U) ^ (((/* implicit */unsigned int) ((int) -882067991)))));
        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (var_5)))) : (((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) 7896157951072925426LL)))))))));
        var_18 = ((/* implicit */int) ((min((min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_0))), (((/* implicit */long long int) ((int) 536838144U))))) <= (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)4]))) : (1818577363U))))))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_1 [i_0] [(signed char)9]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_20 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned int) -2084633719)) & (465180445U))));
        var_21 &= ((/* implicit */unsigned char) ((short) arr_3 [i_1]));
        var_22 = ((/* implicit */unsigned char) ((long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1])))));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            arr_6 [i_2 + 2] [i_2] [i_2] |= ((/* implicit */int) var_6);
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_23 = ((/* implicit */long long int) arr_2 [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((+(6967451452795560874LL))))))));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (-(var_5))))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 197273028U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))) : (3271713517U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned char i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        {
                            arr_21 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) : (((((/* implicit */_Bool) (unsigned char)219)) ? (arr_4 [i_7] [i_7 - 1] [18U]) : (arr_16 [i_3] [i_3] [i_2 - 1] [i_2] [i_3] [i_6] [i_3])))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_7] [i_7]))));
                            arr_22 [i_1] [i_2 - 1] [(short)4] [i_3] [i_6] [i_7] &= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2 + 1]))) > (1023253778U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (short)-32741)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_2 + 4] [i_3] [i_3] [i_6] [i_2 + 4])))))));
                            var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1] [i_2] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2]))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_7] [i_7 + 1] [i_7] [4U] [i_7 - 2])))));
                            var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(unsigned short)11] [i_2] [(unsigned char)11] [i_2 + 1] [i_2] [i_2] [i_1]))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7 - 2])))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_8])) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_14 [i_8] [i_1] [i_2 - 1] [i_2] [i_2] [i_8])) + (66)))))));
                arr_25 [i_1] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-121)) - (((/* implicit */int) (_Bool)1))));
                var_31 -= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) % (var_11))) >> ((((-(((/* implicit */int) var_6)))) + (21)))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        {
                            var_32 ^= ((/* implicit */unsigned char) ((((int) var_0)) <= (((/* implicit */int) ((short) 903859896U)))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) == (arr_27 [i_10] [i_9] [i_8] [i_2 + 2] [i_1] [i_1])));
                            var_34 = ((/* implicit */long long int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
                var_35 = (!(((/* implicit */_Bool) var_13)));
            }
            for (short i_11 = 2; i_11 < 16; i_11 += 3) 
            {
                var_36 = ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 562675075514368LL)));
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    var_37 = ((/* implicit */int) ((arr_24 [i_2] [i_2] [i_2 + 2]) * (((/* implicit */unsigned int) arr_18 [i_2] [i_2] [i_2 + 2] [i_2 - 2] [i_2 + 2]))));
                    arr_37 [i_12] [i_11 + 3] [i_12] [i_12] = ((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1]);
                    var_38 = ((/* implicit */int) arr_13 [i_2 + 2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 + 4]);
                    arr_38 [i_1] [i_12] [i_11 + 2] [i_11 + 2] [i_11 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-5290)) ? (((int) 2260670128943786626LL)) : (((/* implicit */int) (_Bool)1))));
                    arr_39 [i_1] [i_1] [i_12] [i_1] [i_1] = ((/* implicit */long long int) (short)-1);
                }
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_11])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_20 [i_1] [(unsigned short)1] [(unsigned short)1] [i_13])) : (arr_40 [i_1] [i_1] [i_11 + 2] [(unsigned short)0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_13])))))));
                    var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) (!(((/* implicit */_Bool) -7896157951072925437LL)))))));
                    var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2 + 2] [i_11 - 2] [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) arr_17 [i_2 + 1] [i_11 + 1] [i_13 - 1])) : (arr_10 [i_2 + 2] [i_11 - 1] [i_13 - 1] [i_1]))))));
                }
                /* LoopSeq 2 */
                for (short i_14 = 3; i_14 < 17; i_14 += 4) 
                {
                    var_42 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1] [i_2 - 2] [i_14 - 3])) * (((/* implicit */int) var_2))));
                    var_43 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) -7896157951072925412LL))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_2] [i_1]))) < (var_14))))));
                }
                for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    var_44 = ((/* implicit */int) var_11);
                    var_45 = ((((/* implicit */int) arr_2 [i_2])) <= (((/* implicit */int) (short)8191)));
                }
            }
        }
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_1] [i_1] [i_1] [i_1] [i_1])) & (arr_28 [i_1] [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
    {
        var_47 ^= ((/* implicit */signed char) arr_15 [i_16] [i_16] [i_16] [i_16] [i_16]);
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            for (int i_18 = 0; i_18 < 11; i_18 += 2) 
            {
                {
                    var_48 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_27 [i_16] [i_17] [i_18] [i_17] [i_18] [i_17]))));
                    var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_18] [i_17] [i_16])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 1; i_19 < 7; i_19 += 2) 
                    {
                        for (int i_20 = 0; i_20 < 11; i_20 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) var_8))) != (((((/* implicit */_Bool) (unsigned char)104)) ? (1023253779U) : (var_11)))));
                                arr_63 [i_16] [i_16] [i_16] [i_19] [i_19] = ((/* implicit */short) (!(arr_20 [i_16] [i_17] [i_19 + 4] [i_20])));
                            }
                        } 
                    } 
                    arr_64 [i_17] [10U] = ((/* implicit */signed char) var_9);
                    arr_65 [i_16] [i_17] [i_16] [i_16] = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 15; i_21 += 3) 
    {
        var_51 = ((((/* implicit */int) arr_17 [i_21] [i_21] [i_21])) << (((((/* implicit */int) arr_12 [i_21])) - (14437))));
        /* LoopNest 2 */
        for (signed char i_22 = 1; i_22 < 14; i_22 += 4) 
        {
            for (unsigned int i_23 = 0; i_23 < 15; i_23 += 3) 
            {
                {
                    var_52 &= ((/* implicit */int) var_13);
                    arr_74 [i_21] [i_22 - 1] [i_22 - 1] [i_22] = arr_4 [i_21] [i_22] [i_22];
                }
            } 
        } 
    }
    var_53 &= var_5;
}
