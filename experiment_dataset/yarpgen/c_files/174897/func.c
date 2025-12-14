/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174897
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) var_10);
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_3 [5LL] [11]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_3] [4] [(signed char)12] = ((/* implicit */_Bool) min((max((2164914633U), (((/* implicit */unsigned int) 381905810)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_3] [i_0 + 2] [i_0])))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-30678))) <= (((((/* implicit */_Bool) 1754637615)) ? (2130052653U) : (arr_8 [i_1]))))) ? (((((/* implicit */long long int) arr_0 [i_2])) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_0]))) : (-7772931105906948965LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48075)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((var_14), (var_6))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)61)) % (((/* implicit */int) (short)-10293))));
}
