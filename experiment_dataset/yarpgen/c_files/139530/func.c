/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139530
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_11) != (arr_5 [i_0] [i_1] [i_0])))) & (((int) arr_5 [i_0] [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)246))) : (((((/* implicit */_Bool) 11914639666154332778ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                    arr_10 [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)0);
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */signed char) 961076266U);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (signed char)11))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) var_6)))))));
                }
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    arr_17 [i_0] [i_0] [i_1] [i_3] = 1684230904U;
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)97)) - (((/* implicit */int) (unsigned char)0))));
                        arr_21 [i_0] = ((/* implicit */_Bool) min((((int) arr_4 [i_1] [i_4])), ((-((~(((/* implicit */int) var_5))))))));
                    }
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((long long int) (+(((((/* implicit */_Bool) 1684230918U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195))))))));
}
