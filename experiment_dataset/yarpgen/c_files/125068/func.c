/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125068
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            var_19 ^= ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) 684316274)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_4)))))));
            var_20 = ((/* implicit */unsigned short) var_3);
            var_21 = ((/* implicit */signed char) ((unsigned char) (-(min((var_0), (((/* implicit */unsigned int) arr_4 [i_0] [1] [i_1])))))));
        }
        var_22 = ((/* implicit */unsigned int) max(((((+(var_3))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2757615317U)) ? (-684316271) : (((/* implicit */int) (unsigned char)50)))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) var_13);
            arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(var_3))) >> (((arr_1 [(signed char)13]) - (412303774U)))))) ? ((-(var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) var_8))))) ? ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) (_Bool)1)))))))));
        }
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((4212166251U) * (((unsigned int) ((((/* implicit */int) (unsigned char)194)) >> (((((/* implicit */int) (short)1685)) - (1662)))))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_15 [i_3] = (i_3 % 2 == zero) ? (((/* implicit */unsigned short) (((-(max((var_4), (((/* implicit */unsigned int) 131071)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) var_6)))) >= (((((((/* implicit */int) arr_11 [i_3] [i_3])) + (2147483647))) << (((((arr_14 [i_3] [9U]) + (878475037))) - (19)))))))))))) : (((/* implicit */unsigned short) (((-(max((var_4), (((/* implicit */unsigned int) 131071)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) var_6)))) >= (((((((/* implicit */int) arr_11 [i_3] [i_3])) + (2147483647))) << (((((((((arr_14 [i_3] [9U]) + (878475037))) - (19))) + (1004182021))) - (30))))))))))));
                arr_16 [i_3] [i_4] = ((/* implicit */signed char) var_14);
            }
        } 
    } 
}
