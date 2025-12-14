/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171287
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((_Bool) ((max((var_8), (((/* implicit */int) var_7)))) << (((((((/* implicit */_Bool) 2506532427U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) - (11562)))));
        var_17 = (!(((((/* implicit */int) var_3)) != (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_2 [i_0] [(short)9])))))));
        var_18 = ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0] [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_4)))))) & (((unsigned long long int) var_2))))));
        var_19 |= ((((/* implicit */_Bool) min((arr_4 [(_Bool)1]), (arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (short)-19601))))))) : (((((/* implicit */unsigned long long int) ((int) 1788434869U))) & (((((/* implicit */_Bool) 1659617491)) ? (913942859539091233ULL) : (((/* implicit */unsigned long long int) 3373998667U)))))));
        var_20 = ((/* implicit */signed char) var_12);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((var_3) ? (1659617491) : (((/* implicit */int) (unsigned char)243))))) : (min((arr_4 [i_1]), (arr_4 [i_1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 += ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (var_0))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)-84)) != (((/* implicit */int) (unsigned char)167)))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) 1659617491)), (2329023846U)));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (((_Bool)1) ? (-1659617491) : (((/* implicit */int) var_3)))))) <= (((/* implicit */int) var_5))));
    var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (1659617491)))) ? (var_6) : ((-(((/* implicit */int) ((short) -1034444353)))))));
}
