/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118361
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
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0 - 2]))));
                arr_4 [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) (short)-1)) : (((/* implicit */unsigned long long int) var_2))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) var_12));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_18 = ((/* implicit */signed char) (((~(7052504730317865613ULL))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                    arr_14 [i_2] = ((/* implicit */unsigned char) 17798724705594445446ULL);
                }
                arr_15 [i_2] [i_2] = ((/* implicit */signed char) 2114473958U);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_10);
}
