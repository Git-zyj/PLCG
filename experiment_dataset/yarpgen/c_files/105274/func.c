/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105274
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) <= (min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) (_Bool)0))))));
                    var_12 = ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) arr_6 [i_3]);
        var_14 = ((/* implicit */signed char) ((max((max((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_3] [i_3]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [9U] [11ULL])))));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [i_4])) / (((/* implicit */int) arr_8 [i_4])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4])) || (((/* implicit */_Bool) arr_8 [i_4])))))));
        var_16 = ((/* implicit */int) arr_8 [(signed char)22]);
        var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_8 [i_4])) > (((/* implicit */int) arr_8 [i_4])))));
        var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)32424))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_2);
    var_20 = ((/* implicit */unsigned int) var_1);
}
