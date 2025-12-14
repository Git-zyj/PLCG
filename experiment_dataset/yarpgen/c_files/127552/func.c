/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127552
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
    var_12 = ((/* implicit */unsigned short) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_5)) : (var_11))), (((576460752169205760ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [(signed char)2] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_3 [i_0] [13] = ((/* implicit */unsigned short) var_1);
        var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned int) var_2)) : (((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        arr_7 [4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (-330267868) : (((/* implicit */int) var_6))))));
        arr_8 [12ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) == (((/* implicit */int) var_4))));
        arr_9 [i_1] &= ((/* implicit */int) ((arr_1 [i_1 + 1]) <= (((/* implicit */unsigned long long int) arr_6 [i_1 + 1]))));
        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) ((6768850661683225817ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (arr_4 [i_2 - 1]) : (((/* implicit */int) var_4)))))));
            var_16 = 260046848;
            var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_2])))) ? (((/* implicit */unsigned long long int) -1147263441)) : (576460752169205760ULL)));
            arr_14 [i_2] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned short)9131)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned short)56404)))));
        }
    }
    var_18 = ((/* implicit */unsigned short) var_3);
}
