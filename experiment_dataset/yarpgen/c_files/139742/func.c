/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139742
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned short) var_7);
                var_11 *= ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned int) (short)9820)), (var_5))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) ((signed char) (+(var_2)))))));
                var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0] [i_0])) < (((/* implicit */int) arr_2 [i_0] [i_0])))) ? (((var_4) ? (var_8) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60))) <= (7925609209512574177LL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                var_13 = ((/* implicit */int) (unsigned short)236);
                var_14 |= ((_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) - (min((((/* implicit */unsigned int) arr_3 [i_2] [i_2])), (var_5)))));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    var_15 ^= ((/* implicit */unsigned int) (unsigned short)25698);
                    var_16 = ((/* implicit */_Bool) min((var_16), (arr_2 [i_3] [i_2])));
                    arr_15 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_7)) | (arr_13 [i_2] [i_3] [i_2] [i_2]))), (((((/* implicit */int) var_7)) >> (((var_3) + (5437160122463252310LL)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)236)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)2741))))) : (max((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127)))))))));
                    arr_16 [i_4] = ((/* implicit */long long int) arr_1 [i_4]);
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                arr_24 [i_6] = ((/* implicit */unsigned short) var_6);
                                arr_25 [i_2] [i_6] [i_5] [i_6] [i_7] [i_3] [i_2] = ((/* implicit */short) ((var_9) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2] [i_6])) * (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */_Bool) (~(var_2)));
                }
            }
        } 
    } 
    var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)1))))) ? (((/* implicit */int) (unsigned short)1)) : (var_8)));
}
