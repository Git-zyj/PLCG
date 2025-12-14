/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156635
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
        var_11 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 967174016)), (14213506386540805398ULL)));
        var_12 = ((/* implicit */int) ((max((arr_0 [i_0]), (arr_0 [i_0]))) * (arr_0 [i_0])));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        var_13 &= ((/* implicit */int) ((unsigned long long int) ((long long int) 14213506386540805398ULL)));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1 + 2] [(unsigned char)15])) << (((((/* implicit */int) ((short) max(((unsigned short)27902), (((/* implicit */unsigned short) arr_5 [(unsigned short)17] [i_1])))))) - (27891)))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        var_15 ^= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (short)19536)), (4233237687168746218ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)26972), (((/* implicit */unsigned short) arr_8 [i_2]))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)38563)))))) >= (((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2])))) : (((/* implicit */int) arr_7 [i_2]))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) 1338613484142965460ULL);
    }
    var_16 = ((/* implicit */signed char) var_5);
}
