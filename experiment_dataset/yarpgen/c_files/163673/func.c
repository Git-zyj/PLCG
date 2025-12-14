/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163673
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
    var_19 = ((/* implicit */long long int) ((var_2) != (var_1)));
    var_20 = ((/* implicit */signed char) (unsigned short)16);
    var_21 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0] [(unsigned short)5]);
            var_22 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_1 [1ULL])), (7577744984040335104ULL))) ^ ((~(((arr_1 [i_0]) ? (9603080275357806955ULL) : (11768986527740100049ULL)))))));
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            arr_9 [i_2] = 2147483643;
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (min((((/* implicit */long long int) arr_1 [i_2])), ((-9223372036854775807LL - 1LL))))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (var_11))) : (arr_3 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8843663798351744680ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (18446744073709551598ULL)))) || (((/* implicit */_Bool) var_18)))))));
            var_24 = ((/* implicit */unsigned short) (!(min(((!(((/* implicit */_Bool) var_12)))), (((_Bool) 2397256893U))))));
        }
        for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            var_25 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 11768986527740100048ULL))));
            var_26 ^= ((/* implicit */int) var_2);
            var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))))))));
        }
        var_28 = min((((/* implicit */unsigned long long int) 3979359650U)), (8843663798351744660ULL));
    }
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        arr_15 [i_4] [i_4] = arr_12 [(unsigned short)7];
        arr_16 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_4])) ? ((+(((((/* implicit */_Bool) (unsigned short)53574)) ? (((/* implicit */int) arr_13 [i_4] [14U])) : (((/* implicit */int) var_17)))))) : (((/* implicit */int) arr_14 [i_4]))));
    }
}
