/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152514
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
    var_14 *= ((/* implicit */_Bool) min(((short)11061), (((/* implicit */short) (signed char)-83))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [(unsigned char)20] = ((/* implicit */unsigned int) (short)-11062);
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((((/* implicit */int) (signed char)-83)) == (((/* implicit */int) min((arr_4 [i_0 - 1]), (((/* implicit */unsigned short) (_Bool)1)))))));
                                var_16 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) -1814686989)) : (var_4)))), (max((11770118667052122049ULL), (((/* implicit */unsigned long long int) (signed char)39)))))), (10734193112821693072ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
