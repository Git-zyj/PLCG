/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125967
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */unsigned char) var_11);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_10 [i_2] [i_1] [i_2] [i_3] = ((((/* implicit */unsigned long long int) ((long long int) (unsigned short)29433))) >= (var_2));
                            arr_11 [i_2] [i_1] [(_Bool)1] [12LL] = ((/* implicit */unsigned int) ((unsigned short) ((signed char) (short)9456)));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                            {
                                var_16 = ((/* implicit */unsigned char) (+(max((var_1), (((/* implicit */unsigned long long int) 524287U))))));
                                arr_14 [i_0 + 2] [i_1] [i_2] [i_3 - 1] [(unsigned short)15] = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) ((var_6) < (((/* implicit */int) var_3)))))))) << (((/* implicit */int) ((_Bool) 4294443007U)))));
                                var_17 = ((/* implicit */short) var_1);
                                arr_15 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) var_1);
                            }
                            arr_16 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)4095))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 |= ((/* implicit */_Bool) ((max((((/* implicit */long long int) var_8)), (((long long int) var_11)))) / (((((-2655361126365598784LL) + (9223372036854775807LL))) << (((11140839332867687391ULL) - (11140839332867687391ULL)))))));
}
