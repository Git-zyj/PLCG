/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174130
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */signed char) arr_2 [i_2 + 1] [i_0 + 1]);
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-1))));
                            var_16 &= ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)62309));
                        }
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_17 *= ((/* implicit */unsigned long long int) arr_12 [i_5] [i_3] [i_1] [i_1] [i_0]);
                            var_18 = ((/* implicit */unsigned int) (~(arr_2 [i_0 - 2] [i_2 - 2])));
                            var_19 |= ((/* implicit */unsigned int) ((var_8) & (((/* implicit */int) (signed char)-26))));
                            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) 3587337227U)) != (var_11))))));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (+(arr_3 [i_0 - 1])));
    }
    var_22 &= ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) var_0))));
    var_23 = ((/* implicit */signed char) ((unsigned long long int) ((((_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_24 += ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned short)46048))))) : (((1099511627775ULL) >> (((((/* implicit */int) (signed char)-1)) + (57))))))), (((/* implicit */unsigned long long int) var_4))));
}
