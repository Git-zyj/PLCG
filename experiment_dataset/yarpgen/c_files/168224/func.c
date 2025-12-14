/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168224
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
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_18 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (524287U)))));
                    var_19 = ((/* implicit */int) (~(742599254U)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            for (long long int i_5 = 3; i_5 < 9; i_5 += 4) 
            {
                {
                    arr_16 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) 7LL)) ? (((/* implicit */unsigned int) -2107887093)) : (4294443000U)));
                    var_20 = 285597109;
                    arr_17 [i_3] [i_3] [i_5] [i_5 - 1] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_2 [i_3]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) (((+(var_17))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) 3965462586851785059LL)) && (((/* implicit */_Bool) 4294443000U))))))))));
    var_22 = ((/* implicit */unsigned char) ((long long int) min((742599267U), (742599269U))));
}
