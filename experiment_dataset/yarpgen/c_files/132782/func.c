/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132782
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) var_9);
                    var_12 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 6771364121921308865LL)) ? (max((((/* implicit */int) ((unsigned char) var_2))), ((~(((/* implicit */int) var_10)))))) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4 - 1] [i_1] [i_2] [i_2] [i_4 - 2] [i_0] [i_3 + 1] = min((11116937520732771773ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (1418912190) : (-1418912190))) / (((/* implicit */int) arr_12 [i_0] [i_2] [i_3 - 2]))))));
                                var_13 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned short) arr_14 [i_3] [i_3] [i_3] [i_3 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)249))));
    var_15 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((unsigned char) (signed char)-112)))))));
}
