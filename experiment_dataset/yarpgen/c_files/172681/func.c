/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172681
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
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)(-127 - 1))), (min((((/* implicit */int) ((signed char) var_5))), (var_7)))));
    var_20 -= ((/* implicit */unsigned long long int) min((min((var_0), (((int) var_0)))), (var_2)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((5310469460791946835ULL), (((/* implicit */unsigned long long int) var_11)))))) ? (((min((((/* implicit */int) (short)1144)), (-1702820736))) - (((/* implicit */int) var_16)))) : (var_0)));
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)7)), (((unsigned long long int) (signed char)-3))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((1390766643U) != (2904200652U)))), ((short)3102))))) % (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */unsigned long long int) 1390766643U)) | (var_17))) : (((/* implicit */unsigned long long int) 2904200653U)))));
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1086283178U))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) (unsigned char)255);
                                var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_0] [i_4]))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1390766651U)) ? (arr_9 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_9)), (16384U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))))))));
                                var_26 = ((/* implicit */unsigned char) ((-2013271400) <= (((((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_1])) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) ((((/* implicit */_Bool) 1390766651U)) && (((/* implicit */_Bool) -766835841)))))))));
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((arr_5 [i_0] [i_1] [i_2]), (67108863)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned int) arr_0 [i_1])) : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))) & (arr_7 [i_3])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
