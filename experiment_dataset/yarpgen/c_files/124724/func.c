/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124724
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
    var_19 += ((/* implicit */_Bool) -1);
    var_20 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_18)))))), (((int) ((((/* implicit */int) var_14)) + (var_16))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -1)) | (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))) * (((unsigned long long int) 5U))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 6; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */int) arr_5 [i_1] [i_2] [i_3]);
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_22 &= ((((/* implicit */_Bool) ((16061187382199470199ULL) - (2385556691510081413ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26175)) - (((/* implicit */int) arr_13 [i_2] [i_1] [i_2] [i_2] [i_2 - 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) + (16061187382199470206ULL))));
                            arr_15 [i_2] [i_3] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)182)), (((((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 - 1])) % ((+(((/* implicit */int) (unsigned short)49993))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 ^= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_2] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)52719)) : (((/* implicit */int) (unsigned short)65531))))) : (min((3126195715403649565ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                            arr_18 [i_0] [i_1] [i_3] [i_2] [i_3] [i_5] = max((((((/* implicit */_Bool) ((-6705808685275543694LL) | (6705808685275543714LL)))) ? (((/* implicit */int) arr_13 [i_5] [i_3] [i_2] [i_3] [i_0])) : (((/* implicit */int) min((arr_5 [i_1] [i_2] [i_5]), (arr_4 [i_0] [i_1])))))), (((/* implicit */int) ((((2385556691510081405ULL) / (((/* implicit */unsigned long long int) 5U)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))))));
                            arr_19 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) max((((min((-6705808685275543714LL), (((/* implicit */long long int) (unsigned short)15527)))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) (unsigned short)15508))));
                        }
                        for (unsigned short i_6 = 4; i_6 < 6; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_3] [i_3] [i_3 + 2])))), (var_16)));
                            var_25 = ((int) min((((((/* implicit */_Bool) -4728638611483514077LL)) ? (((/* implicit */unsigned long long int) 1)) : (18446744073709551606ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_0] [i_3] [i_1] [i_3] [i_6])))))));
                        }
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1]))));
                        arr_25 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */_Bool) (unsigned short)49995);
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) (+(max((((/* implicit */int) (signed char)-29)), (((arr_9 [i_0] [i_7] [i_1] [i_0]) - (var_16)))))));
                            var_28 *= ((/* implicit */signed char) max((((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) + (arr_0 [i_2]))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_5)))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            {
                                arr_34 [i_0] [i_1] [i_1] [i_2] [i_2] [i_9] [i_10] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_10] [i_1] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (signed char)43)) : (var_4)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (var_16)))) : (max((var_0), (((/* implicit */unsigned int) var_10))))))));
                                arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (+(var_3));
                                arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (signed char)-85)), (arr_24 [i_0] [i_2 + 3] [i_2 + 4] [i_2] [i_2 + 4] [i_2]))) - (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0]))));
                                var_29 = ((/* implicit */unsigned short) max((var_29), (var_11)));
                                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_9 [i_2 - 1] [i_1] [i_0] [i_0])))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 23LL)) ? (arr_21 [i_9] [i_9] [i_2] [i_1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                            }
                        } 
                    } 
                    arr_37 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_16 [i_0] [i_1] [i_2] [i_1] [i_0])))));
                    var_31 &= ((/* implicit */int) 377180428U);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 18; i_11 += 3) 
    {
        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            {
                var_32 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) (-(-1345100993)))) + (18446744073709551588ULL)))));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((377180419U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_11])))))) * (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (4728638611483514076LL)))));
                var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_39 [i_12])))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4471))) != (16LL)))))))));
                var_35 = ((/* implicit */signed char) ((unsigned short) ((_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_40 [i_12] [i_11]))))));
            }
        } 
    } 
}
