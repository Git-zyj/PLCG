/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152133
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_4))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(unsigned char)8] [i_1] = ((/* implicit */long long int) min((-2147483644), (((/* implicit */int) (unsigned short)16533))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) < (min((((((/* implicit */_Bool) (signed char)-120)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41273))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_0 [i_2])))))))));
                                arr_12 [i_1] = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */int) (((((+(arr_2 [i_0] [i_1]))) / (((arr_6 [i_0] [i_1] [(unsigned char)16]) ? (4013252354584095798ULL) : (18446744073709551615ULL))))) << ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_5] [i_6] [(_Bool)1])))))))));
                                var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) ((4013252354584095795ULL) < (6173784775096593917ULL))))))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */unsigned char) (~((+(min((4013252354584095774ULL), (15ULL)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_6))));
}
