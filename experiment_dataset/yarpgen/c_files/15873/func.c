/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15873
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
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_10 ^= ((/* implicit */unsigned int) arr_0 [i_0 + 3]);
                                var_11 = ((/* implicit */unsigned int) 5479720115212659631LL);
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_4 [(short)20] [i_0] [i_2]))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_2)))) : (arr_9 [i_0 + 3] [i_0 - 1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) min((min((-409952304), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)23873))))) : (min((3542233908801268221ULL), (((/* implicit */unsigned long long int) -4184961364690854216LL))))));
                    var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2477107378U)) ? ((+(3542233908801268221ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))), (((unsigned long long int) (+(((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))))));
                    var_14 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [(short)21]);
                    var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_2)), (min((var_9), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14ULL)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        for (short i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            {
                arr_22 [i_6] [i_6 - 1] = ((/* implicit */_Bool) min((var_8), (((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6 + 1] [i_5 + 1] [i_5 + 1]))))))));
                arr_23 [(unsigned short)11] [i_6] [i_6 + 1] = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
}
