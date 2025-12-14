/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156486
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
    var_18 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1 + 2] [i_1 - 1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), (var_6)))) ? (arr_4 [i_1 + 2] [i_0 + 1] [i_0 - 1]) : (arr_4 [i_0] [i_0] [i_1]))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_11 [i_1] [i_1]), (((/* implicit */signed char) arr_0 [i_0 - 2] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65507)) ? (-8185316442076420547LL) : (((/* implicit */long long int) 1970203352))))) ? (max((-582539005116672321LL), (8185316442076420547LL))) : (((/* implicit */long long int) arr_10 [i_1 + 2] [i_0 - 2] [10] [i_0] [i_0]))))));
                            var_19 *= ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (var_3)))))) ? (min((arr_4 [i_2 - 2] [i_1 + 2] [i_0 + 1]), (((/* implicit */int) var_12)))) : ((+(((/* implicit */int) arr_3 [i_0]))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned short) (short)11656))) ? (((((/* implicit */_Bool) var_16)) ? (var_16) : (508139940))) : (((((/* implicit */_Bool) var_16)) ? (var_16) : (var_16)))))));
                var_21 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) <= (8185316442076420553LL))))) : (max((var_2), (((/* implicit */long long int) (signed char)34)))))));
            }
        } 
    } 
}
