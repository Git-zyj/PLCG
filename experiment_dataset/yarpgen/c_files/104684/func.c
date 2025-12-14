/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104684
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
    var_19 = min((((unsigned long long int) (-(6387541041691323275ULL)))), (((unsigned long long int) var_1)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (short)-32757);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 126100789566373888ULL))))) <= (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_21 += ((/* implicit */signed char) ((((long long int) arr_3 [i_1 + 2] [10ULL])) % (((long long int) arr_3 [i_1 + 1] [12ULL]))));
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_1 + 2])))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))), ((+(((long long int) var_13))))));
    }
    var_22 = ((unsigned char) (-((~(var_6)))));
}
