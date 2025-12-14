/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106013
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
    var_16 = ((/* implicit */int) (((~(((var_1) | (((/* implicit */unsigned long long int) var_15)))))) | (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_14)))) | (((/* implicit */int) var_9)))))));
    var_17 = ((/* implicit */int) var_0);
    var_18 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2975607669810866594ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_3 [i_0] [i_0] [i_0])))) : (min((arr_0 [(signed char)10]), (((/* implicit */unsigned long long int) 1615959088U)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_15 [(signed char)10] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_4] [i_4]))))) > ((-(((arr_6 [i_0] [i_1] [(_Bool)0]) * (((/* implicit */unsigned long long int) var_15))))))));
                                var_20 += (_Bool)1;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
