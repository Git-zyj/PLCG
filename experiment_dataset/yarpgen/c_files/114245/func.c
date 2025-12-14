/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114245
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_0 - 3] [i_0 - 4] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) var_14)) : (844424930131968LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (arr_12 [i_4 + 1] [i_0 - 3] [i_0 + 2] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) (unsigned char)9))))));
                                var_16 = ((/* implicit */signed char) (~(max(((~(-9168774718725658996LL))), (((/* implicit */long long int) var_10))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), ((~(((844424930131985LL) >> (((661845343) - (661845315)))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_13))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) ((min((((/* implicit */unsigned int) var_0)), (var_12))) != (var_14)))))))));
                                var_20 += (+(((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) var_13)))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */_Bool) arr_1 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) max(((unsigned char)78), (((/* implicit */unsigned char) (_Bool)1))));
                                arr_25 [(unsigned short)9] [i_1] [i_2] [i_7] [i_8] = ((/* implicit */int) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? ((-(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) (unsigned char)255))))))), (min((((long long int) (unsigned char)156)), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)155)))))))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((long long int) (+(((/* implicit */int) var_5))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13359))) : (var_11)))))))))))));
                                var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_8)) / (((/* implicit */int) var_5)))), (var_4)))), (max((((/* implicit */unsigned long long int) (unsigned char)78)), (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10))))))) ? (((844424930131968LL) >> (((max((((/* implicit */unsigned long long int) -2147483641)), (14017701645577396914ULL))) - (18446744071562067971ULL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
}
