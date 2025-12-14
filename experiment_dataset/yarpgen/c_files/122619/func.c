/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122619
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (2199023255551ULL))), (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) var_7)))))))))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))), (min((var_3), (((/* implicit */unsigned long long int) var_7)))))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (max((((/* implicit */unsigned int) var_5)), (var_12)))))) != (((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned char)172))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */short) arr_1 [i_0 + 1] [(_Bool)1]);
            var_18 *= ((/* implicit */_Bool) (-(var_9)));
            var_19 |= ((_Bool) ((((/* implicit */_Bool) min((arr_3 [i_1 + 1] [(unsigned short)6]), (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23))) : (arr_2 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) (~(-1))))));
            arr_7 [i_0] = ((/* implicit */int) var_1);
        }
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_8 [i_2 - 1] [i_0] [i_0 + 2]))));
            arr_11 [i_0] = ((/* implicit */short) var_14);
            arr_12 [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)186)) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (unsigned short)46)) : (((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) (unsigned char)171)))))))));
        }
        arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) >> (((/* implicit */int) arr_5 [i_0 + 2]))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_2))));
        arr_14 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((arr_2 [i_0] [i_0]) * (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0 + 1]))) : (((/* implicit */int) var_13))));
        var_22 = ((/* implicit */unsigned long long int) min((((unsigned int) var_14)), (((arr_1 [i_0] [i_0 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
    }
    for (int i_3 = 3; i_3 < 19; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            arr_20 [i_3] [i_3] [(unsigned char)16] = ((/* implicit */unsigned long long int) -4);
            var_23 = ((/* implicit */short) var_0);
            var_24 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_15 [i_3])))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) var_5))))) * ((~(((var_0) << (((((/* implicit */int) var_13)) - (37))))))));
            var_25 = arr_16 [i_3];
        }
        arr_21 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)55164)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_5))))) : (6567366376673299712LL)));
    }
}
