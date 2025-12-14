/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153413
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
    var_20 = ((/* implicit */short) (~((~(((/* implicit */int) var_5))))));
    var_21 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) 0ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((signed char) var_17)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_22 -= ((/* implicit */signed char) 5ULL);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_11 [0] [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */long long int) (unsigned short)51822);
                        var_23 = max(((~((-(4294967292U))))), (((/* implicit */unsigned int) (-(-274026088)))));
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) max((max((((/* implicit */long long int) arr_3 [i_0 + 1])), (var_1))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_24 = ((/* implicit */short) ((unsigned char) ((arr_5 [i_2] [i_0] [i_0] [i_1 + 1]) - (arr_5 [i_2] [i_0] [i_0] [i_0]))));
                        arr_13 [i_0] [i_1 + 1] [i_0] [i_3] = ((/* implicit */unsigned int) (~(arr_2 [i_0] [i_0])));
                    }
                    for (unsigned short i_4 = 1; i_4 < 8; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483647)) & (17378412655507512888ULL)));
                        arr_17 [i_0] [i_4] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_10 [i_0 + 1] [i_1 - 2] [i_2] [i_4] [i_4] [i_4]);
                        var_25 = ((((/* implicit */_Bool) (+(max((1055531162664960ULL), (((/* implicit */unsigned long long int) (unsigned char)96))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((3679482004U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) / (max((var_17), (((/* implicit */unsigned long long int) arr_5 [i_4] [i_0] [i_0] [i_0]))))))));
                        var_26 -= ((/* implicit */unsigned long long int) (short)-1);
                    }
                    for (unsigned short i_5 = 2; i_5 < 8; i_5 += 2) 
                    {
                        arr_20 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(2147483647)))), ((((!(((/* implicit */_Bool) var_16)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) <= (var_12)))))))));
                        arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_2] [(short)6]);
                        var_27 = ((/* implicit */unsigned short) max((min((arr_15 [i_5 + 2] [i_1 + 1]), (arr_15 [i_5 + 2] [i_1 + 1]))), (max((arr_15 [i_5 + 1] [i_1 - 2]), (((/* implicit */unsigned long long int) 1910988359))))));
                    }
                    var_28 += ((/* implicit */unsigned char) ((short) (short)6652));
                    arr_22 [(signed char)8] [i_0] = ((/* implicit */unsigned long long int) (signed char)-8);
                }
            } 
        } 
    } 
}
