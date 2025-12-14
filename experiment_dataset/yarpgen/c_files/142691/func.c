/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142691
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_1] = (!(((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) var_2))) + (2147483647))) >> (((((/* implicit */int) var_8)) + (70)))))));
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(3812690084U)))) && (((/* implicit */_Bool) min(((+(((/* implicit */int) var_13)))), ((+(((/* implicit */int) var_12)))))))));
            }
        } 
    } 
    var_16 += ((/* implicit */unsigned char) ((unsigned short) var_9));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(482277228U)))) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))) + (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            {
                arr_15 [i_2] = ((/* implicit */signed char) min((var_6), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((12975510504904634614ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) != ((~(482277228U))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)139))))) : (((unsigned int) var_6))))) ? (((/* implicit */int) min(((unsigned char)9), (((/* implicit */unsigned char) var_15))))) : (((/* implicit */int) (unsigned char)253))));
                            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
