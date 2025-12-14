/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165064
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
    for (int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) + (((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (short)-15323)) : (-1019397801)))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (short)15411)) : (((/* implicit */int) (unsigned char)125))));
        arr_3 [i_0] = ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0 - 3]));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) / (((/* implicit */int) (unsigned char)169))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)121))));
            var_21 = ((/* implicit */unsigned char) max((((unsigned long long int) arr_4 [i_1])), (((/* implicit */unsigned long long int) ((arr_6 [i_2]) ? (arr_4 [i_1]) : (arr_4 [i_2]))))));
        }
        for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((min((((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_7 [i_3])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) < (15093450771691738247ULL))))) ? (((unsigned int) ((((-925767515) + (2147483647))) << (((15093450771691738247ULL) - (15093450771691738247ULL)))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9030173044035410205LL)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (unsigned short)37519)))) - (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_5 [i_1]))))))))))));
            var_23 = ((/* implicit */unsigned long long int) 1151951688U);
        }
        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 2) 
        {
            var_24 ^= ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)192)) / (((/* implicit */int) (unsigned short)37519))))) * (3353293302017813368ULL)));
            var_25 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (unsigned short)24481)), (15093450771691738247ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 - 2] [i_4])))));
        }
        var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3353293302017813368ULL))))), (arr_11 [i_1] [12U]))))));
    }
}
