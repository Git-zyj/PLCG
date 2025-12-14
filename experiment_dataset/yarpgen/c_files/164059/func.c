/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164059
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
    var_10 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 548885167U))));
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) arr_0 [i_0])))), ((-(((/* implicit */int) var_0)))))))));
    }
    for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1 - 2] = ((/* implicit */unsigned int) var_2);
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */long long int) arr_5 [i_1 + 1] [i_1 + 1]);
        var_11 = ((/* implicit */_Bool) min((((long long int) (short)-16150)), (((/* implicit */long long int) arr_5 [i_1 - 3] [8]))));
        var_12 = ((/* implicit */_Bool) ((((1072693248U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 3]))))))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    {
                        arr_16 [i_3] [i_2 + 1] [i_2 + 1] [i_4 + 3] [(unsigned char)9] [(unsigned char)9] = (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))));
                        var_13 = ((/* implicit */unsigned int) arr_2 [i_2 + 1] [i_2 + 1]);
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((long long int) arr_6 [i_1 - 2] [4U])))))));
                        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_14 [i_1] [i_2 + 1] [13U] [i_4 + 1] [15U])) / (((arr_1 [i_1] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [9] [i_1 - 2]))))))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_2] [i_2])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(signed char)8])) ? (arr_1 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_5]))))))));
        var_16 = ((/* implicit */int) arr_18 [i_5] [i_5]);
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            arr_22 [i_5] [i_6] = ((/* implicit */int) ((arr_20 [i_5] [i_6] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_5])))));
            var_17 = ((/* implicit */signed char) (~(arr_6 [i_5] [1ULL])));
            var_18 = ((/* implicit */unsigned short) var_3);
        }
    }
    var_19 = ((/* implicit */unsigned short) (((!(var_7))) ? (var_3) : (((1988285229) - ((-(((/* implicit */int) var_6))))))));
    var_20 = ((/* implicit */int) var_1);
}
