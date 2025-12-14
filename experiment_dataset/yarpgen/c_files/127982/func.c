/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127982
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((arr_3 [i_1]) != (arr_3 [i_1])));
                var_17 = ((/* implicit */signed char) -2147483644);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_2) / (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) -1596317210537731426LL)) ? (((/* implicit */int) (signed char)118)) : (arr_1 [i_3])))))) ? (((min((arr_3 [i_1]), (((/* implicit */int) var_5)))) % (((/* implicit */int) var_0)))) : (min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) 1596317210537731403LL)) ? (((/* implicit */int) arr_0 [i_2] [i_1])) : (((/* implicit */int) var_5))))))));
                            arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_1] [i_3 + 1])) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned char)19] [(unsigned char)19])) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)24)))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1]))))), (((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_1] [i_3 - 1] [i_3])) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [23LL])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_7)))))))));
                            var_19 = ((/* implicit */long long int) var_3);
                            var_20 = ((/* implicit */unsigned char) min((min((arr_7 [i_3 - 1] [i_1] [i_3 - 1] [i_3 + 1]), (arr_7 [i_3 - 1] [i_1] [i_3] [i_3]))), (((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_3 - 1] [i_1] [i_3] [i_3])) != (((/* implicit */int) (unsigned char)1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) (unsigned char)128);
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)12]))) - (var_15))), (((unsigned long long int) arr_12 [i_1] [6ULL] [i_1] [(signed char)0]))))) ? (((((/* implicit */unsigned int) arr_1 [i_5 + 4])) % (536870910U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) min(((short)-24966), (arr_6 [i_5 + 4] [i_4] [i_1] [i_0])))) : (((/* implicit */int) (unsigned char)69)))))));
                            var_23 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)125)) : (arr_1 [i_1]))), (((/* implicit */int) arr_9 [i_1] [i_0]))))));
                            arr_13 [i_0] [i_1] [i_4] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) & (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_13), (((/* implicit */int) var_0)))) > (((/* implicit */int) var_10)))))) : (((unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
}
