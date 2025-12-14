/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109150
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9546176601911230774ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2145386496U)) >= (arr_0 [i_0 + 2] [i_0])))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_3))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (35184372088831ULL)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 5226548901372683879LL)), (var_7)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) (unsigned char)209)) ^ (((/* implicit */int) (unsigned char)183)))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (unsigned char)183))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) -42258298))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) (+((+(((var_12) - (((/* implicit */int) var_13))))))));
        var_23 *= ((/* implicit */_Bool) ((int) (+((+(((/* implicit */int) (_Bool)0)))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            for (unsigned char i_7 = 2; i_7 < 13; i_7 += 3) 
            {
                {
                    var_24 -= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1221))) <= (var_1))) && (((/* implicit */_Bool) (~((+(-5226548901372683879LL))))))));
                    var_25 ^= ((/* implicit */_Bool) var_3);
                    var_26 ^= ((/* implicit */short) ((((arr_2 [i_7 - 1] [i_6 + 1]) > (((/* implicit */unsigned int) var_11)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) -1)) ? (-5226548901372683880LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [i_5])))))));
                    var_27 &= ((/* implicit */unsigned short) (-((+((+(((/* implicit */int) (short)-27625))))))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) ((unsigned short) 2147483647)))))));
                }
            } 
        } 
    } 
}
