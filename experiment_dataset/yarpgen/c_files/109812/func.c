/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109812
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((14224821612748065301ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))) >= (arr_0 [i_1])));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) != (max((((/* implicit */long long int) (signed char)-34)), (arr_4 [i_0] [i_1])))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) != (((((/* implicit */_Bool) (unsigned short)799)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) : (arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) min((min((((arr_11 [i_0] [i_1] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)799))))), (((/* implicit */unsigned long long int) arr_9 [13LL] [i_0] [i_1] [i_2] [i_3] [24ULL])))), ((~(((((/* implicit */unsigned long long int) arr_1 [i_1])) - (arr_7 [i_0] [i_1] [i_2] [i_3]))))))))));
                            var_12 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((_Bool) (signed char)-15)))));
                            arr_13 [i_0] [i_0] [i_2] [3LL] [i_0] [3LL] = ((/* implicit */unsigned short) arr_7 [(signed char)22] [i_1] [i_0] [(_Bool)1]);
                            arr_14 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11220))) + (arr_1 [i_2]))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-3219015624723815802LL) | (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) && (((/* implicit */_Bool) -6254264526681387066LL))));
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-64)), (var_6)))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)60)), ((unsigned char)244)))))));
}
