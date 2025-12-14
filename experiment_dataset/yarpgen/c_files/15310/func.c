/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15310
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
    var_14 = ((/* implicit */_Bool) max((var_3), (((/* implicit */int) (unsigned short)0))));
    var_15 = ((/* implicit */long long int) var_2);
    var_16 = var_10;
    var_17 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_18 = ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0 + 2] [i_0 + 1]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) arr_3 [i_0 + 2] [i_0 + 1]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_2] [i_2] [i_2 + 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (signed char)127)))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) (+(((arr_0 [i_0 - 1]) * (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 2; i_5 < 7; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_1 [i_3 - 3] [9])), (arr_11 [i_3 + 2] [i_3])))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 - 1])), (arr_0 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_0 [5])) ? (arr_2 [(unsigned char)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4])))))))));
                        var_23 = ((/* implicit */_Bool) arr_11 [i_3] [i_3]);
                        var_24 = ((/* implicit */unsigned int) (short)-17442);
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [i_0 + 2] [i_5 - 2] [i_4] [i_5 + 1])), (var_2)))) ? (-611006726) : (((/* implicit */int) ((unsigned short) (((_Bool)1) && (((/* implicit */_Bool) 1161615181U)))))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_4] [i_3] [i_4] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(unsigned short)1] [i_6] [i_4] [i_4] [i_0] [i_0]))) <= (arr_15 [i_3] [9ULL] [i_0] [9U]))) || (((/* implicit */_Bool) ((2754115535U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41746))))))));
                        var_26 = ((/* implicit */short) arr_13 [i_0] [i_3 + 2] [i_4] [(unsigned short)1]);
                        var_27 &= ((/* implicit */_Bool) (~(2997557133U)));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6] [i_0]))))))))));
                    }
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (_Bool)1))));
                        var_30 = ((/* implicit */unsigned int) arr_11 [i_0 + 1] [i_3]);
                        var_31 = ((/* implicit */_Bool) (unsigned char)198);
                        var_32 = ((/* implicit */short) var_0);
                        var_33 &= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_23 [i_0] [i_0] [i_3 - 1] [i_0] [(unsigned char)1] [i_7])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51407))) : (arr_0 [i_0 + 1])))));
                    }
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) || ((_Bool)1))) ? (((/* implicit */int) min((arr_25 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_3 - 1] [i_3 - 3] [i_3]), (arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_3 + 2] [i_0 + 2] [i_8])))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 0))))))))))));
                        var_35 = (i_3 % 2 == 0) ? (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */int) arr_24 [i_0 - 1] [i_0 - 1] [i_4] [0] [(unsigned short)4] [i_0 - 1])) * (((/* implicit */int) var_13)))) << (((arr_22 [i_4] [i_3] [i_4]) - (1269399367U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_3 - 2] [i_4] [i_4] [i_8] [i_8])) ? (((/* implicit */int) var_5)) : (var_3)))) ? (((/* implicit */long long int) min((2707477797U), (((/* implicit */unsigned int) (unsigned char)189))))) : (((var_10) ? (((/* implicit */long long int) arr_15 [i_8] [i_8] [i_0] [i_8])) : (arr_4 [i_0])))))))) : (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */int) arr_24 [i_0 - 1] [i_0 - 1] [i_4] [0] [(unsigned short)4] [i_0 - 1])) * (((/* implicit */int) var_13)))) << (((((arr_22 [i_4] [i_3] [i_4]) - (1269399367U))) - (3717938630U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_3 - 2] [i_4] [i_4] [i_8] [i_8])) ? (((/* implicit */int) var_5)) : (var_3)))) ? (((/* implicit */long long int) min((2707477797U), (((/* implicit */unsigned int) (unsigned char)189))))) : (((var_10) ? (((/* implicit */long long int) arr_15 [i_8] [i_8] [i_0] [i_8])) : (arr_4 [i_0]))))))));
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((arr_4 [i_0 + 1]) - (arr_4 [i_0 - 1]))) <= (arr_4 [i_0 - 1]))))));
                        var_37 = ((/* implicit */unsigned int) max((var_37), ((-(max((((/* implicit */unsigned int) var_10)), (arr_22 [i_8] [i_4] [i_4])))))));
                        arr_28 [i_3] [i_4] [i_3 - 3] [i_3 - 3] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_11 [i_0] [i_3])))) * (((/* implicit */int) min(((unsigned short)41751), (((/* implicit */unsigned short) var_8)))))))), (((max((((/* implicit */long long int) (_Bool)1)), (arr_4 [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
    }
}
