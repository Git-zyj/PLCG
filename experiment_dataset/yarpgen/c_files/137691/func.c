/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137691
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
    var_12 = ((/* implicit */unsigned int) ((short) var_4));
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_2)) % (var_11)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_14 += ((/* implicit */signed char) ((((arr_0 [i_0 + 1]) != (arr_0 [i_0 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) : (max((((/* implicit */unsigned long long int) ((var_1) % (((/* implicit */int) var_6))))), (min((var_11), (((/* implicit */unsigned long long int) (short)-12718))))))));
        arr_5 [(unsigned short)15] [i_0] = ((/* implicit */unsigned long long int) var_0);
        arr_6 [14ULL] [(unsigned char)11] = ((/* implicit */short) arr_3 [i_0 + 2] [i_0]);
        var_15 = ((/* implicit */unsigned int) var_0);
    }
    for (unsigned int i_1 = 4; i_1 < 23; i_1 += 4) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_7 [(unsigned short)9] [(unsigned short)9]))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) min((arr_8 [i_1]), (((/* implicit */long long int) (_Bool)1)))))) + (((/* implicit */int) ((short) (unsigned char)41)))));
        arr_9 [i_1 - 2] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
        arr_10 [i_1] = ((/* implicit */unsigned char) arr_8 [i_1]);
    }
    for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        var_18 -= ((/* implicit */unsigned char) ((int) arr_8 [1LL]));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) 1745246955)), (var_11))))) ? (((/* implicit */int) (signed char)-108)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) (short)-11677))))));
        arr_15 [i_2 - 2] [i_2 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) ((arr_8 [i_2]) != (((/* implicit */long long int) min((var_3), (arr_13 [i_2 + 3] [(signed char)22]))))))) : ((~(((/* implicit */int) (unsigned char)215))))));
        var_20 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)11676)) ? (arr_12 [i_2] [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)11676))))))) : (((/* implicit */int) ((unsigned short) ((9193614616241787877LL) + (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    }
    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3))))) : (var_4)));
        arr_18 [i_3] = ((/* implicit */short) min((0LL), (((/* implicit */long long int) (short)-27))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)-11675)) + (((/* implicit */int) arr_16 [i_3])))), ((-(var_9)))))) || (((/* implicit */_Bool) (~((+(((/* implicit */int) arr_11 [i_3])))))))));
    }
}
