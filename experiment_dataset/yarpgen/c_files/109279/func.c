/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109279
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
    var_20 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-47)))) ? (((/* implicit */unsigned long long int) var_14)) : (max((var_4), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_6 [0ULL]))))) / (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-21))))))) ? ((+(arr_4 [i_0] [i_1 + 2] [i_2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (2500937716372206838ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))) ? (((/* implicit */unsigned long long int) ((int) (unsigned short)9930))) : (((unsigned long long int) (unsigned char)252)))));
                    var_21 = ((/* implicit */unsigned short) ((_Bool) arr_6 [i_1]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((max((arr_11 [i_2] [(unsigned short)0]), (arr_11 [i_0] [i_1 + 2]))) >> (((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? ((~(591874440))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_3])) && (((/* implicit */_Bool) var_11))))))) + (591874455)))));
                                arr_15 [i_2] [i_1 + 1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) >> (((((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_3 + 1] [i_3 - 2])) ? (var_18) : (arr_4 [i_1 + 1] [i_3 + 1] [i_3 - 2]))) - (15580772066371335771ULL)))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) (signed char)0)), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_11 [i_0] [i_0]))))), (((/* implicit */unsigned int) arr_5 [i_0]))));
                                arr_17 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */long long int) max((((((/* implicit */int) arr_6 [i_3 + 1])) - ((((_Bool)0) ? (230254940) : (((/* implicit */int) arr_6 [i_2])))))), (((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3])) ? (((/* implicit */int) (short)20075)) : (((/* implicit */int) arr_14 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [(signed char)2]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (min((((/* implicit */unsigned int) var_17)), (2153657044U)))))), (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 2]) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) var_0);
    var_25 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) min((12582912U), (var_1)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (((2181431069507584LL) << (((230254940) - (230254932))))))) + (9223372036854775807LL))) << (((((((((/* implicit */int) min((((/* implicit */short) var_0)), (var_9)))) + (2147483647))) << (((((/* implicit */int) var_2)) - (1))))) - (2147473898)))));
}
