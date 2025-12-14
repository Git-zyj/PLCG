/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155344
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((min(((~(((/* implicit */int) var_10)))), ((((-2147483647 - 1)) / (2147483647))))), (((/* implicit */int) var_9)))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-2147483647 - 1)))));
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)6))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((2147483647) < (-1770811245))))) || (((/* implicit */_Bool) (+(var_14))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & ((~(((((/* implicit */_Bool) 1371580603251029935LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 3517994766U)))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                arr_15 [i_3] [i_4] = var_1;
                var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 2147483641)) && (((/* implicit */_Bool) arr_1 [i_3 + 3] [i_3 - 1])))))));
                var_22 -= ((/* implicit */unsigned long long int) min((arr_3 [i_4] [16] [16]), (((((/* implicit */unsigned int) ((/* implicit */int) (short)32758))) == (arr_6 [i_3 + 3] [i_3 + 2])))));
            }
        } 
    } 
}
