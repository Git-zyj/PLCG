/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15697
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
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (1224702508U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 6; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((min((4300371473215884826ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1)) | (((/* implicit */int) (unsigned short)13))))))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_1 [i_0] [(unsigned char)1])))))))));
                    arr_7 [i_0] [(short)0] [i_1] = (unsigned short)65507;
                    arr_8 [i_0] [i_0] [7U] [i_1] = ((/* implicit */unsigned long long int) (short)1891);
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */int) ((811929925U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534)))))), (((((/* implicit */int) (unsigned short)14707)) % (((/* implicit */int) (unsigned short)1))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)29)) >= (((/* implicit */int) var_11))))) : (((/* implicit */int) (unsigned short)13148))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (unsigned short)43045))) & (((((/* implicit */int) (signed char)-78)) + (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((signed char) var_7))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 2305843009213693951LL)) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)1))));
}
