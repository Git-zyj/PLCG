/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164955
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
    var_17 = ((/* implicit */unsigned int) (+(min((((long long int) (unsigned char)215)), (max((((/* implicit */long long int) var_14)), (7359622123617147653LL)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [(short)15] = ((/* implicit */int) 1367378809U);
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            arr_15 [15U] [i_0] [15U] [15U] [(unsigned char)5] [i_4] = ((/* implicit */unsigned char) (unsigned short)56);
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) min(((unsigned short)68), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (arr_5 [(unsigned char)20])))))))));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((1280801831) < (((/* implicit */int) (unsigned short)65480)))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((short) ((unsigned char) (unsigned short)65480)))), ((-(((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_3]))) : (arr_7 [i_3 - 2] [i_2] [i_1])))))));
                        }
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */long long int) (-(arr_9 [i_0 - 1] [i_0])));
        var_21 = ((/* implicit */short) (+(arr_12 [i_0 - 1])));
    }
}
