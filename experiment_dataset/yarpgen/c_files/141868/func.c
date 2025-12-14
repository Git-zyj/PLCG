/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141868
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
    var_16 = min(((~(((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min(((~(-4321375618194529348LL))), (((/* implicit */long long int) var_3))))));
    var_17 = ((/* implicit */signed char) min((var_3), (((/* implicit */int) (unsigned char)97))));
    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_9))))), ((~(14ULL)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) ((short) arr_8 [(signed char)17] [i_1])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)19] [13ULL] [13ULL]))) + (12603092271799507731ULL)))));
                                arr_14 [i_0] [i_1] [8ULL] [i_3] [i_4] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)94)) << (((((/* implicit */int) min(((signed char)-95), ((signed char)91)))) + (99)))));
                                arr_15 [i_0 - 1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)88))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) min((73808077624024340LL), (((/* implicit */long long int) (unsigned short)60212))));
                }
            } 
        } 
    } 
}
