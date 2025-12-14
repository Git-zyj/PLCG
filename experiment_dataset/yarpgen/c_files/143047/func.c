/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143047
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
    var_12 = ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        arr_3 [(signed char)15] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-32582))));
        var_14 = ((/* implicit */unsigned long long int) (unsigned char)196);
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [8]);
        arr_5 [18ULL] [(signed char)1] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) (unsigned char)227)))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_8 [i_1] [9] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_1])) : (var_7))));
        arr_9 [(unsigned char)14] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1), (((/* implicit */int) var_10))))) ? (min((((/* implicit */unsigned long long int) (short)23824)), (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) 193869295)) ? (var_7) : (((/* implicit */int) (short)23824)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-3604)) : (((/* implicit */int) (unsigned char)196)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) var_5);
            var_16 ^= ((/* implicit */int) arr_6 [i_2]);
            var_17 ^= ((short) (unsigned char)244);
        }
    }
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 14; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65067))) ^ ((~(5304196853925324223LL))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18241162332877432542ULL)) ? (((/* implicit */int) (short)-18314)) : (((/* implicit */int) arr_7 [i_3 + 3]))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3 - 2])) ? (((((/* implicit */int) (unsigned short)15544)) / (((/* implicit */int) arr_11 [6] [i_3 - 3] [i_3])))) : (((/* implicit */int) (unsigned char)244))));
    }
    var_20 |= ((/* implicit */unsigned short) min(((+(var_3))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
}
