/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150904
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned long long int) ((unsigned char) var_8));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)28)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 += ((/* implicit */unsigned char) (~((((+(((/* implicit */int) var_1)))) << (((((/* implicit */int) var_7)) << (((var_11) - (763549097)))))))));
                    var_17 *= max((max((((var_3) / (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_3)) ? (var_3) : (var_10))))), (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)240)))), (var_2)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (max((6022520698326809199ULL), (((/* implicit */unsigned long long int) var_12))))))) || (((/* implicit */_Bool) var_11))));
                arr_15 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >= (((((/* implicit */int) ((var_3) != ((-2147483647 - 1))))) & ((~(var_3)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (~(var_3)))) ? (min((((/* implicit */long long int) var_9)), (4659459094706809642LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_11) != (((/* implicit */int) (signed char)-20)))))))));
}
