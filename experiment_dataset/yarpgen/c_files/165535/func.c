/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165535
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
    var_14 = ((/* implicit */unsigned short) ((unsigned int) var_11));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) (unsigned short)32884);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-102))))) ? (((((/* implicit */int) arr_1 [i_0 - 1])) ^ (((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */int) var_13))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)37648)) < (((/* implicit */int) var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned long long int) var_12)), (1624680699449405354ULL)))))) ? (max((var_11), (((/* implicit */unsigned long long int) -1612036517)))) : (arr_7 [i_0] [i_1] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_1] [i_2] [i_2] [i_0 + 2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_2])))), (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) arr_13 [i_4] [i_4] [i_4 - 1] [i_4 + 2] [i_4 - 1])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_0 - 1] [i_2] [i_2] [i_0] [i_0]))))));
                                var_19 *= ((/* implicit */unsigned long long int) (signed char)-124);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) (~(((var_5) ? (3267491057U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_8 [10ULL])), (min((((/* implicit */unsigned long long int) 1014140941U)), ((-(0ULL)))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 18; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [4])) - (((/* implicit */int) (unsigned short)22123))))) ? (((/* implicit */unsigned int) ((int) var_11))) : (((arr_18 [i_0] [i_0] [i_0 - 2]) ? (var_10) : (var_10)))));
                    var_23 |= ((/* implicit */int) (unsigned short)65520);
                }
            } 
        } 
    }
}
