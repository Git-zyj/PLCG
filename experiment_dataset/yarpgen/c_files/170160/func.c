/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170160
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
    for (long long int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((max((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) % (var_12))), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned short)12342)))), (((/* implicit */int) arr_4 [i_0 + 3] [i_0]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) 9ULL);
                        var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) ? (((0ULL) % (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (min((((/* implicit */unsigned int) (short)-23802)), (1450017265U))) : ((~(arr_0 [i_0])))))) : (12924753882331531859ULL)));
                        var_16 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)112))))), (arr_8 [i_2]))) >> (((min((((/* implicit */long long int) (-(2844950021U)))), (-3266057033880658744LL))) + (3266057033880658761LL)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 20; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 + 2] [i_5] [i_2] [i_5] [10] [i_5]))) != (var_11))))));
                            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) ((_Bool) var_12)))));
                            var_19 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0]))));
                        }
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_8 [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) var_9))), (((((/* implicit */_Bool) var_6)) ? (2844950021U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
}
