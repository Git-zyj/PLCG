/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109797
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    var_17 *= ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10479))) : (9797025410624950583ULL));
                    var_18 *= ((/* implicit */unsigned int) (unsigned short)10479);
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_2 - 2]))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (549755813887LL))))) | (arr_6 [i_1] [i_2 - 1] [i_2] [i_1])))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3 + 1] [i_3] [i_1]))));
                    arr_12 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */signed char) 1357630081U);
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_16 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(arr_3 [i_1])));
                    arr_17 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) arr_2 [i_0])))));
                    arr_18 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_16);
                    arr_19 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_16);
                }
                for (unsigned int i_5 = 3; i_5 < 14; i_5 += 1) 
                {
                    arr_23 [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_5] [i_1] [i_1] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) 2937337215U)) : (min((1937510650579514800ULL), (((/* implicit */unsigned long long int) 1357630081U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_0] [i_0] [i_5 - 1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65510))))))) : (min((9702072012863749238ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17211775785999159673ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U))))))));
                    var_20 &= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_5]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_28 [i_1] [i_5] [i_5] [i_1] [i_5] = ((/* implicit */unsigned short) 10989267328658316498ULL);
                                arr_29 [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_0] [i_1] [i_5] [i_6] [i_7]))));
                                arr_30 [i_1] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) arr_2 [i_7]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_8]))) <= (min((var_2), (((/* implicit */unsigned int) (unsigned short)56309))))))), (((arr_3 [i_0]) ^ (arr_3 [i_5])))));
                        var_22 = ((/* implicit */unsigned short) 1210358220U);
                        var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */long long int) min((var_0), (1357630081U)))) / (min((arr_0 [i_5 + 1]), (arr_0 [i_5 - 3])))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_24 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_9), (var_9))))))) & ((-((((_Bool)1) ? (8649718663084601027ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55056)))))))));
                        arr_35 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_8))))) >= (((/* implicit */int) ((arr_15 [i_1] [i_1] [i_5] [i_9]) <= (((/* implicit */unsigned long long int) arr_20 [i_1]))))))) || (((/* implicit */_Bool) ((signed char) arr_25 [i_0] [i_1] [i_0] [i_0] [i_5 + 2])))));
                    }
                    arr_36 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */signed char) min((min((min((8958517179069106614ULL), (13555296513470968393ULL))), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)10479)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (4294967281U))))));
                }
                arr_37 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(var_2)))), (((((/* implicit */_Bool) (-(arr_24 [i_0] [i_0] [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1])) ? (arr_24 [i_0] [i_1] [i_0] [i_1]) : (10978254857272673449ULL)))))));
            }
        } 
    } 
    var_25 = var_5;
    var_26 = ((/* implicit */unsigned short) var_1);
}
