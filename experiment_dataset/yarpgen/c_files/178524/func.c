/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178524
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)28154)) ? (14121773978117733891ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_15 = arr_8 [i_0] [i_0] [i_2] [i_1] [i_0];
                            arr_13 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2]);
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_4 + 1] [i_3 + 2])) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_4 + 1] [i_3 + 2])) : (((/* implicit */int) arr_3 [i_1 - 2] [i_4 + 1] [i_3 + 2]))));
                            arr_14 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_4 + 1] [i_3 + 3] [i_2] [i_1 - 1] [14ULL]))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_4 + 1]))) : (18446744073709551615ULL)));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0] [2ULL])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (18446744073709551601ULL)))) ? (((((/* implicit */_Bool) 9223372036854775798LL)) ? (var_14) : (arr_10 [i_0] [i_0] [i_0] [(_Bool)0] [8U] [i_1]))) : (((var_4) << (((((/* implicit */int) arr_6 [9U] [i_1] [9U])) - (65249)))))));
        }
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_13))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) : (var_0)));
}
