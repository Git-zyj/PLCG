/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156245
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
    var_11 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((short) 2537376977U)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((2612293851122930829ULL), (((/* implicit */unsigned long long int) (+(var_3))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) (+(var_4)));
            arr_6 [i_1] = ((/* implicit */signed char) ((18446744073709551615ULL) - (var_10)));
        }
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((var_1) | (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)63)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) > (max((((/* implicit */long long int) arr_9 [i_2 - 1] [i_2 - 1])), (-3733485127524503449LL))))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 21; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    {
                        var_14 -= (~(((/* implicit */int) var_2)));
                        arr_18 [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)65))))) ? (((((unsigned long long int) (short)-1)) / (8653667480492090265ULL))) : (max((13851195120025440285ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)96)), (3688306251U))))))));
                    }
                } 
            } 
        } 
    }
}
