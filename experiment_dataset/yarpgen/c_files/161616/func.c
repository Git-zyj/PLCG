/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161616
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [(unsigned short)0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (15591164893028867268ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)8]))))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((int) var_4))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) | (var_3)))))));
                    var_11 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0])))), ((-(((/* implicit */int) arr_1 [i_2]))))));
                    arr_11 [5LL] [5LL] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned short)4299)) / (arr_6 [13U]))) | (((/* implicit */int) (unsigned short)34509)))) | (((((/* implicit */_Bool) -270830508)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) (unsigned short)63623))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2748200067U))))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_6))) ? ((((!(((/* implicit */_Bool) (short)-27930)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (-270830514) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_10)))))));
    var_14 = ((/* implicit */signed char) var_0);
}
