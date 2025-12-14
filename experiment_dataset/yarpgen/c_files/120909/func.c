/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120909
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
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [(unsigned short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)16796)) ? (((/* implicit */int) ((arr_1 [i_0] [i_0]) && (((/* implicit */_Bool) (unsigned short)8317))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2)) && (((((/* implicit */_Bool) 1332008609867111343ULL)) || (((/* implicit */_Bool) 0)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((_Bool) (~(((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10606))) : (16248624865635939578ULL))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (min((1332008609867111343ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1] [i_1]))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1] [i_1]))))), (((unsigned long long int) arr_1 [i_1] [i_1]))))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) arr_6 [(signed char)7] [1])) | (((/* implicit */int) arr_6 [i_1] [i_1])))) < (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-118)), ((unsigned short)8299))))))) | (((/* implicit */int) max((min((arr_6 [i_1] [12U]), ((unsigned short)8317))), (((/* implicit */unsigned short) var_7)))))));
    }
}
