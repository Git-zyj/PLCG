/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175333
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
    var_12 &= var_10;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 -= arr_1 [i_0];
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 8; i_2 += 3) 
            {
                {
                    var_14 = (unsigned char)75;
                    var_15 *= ((/* implicit */unsigned int) var_5);
                    var_16 = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) (unsigned char)1)) ? (4038149201U) : (256818077U)))))));
                    var_17 = ((/* implicit */unsigned char) 77054730U);
                    var_18 *= ((/* implicit */unsigned int) ((unsigned char) 735808149U));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned int) var_0)))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
    {
        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_5))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    var_21 = min((3559159163U), (((/* implicit */unsigned int) (unsigned char)23)));
                    arr_13 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)169)))) ^ (((/* implicit */int) var_8)))));
                    arr_14 [i_3 + 3] [(unsigned char)14] = min((((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_10 [i_4])))), (((((/* implicit */_Bool) arr_12 [(unsigned char)1] [i_4] [(unsigned char)1])) || (((/* implicit */_Bool) (unsigned char)234))))))), ((unsigned char)52));
                    var_22 = (unsigned char)233;
                }
                arr_15 [i_3 + 2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) var_1))) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_11 [i_3] [i_4] [i_4]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3] [(unsigned char)2]))) : (max((min((var_11), (((/* implicit */unsigned int) arr_10 [i_3])))), (((/* implicit */unsigned int) arr_11 [i_3] [i_4] [i_3]))))));
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_24 [i_7] [3U] [i_7] [i_7] [i_4] [i_8] = ((/* implicit */unsigned int) (unsigned char)110);
                                arr_25 [i_4] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 256818094U)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)226))))) ? (((((/* implicit */int) var_0)) >> (((var_7) - (2164218860U))))) : (((/* implicit */int) ((unsigned char) var_6))))), (((/* implicit */int) var_5))));
                                var_23 -= ((/* implicit */unsigned char) (+(arr_8 [i_7])));
                                arr_26 [i_4] [i_4] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_8])) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [0U] [i_6] [i_8])) : (((/* implicit */int) arr_21 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_7] [7U])))) != (((/* implicit */int) var_8))))) : ((+(((/* implicit */int) arr_12 [i_3] [(unsigned char)7] [(unsigned char)14]))))));
                                arr_27 [i_3] [i_3] [i_6] [i_7] [i_8] = max((735808146U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_9 [i_3 - 3])))) ? (((/* implicit */int) max((arr_16 [i_8] [9U] [i_4]), ((unsigned char)144)))) : (((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_22 [i_3] [i_6] [i_6] [i_4 - 1] [i_4 - 1] [(unsigned char)11])) - (48)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 14; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_24 -= var_10;
                                var_25 = max((((unsigned char) var_0)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)35)) || (((/* implicit */_Bool) min(((unsigned char)255), (arr_29 [i_6]))))))));
                            }
                        } 
                    } 
                    arr_33 [i_3] [i_3] [i_6] |= ((/* implicit */unsigned char) min((((((/* implicit */int) ((unsigned char) var_10))) * (((/* implicit */int) ((((/* implicit */int) arr_29 [i_3])) >= (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) arr_19 [i_3 + 2])) : (((/* implicit */int) arr_19 [i_3 + 1]))))));
                    arr_34 [i_3] [(unsigned char)1] = min((arr_10 [i_4]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_10))))) || (((/* implicit */_Bool) var_8))))));
                }
                for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    var_26 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_18 [(unsigned char)7] [i_4] [i_4 - 2] [i_11] [(unsigned char)7])), (max((arr_9 [13U]), (((/* implicit */unsigned int) arr_7 [i_3 - 1])))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_3 + 2] [i_3 + 1] [(unsigned char)7] [i_3] [(unsigned char)7] [i_3])) ? (arr_8 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_3] [i_4])) + (((/* implicit */int) var_10))))) : (var_7)))));
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_11] [(unsigned char)1] [i_11]))))) < (((/* implicit */int) arr_36 [(unsigned char)7] [(unsigned char)7])))))));
                    arr_37 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_10);
                }
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            {
                                arr_47 [i_3] [i_12] [(unsigned char)12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)192)), (256818095U)))) && (((/* implicit */_Bool) (unsigned char)177)))) ? (((/* implicit */int) (unsigned char)225)) : (((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4 + 3] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) var_10))))));
                                var_28 = ((/* implicit */unsigned int) (unsigned char)16);
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)110)) ^ (((((/* implicit */int) arr_40 [i_4] [i_4] [i_14])) * (((/* implicit */int) min(((unsigned char)6), ((unsigned char)186))))))));
                            }
                        } 
                    } 
                    arr_48 [i_3 + 3] &= ((unsigned char) ((((/* implicit */int) arr_46 [i_3] [i_3] [i_3] [(unsigned char)14] [i_3] [i_3])) - (((/* implicit */int) (!(((/* implicit */_Bool) 4294967292U)))))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (var_3)));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_21 [(unsigned char)8] [(unsigned char)8] [i_4] [(unsigned char)4] [i_12])) ? (var_11) : (var_11))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((arr_43 [(unsigned char)11] [i_4] [i_4] [i_4]), (var_5))))))))))));
                }
            }
        } 
    } 
    var_32 *= ((((min((3652834044U), (735808160U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))));
}
