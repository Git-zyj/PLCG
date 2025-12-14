/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111094
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [6U] |= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_9)), (arr_0 [(unsigned char)16]))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) + (max((((/* implicit */long long int) var_12)), (var_9))))))));
        var_14 = ((/* implicit */unsigned int) var_10);
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) arr_4 [i_1]);
        arr_6 [i_1] [i_1] = 2059923345736888087ULL;
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) & (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))))) ? (((var_13) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-20)) < (((/* implicit */int) (_Bool)1))))))))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)19))))) < (((/* implicit */int) (_Bool)1))));
    }
    var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (4276166697U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (signed char)19)) / (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((short) (unsigned short)61594)))))) : (min((((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_17 |= ((/* implicit */unsigned long long int) (short)6941);
        var_18 = ((/* implicit */signed char) var_11);
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_7))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))))), (((((/* implicit */int) (unsigned short)65535)) % (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-1))))))));
        var_20 |= ((/* implicit */unsigned short) min((max((((5306191394534351081ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58713))) == (var_5)))))), (((/* implicit */unsigned long long int) var_4))));
        var_21 = ((/* implicit */int) arr_11 [i_3]);
    }
}
