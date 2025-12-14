/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183767
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_19 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0 - 1]))));
            var_20 = ((/* implicit */unsigned short) (~(var_8)));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_21 ^= arr_4 [i_0] [i_2];
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) (signed char)-100)) ? (((((_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)253)) + (((/* implicit */int) var_3))))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) / (11817209637537258589ULL))))))))));
        }
        arr_8 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)96)) ? (4611686018427387903ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? ((-(arr_6 [i_0 + 1] [i_0] [i_0 + 1]))) : (min((arr_6 [i_0] [i_0 + 1] [i_0 - 1]), (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_14)));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5443))) + (1723899525U))))));
            var_26 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) max(((unsigned short)1023), ((unsigned short)65535))))));
        }
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_27 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (-(var_2)))))));
            arr_13 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) arr_5 [i_0 - 1] [2ULL] [i_0 - 1]))));
        }
    }
    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 9223372019674906624ULL)) ? (((/* implicit */int) arr_11 [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_5])))) % (((/* implicit */int) var_3)))) >= (((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) (signed char)73))))) ? (((((/* implicit */_Bool) 4195551050992899836ULL)) ? (((/* implicit */int) arr_5 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_5 [i_5] [i_5] [i_5])))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_11 [i_5] [i_5]))))))));
        var_28 = ((/* implicit */unsigned short) ((unsigned long long int) var_0));
        var_29 *= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((arr_6 [i_5] [i_5] [i_5]) >= (((/* implicit */unsigned long long int) arr_2 [i_5]))))))) + ((-((-(((/* implicit */int) (_Bool)1))))))));
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)64517)) ? (arr_15 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))))))))));
    }
    var_31 = ((/* implicit */_Bool) (-((+(((/* implicit */int) ((unsigned short) (unsigned short)7740)))))));
}
