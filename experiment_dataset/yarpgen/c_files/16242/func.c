/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16242
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
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0 - 1] [i_0]) : (var_2)))) && (((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_0 [i_0 + 1])))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned int) (~(15115283268590577280ULL)));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) (short)(-32767 - 1))))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 7; i_3 += 1) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] [9LL] = ((((arr_1 [i_2] [i_2 - 1]) * (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0 + 1] [i_0] [0U])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_0] [i_0])) >= (var_17))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((unsigned long long int) var_3)) : (((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_4] [6] [i_4 + 1] [8LL])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) << (((var_0) - (6363083301863866074ULL)))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 2]))));
                        }
                        var_24 = ((/* implicit */unsigned short) ((long long int) var_5));
                    }
                } 
            } 
        }
    }
    var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_14)))) : (((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11)))))));
    var_26 = ((/* implicit */int) var_11);
}
