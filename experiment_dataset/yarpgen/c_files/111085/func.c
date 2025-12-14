/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111085
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        arr_14 [i_3] [(signed char)0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_5)))))) ? (((var_0) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 - 1] [i_2 + 1]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0 + 1])))))));
                        var_18 = ((/* implicit */short) var_8);
                        var_19 = ((/* implicit */int) min((3239464032204763191ULL), (((/* implicit */unsigned long long int) -7681248668372309488LL))));
                        var_20 ^= max((var_2), ((-(((/* implicit */int) (!(((/* implicit */_Bool) 1289510600))))))));
                        arr_15 [i_2 - 1] [i_2] [i_0] = (!(((/* implicit */_Bool) ((int) arr_11 [i_3] [i_3 + 2] [i_3] [i_3 - 2]))));
                    }
                    for (short i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) 3594026282008266470LL);
                        arr_18 [i_0] [5ULL] [(short)7] [i_1] [i_2] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_8)))) ? (((/* implicit */int) ((_Bool) -359097593))) : (((/* implicit */int) (signed char)20)))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0 - 1] [i_2 + 1] [i_2] [i_4 + 2])) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) (!(arr_8 [7LL] [(_Bool)1] [i_4]))))))));
                    }
                    arr_19 [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) (((((-(7681248668372309463LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) 10995055688922426228ULL))) - (60275)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)80)))))));
                        var_23 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) var_14)) < (((/* implicit */int) (signed char)-22))))), (var_7))))));
                    }
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */signed char) max((((unsigned long long int) ((short) var_11))), (((/* implicit */unsigned long long int) var_8))));
    var_25 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)-9)), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-20)) : (var_15))) : (((/* implicit */int) ((signed char) 1914785714)))))));
}
