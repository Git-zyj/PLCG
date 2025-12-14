/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154533
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
    var_11 = var_7;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (signed char)-56))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */signed char) max((min((var_4), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-1)), (var_7)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((signed char)-56), (arr_1 [i_1] [i_1])))))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)56)), ((short)255)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_5 [i_3] [i_2]), (((/* implicit */unsigned char) arr_9 [i_1] [i_2] [i_2] [i_2] [i_0]))))), (max((((/* implicit */unsigned int) (short)-233)), (1U)))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 2])) == (((/* implicit */int) (short)255)))), (((((/* implicit */int) (signed char)55)) <= (((/* implicit */int) (signed char)-56))))));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
}
