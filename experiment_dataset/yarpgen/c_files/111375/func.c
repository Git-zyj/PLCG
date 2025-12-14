/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111375
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_16 |= ((/* implicit */unsigned short) min(((short)-14931), (((/* implicit */short) (signed char)24))));
        arr_3 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) (signed char)48))))) ? (((/* implicit */int) ((arr_1 [i_0 + 4]) == (17322390790984802212ULL)))) : (((/* implicit */int) min((arr_2 [i_0 - 3]), (arr_0 [i_0 - 1] [i_0]))))))) * (max((((/* implicit */unsigned long long int) var_3)), (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((10701930744805376581ULL), (((/* implicit */unsigned long long int) (short)-8416))));
                    var_17 += ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)-10)))) / (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)124)), (arr_6 [i_1] [i_1] [i_2]))))))) ? (min((arr_4 [i_0 + 2] [i_0 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21580)) || (((/* implicit */_Bool) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))));
                    var_18 = (signed char)18;
                    var_19 += ((((((/* implicit */int) arr_5 [i_0 - 2])) != (((/* implicit */int) arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (signed char)0))))) && (((/* implicit */_Bool) arr_2 [i_0 - 2])))))) : (arr_4 [i_0 + 4] [i_0 + 4]));
                    var_20 = arr_9 [i_1] [i_1] [i_2];
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_13 [(short)8] [i_3] = ((/* implicit */unsigned long long int) ((arr_11 [i_3]) > (arr_11 [i_3])));
        var_21 = ((short) arr_12 [i_3] [i_3]);
    }
    var_22 ^= ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (short i_4 = 1; i_4 < 19; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31074)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (0ULL)))) ? (((/* implicit */int) ((signed char) (signed char)105))) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((arr_14 [(signed char)11]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_8 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_10))))))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)7)))) > (((((/* implicit */int) arr_21 [i_8] [i_8 + 3] [i_6] [(signed char)6])) * (((/* implicit */int) arr_21 [i_8 - 1] [i_8 + 3] [i_8 + 3] [i_7])))))))));
                            }
                        } 
                    } 
                    arr_28 [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) min((arr_15 [i_4] [i_4]), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)255)))) >= (var_10))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_1);
}
