/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162369
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
    var_16 += ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((unsigned short) var_13));
                                arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (+(((-1687950820) - (-1687950820)))))) : (var_5)));
                                arr_21 [i_0] [i_0] [i_2] [i_1] = arr_14 [i_0] [i_1] [i_2] [i_2];
                                arr_22 [i_5] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned char) ((long long int) var_11)))), (((((/* implicit */_Bool) ((arr_17 [i_0] [i_1]) ? (((/* implicit */long long int) 1369252279U)) : (arr_7 [i_0] [i_1] [i_2] [i_0])))) ? (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) var_0))))) : (max((((/* implicit */long long int) (unsigned char)241)), (var_13)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned short) (+(((var_0) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_2])))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 4; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (max((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)1))))))))), ((+(-7LL)))));
                                arr_27 [i_0] [i_7] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15243)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_7] [i_8]))) : (var_3)))) && (((/* implicit */_Bool) ((-1687950820) + (((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */int) var_7)) : (max((arr_14 [i_2 + 1] [i_0] [i_0 - 1] [i_0]), (((/* implicit */int) var_6))))));
                                arr_28 [i_0] [i_1] [i_2] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0 - 1])) | (((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_8 [i_0 - 1]))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_14 [i_8] [i_8] [i_7 - 3] [i_0 - 1]) : (arr_14 [i_8] [i_8] [i_7 - 3] [i_0 - 1])))), (arr_26 [i_7 - 1] [i_0 - 1]))))));
                                arr_29 [i_0] [i_1] [i_0] [i_7] [i_8] = ((/* implicit */long long int) max((arr_19 [i_0] [i_1] [i_2] [i_7] [i_0]), (max((((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned int) arr_0 [i_7])))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
