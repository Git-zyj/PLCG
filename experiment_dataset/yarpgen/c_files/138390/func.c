/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138390
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-1)), ((short)-32758)));
                var_18 = ((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_1]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
                var_19 = ((/* implicit */long long int) var_0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_20 = arr_0 [i_3 + 1] [i_3 + 1];
                    var_21 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_12 [i_3] [i_3] [(unsigned char)4] [i_4]))))))));
                    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) min(((signed char)-117), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)41319)) || (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) (unsigned short)41319)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_12))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_3 + 1]))))))));
                    var_23 = ((/* implicit */unsigned short) arr_0 [i_2] [i_2]);
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3] [i_3 + 1] [i_3])) ? (arr_3 [i_3 + 1] [i_3 - 1] [i_5]) : (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (13162568112558546154ULL)))));
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_4))));
                                var_26 |= ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_7] [0ULL] [i_7])) > (((/* implicit */int) arr_17 [i_3 + 1] [i_3 + 1] [i_2] [i_3] [i_3] [i_2]))));
                                var_27 |= ((/* implicit */unsigned short) ((unsigned char) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1]));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (5284175961151005462ULL)));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((_Bool) var_15)))));
                }
                for (short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3] [i_3] [i_3]);
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_3 + 1])) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_23 [i_3 + 1])) | (((/* implicit */int) arr_23 [i_3 - 1]))))));
                }
                var_32 = max((min((((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_18 [i_2] [i_2] [(short)11] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) var_5)));
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max(((signed char)1), (((/* implicit */signed char) (_Bool)0)))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5284175961151005461ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32761)))))) > (var_14))))));
    var_34 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned long long int) var_10)), (14510454559043372813ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) 12487927362757105410ULL)))));
}
