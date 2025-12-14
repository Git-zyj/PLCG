/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182687
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
    var_10 = ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1916936433U)))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13639))) : (var_5)))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_11 |= ((/* implicit */signed char) ((((int) ((((/* implicit */long long int) var_9)) / ((-9223372036854775807LL - 1LL))))) ^ (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) ((arr_3 [i_0 + 1] [6LL] [5]) != (25165824U)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((arr_6 [i_3] [i_1] [i_3] [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), ((+(((((/* implicit */int) arr_2 [i_3] [i_2] [i_1])) | (((/* implicit */int) (short)13639))))))));
                        var_12 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [(short)1] [i_1] [(short)1])), (var_9)))) ? (((/* implicit */int) max(((short)13622), (((/* implicit */short) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)-1))))))));
                        arr_13 [i_3] [i_2] [(signed char)2] [i_0 - 1] = ((/* implicit */signed char) ((min((var_5), (((/* implicit */unsigned long long int) arr_11 [0U] [i_0 - 4])))) & (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (arr_7 [11U]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [5] [11] [i_1]))))))))));
                        arr_14 [(signed char)0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((min((((/* implicit */unsigned short) (short)-26935)), (var_0))), (((/* implicit */unsigned short) min((((/* implicit */short) var_3)), (var_7))))))), (min((((/* implicit */long long int) (signed char)13)), (6071488492531760986LL)))));
                        var_13 = ((/* implicit */signed char) ((short) (+(18446744073709551615ULL))));
                    }
                }
            } 
        } 
    } 
}
