/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169510
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [8ULL] = ((/* implicit */long long int) min((((((((/* implicit */int) (unsigned short)37305)) != (((/* implicit */int) arr_0 [10])))) ? (((((/* implicit */int) arr_0 [(unsigned char)7])) ^ (((/* implicit */int) (signed char)0)))) : (((int) (signed char)-28)))), (((/* implicit */int) ((((/* implicit */_Bool) -2060569341)) && (((/* implicit */_Bool) (signed char)12)))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_14 &= ((/* implicit */signed char) (((~(((((/* implicit */int) (signed char)30)) % (arr_8 [i_0] [i_2] [i_2] [i_2] [i_1] [i_0]))))) * (((((/* implicit */int) arr_0 [i_1 + 1])) * (((/* implicit */int) arr_0 [i_1 + 1]))))));
                        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-2))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [(unsigned char)5]))))) ? ((((~(((/* implicit */int) var_3)))) & (((((/* implicit */_Bool) 2683103803831284959LL)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) arr_3 [i_0])))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0]))))));
                        var_16 = ((/* implicit */int) ((arr_8 [i_0] [2LL] [2LL] [i_2] [i_2] [i_3]) > ((-(((/* implicit */int) (unsigned char)3))))));
                        arr_9 [15LL] [(signed char)5] [13] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((var_4) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3ULL)))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) -2060569341)) ? (var_8) : (((/* implicit */int) var_13)))) - (((/* implicit */int) arr_7 [i_1 + 1] [11LL] [i_1]))))) : (-9223372036854775806LL)));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) var_12)) <= (((/* implicit */int) (unsigned char)3)))) && (((/* implicit */_Bool) var_7))))) - (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)-16))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)59)))))))))));
        var_17 = ((/* implicit */signed char) ((-2060569341) != (((/* implicit */int) (signed char)25))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((min((((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_4 [i_0] [(short)15] [i_0])))), (((/* implicit */int) var_11)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_6 [(signed char)6] [(signed char)6] [i_0])))) <= (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)156)), (arr_7 [i_0] [i_0] [i_0]))))))))))));
    }
    for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        var_19 &= ((/* implicit */signed char) arr_0 [i_4 + 1]);
        var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5026)) || (((/* implicit */_Bool) arr_6 [i_4] [(unsigned short)3] [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -3064444928082620367LL)))))))));
        arr_13 [(signed char)11] = ((/* implicit */int) ((((/* implicit */long long int) min((min((((/* implicit */int) var_1)), (908511143))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) > (var_4))))))) == (max((max((((/* implicit */long long int) (short)-1971)), (-5965799187590733190LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) >> (((arr_8 [11] [i_4] [(unsigned short)8] [11LL] [11LL] [1LL]) + (1656821208))))))))));
        arr_14 [i_4] [i_4] = ((/* implicit */short) arr_12 [i_4] [(signed char)5]);
    }
    var_21 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) var_9)))));
}
