/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125532
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)112))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) + (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                var_20 ^= ((/* implicit */long long int) (~((~(arr_3 [i_0 + 1] [(_Bool)1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                arr_9 [i_2] = ((/* implicit */unsigned int) var_16);
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) ((int) ((unsigned long long int) arr_7 [i_2])))))))));
                            arr_16 [i_5] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) 731312225);
                            var_22 = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_3] [i_4 + 1] [i_5 + 1])) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (arr_11 [i_2] [i_2] [i_4 + 1] [i_5 + 1])))))), (((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_13 [i_5] [i_5 - 2] [i_5])) : (((/* implicit */int) arr_8 [i_4]))))));
                        }
                    } 
                } 
                var_23 = (unsigned char)236;
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_25 [6ULL] [i_3] [i_6] [i_6] [i_6] [i_7] [i_8 + 1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)107))))))) != ((~(((/* implicit */int) (unsigned char)139))))));
                                var_24 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)136))));
                                arr_26 [i_2] [i_3] [i_3] [i_3] [i_6] [i_7] [(unsigned char)3] = ((/* implicit */unsigned long long int) arr_17 [i_2] [i_2]);
                            }
                        } 
                    } 
                } 
                arr_27 [i_2] = ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
    var_25 ^= ((/* implicit */long long int) var_11);
    var_26 = ((/* implicit */long long int) var_6);
}
