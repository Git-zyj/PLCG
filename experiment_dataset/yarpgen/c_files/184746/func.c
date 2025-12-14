/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184746
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
    var_15 &= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_1 [(short)5]))) ? (((/* implicit */int) (short)-3695)) : (((/* implicit */int) (!((_Bool)0))))))) & (((max((var_4), (((/* implicit */unsigned long long int) var_14)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (short)3694))))))))));
        arr_4 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (0U)))), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) ((int) arr_6 [i_1]))), (((max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_5 [i_1] [i_1]))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))))));
        var_18 = ((/* implicit */unsigned short) (short)3694);
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */unsigned short) var_6)))))))), (min((((/* implicit */unsigned int) max((var_10), (arr_2 [i_1])))), (((arr_5 [i_1] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_9 [i_2] = ((/* implicit */signed char) arr_3 [i_2]);
            var_20 = ((/* implicit */_Bool) max((var_20), (arr_2 [i_1])));
        }
        for (int i_3 = 4; i_3 < 15; i_3 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 249729848U)) ? (var_8) : (var_11)))))));
            var_22 = (+(((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */int) ((unsigned short) arr_11 [i_1]))) : (((/* implicit */int) arr_6 [i_3 - 1])))));
        }
        arr_12 [i_1] [i_1] = ((/* implicit */int) arr_1 [i_1]);
    }
    var_23 = ((/* implicit */_Bool) ((long long int) max((var_4), (((/* implicit */unsigned long long int) (~(var_3)))))));
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)4538))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((var_6) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) (unsigned char)0)))))));
}
