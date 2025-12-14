/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172674
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
    var_13 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) var_6)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */unsigned long long int) max((var_0), (((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)97)))))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_2))));
                    var_16 ^= ((/* implicit */short) ((((/* implicit */int) (signed char)72)) < (((((/* implicit */_Bool) min((1072749014U), (((/* implicit */unsigned int) (signed char)-115))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) (short)-14871))))) : (((((/* implicit */_Bool) (unsigned short)65257)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (signed char)96))))))));
                    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0] [i_0]), (var_8)))))));
                }
            } 
        } 
        arr_6 [i_0] = ((/* implicit */short) var_3);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (-(arr_8 [i_3] [i_3])));
        arr_9 [i_3] = ((/* implicit */long long int) (((_Bool)1) ? (2137120256U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_9))))))));
        arr_10 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 23; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                arr_22 [i_4] [i_4] [i_4] [i_4] [i_8] &= ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_6)), (var_12))), (((/* implicit */long long int) (!(arr_16 [i_7 - 1] [i_7 - 1] [i_6] [i_6]))))));
                                var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) : (arr_17 [i_7]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_19 [i_4] [i_7] [i_7] [i_4] [i_7]))))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min(((unsigned short)65534), (((/* implicit */unsigned short) ((unsigned char) var_12))))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (short)-3364))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_20 [i_6]))) == (((/* implicit */int) max((var_1), (var_1))))));
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)278))));
}
