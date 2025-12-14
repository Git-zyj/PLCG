/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152390
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
    var_16 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned short) (signed char)-64);
                    arr_9 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (short)-5891));
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((max((arr_7 [i_1 - 1]), (arr_7 [i_1 + 1]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)45)) != (67108863)))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) max((max(((-(13967392890833543115ULL))), (((/* implicit */unsigned long long int) 3476150688U)))), (max((((unsigned long long int) arr_3 [i_0])), (((/* implicit */unsigned long long int) ((signed char) 16719202633645793870ULL)))))));
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1794428064)))))) : (((((/* implicit */_Bool) (short)-5891)) ? (471380307U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_16 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]);
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(signed char)15] [(signed char)15])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((unsigned short) (_Bool)1)))))) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 1] [i_4]))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) (-(((/* implicit */int) arr_15 [i_0] [i_4] [i_2] [i_4]))))))))));
                        var_20 = ((/* implicit */short) arr_7 [i_2 - 1]);
                    }
                    for (short i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [16ULL] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_19 [i_1])) : (3633332150381155869ULL)));
                        var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) ((signed char) (signed char)63)))), (var_6)));
                        var_23 = ((/* implicit */signed char) ((_Bool) max((arr_19 [i_1]), (((long long int) var_13)))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_13);
}
