/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156500
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_1 [i_0]));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_6 [i_2]))) / (((/* implicit */long long int) 2890992052U))));
                        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_0] [i_2] [i_2 + 1] [i_1] [i_2]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_14 = ((/* implicit */int) var_9);
            arr_16 [i_0] = ((((unsigned long long int) arr_10 [i_4])) >= (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
            var_15 = ((short) arr_6 [i_4]);
            var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_7)))))));
        }
        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            var_17 = ((/* implicit */int) ((1403975244U) * (((1465117973U) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
            arr_19 [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((arr_14 [i_0] [i_0]) - (1845514023886960109LL)))))) % (arr_6 [i_5 + 1])));
        }
    }
    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        arr_22 [i_6] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_21 [i_6])), (8336458915172202592LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-31)) && ((_Bool)1)))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_6))))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned long long int) arr_26 [i_8] [i_8] [i_6] [i_6])))));
                    }
                    arr_29 [i_8] [i_6] [i_6] = ((/* implicit */long long int) (((-(((/* implicit */int) (short)25632)))) >= (((/* implicit */int) var_2))));
                    var_20 = ((/* implicit */long long int) arr_28 [i_6] [19ULL] [i_7] [i_8]);
                }
            } 
        } 
        arr_30 [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6])) ? (arr_24 [i_6] [i_6] [i_6]) : (arr_24 [9ULL] [i_6] [i_6]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_21 |= ((/* implicit */unsigned long long int) min((((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */int) var_5))))), ((-(772564639U)))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) > (17031660909358627859ULL)))), (min((((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90)))))), (((((/* implicit */_Bool) -3267304387580988676LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))))))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (unsigned int i_12 = 1; i_12 < 11; i_12 += 4) 
            {
                {
                    arr_43 [i_11] [i_10] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_31 [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 3; i_13 < 11; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 2890992052U))) ? (arr_28 [i_10] [i_11] [i_12] [(unsigned char)0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_12])))))))), (((var_1) ? (((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10]))))) : (((/* implicit */unsigned long long int) max((arr_40 [i_10] [i_10] [i_14]), (((/* implicit */int) arr_5 [i_13] [i_13])))))))));
                                var_24 = max((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_12] [i_13 - 2] [i_14])) >> (((((((/* implicit */int) var_7)) << (((887092180U) - (887092161U))))) - (130547694)))))), (((arr_11 [i_12] [i_13] [i_12] [i_13] [i_12]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_47 [1LL] [i_14 - 1] [i_14 + 2] [i_14] [i_14] [i_11] [i_11]))));
                            }
                        } 
                    } 
                    arr_48 [(short)8] [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) arr_35 [i_12 + 1] [i_11] [i_12]));
                }
            } 
        } 
        var_25 = ((((min((((/* implicit */long long int) -1129364495)), (-3105981558811248913LL))) % (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))))))) / (((/* implicit */long long int) (-(((/* implicit */int) (signed char)125))))));
        arr_49 [i_10] [i_10] = ((/* implicit */signed char) ((unsigned char) ((1465117984U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1270834952)) ? (((/* implicit */int) (unsigned char)126)) : (var_4)))))));
    }
    var_26 = ((/* implicit */signed char) var_11);
    var_27 -= ((/* implicit */long long int) var_7);
}
