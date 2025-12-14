/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133372
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
    var_16 = ((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)88)));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) arr_0 [i_0 - 4]);
        arr_3 [i_0 - 4] = ((((((/* implicit */_Bool) (short)12)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)4)))) ^ (((/* implicit */int) var_10)));
        var_18 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)215)) ? (((/* implicit */int) var_10)) : (arr_0 [(unsigned short)12])))) ? (((int) (_Bool)1)) : (arr_0 [i_0]))), (((/* implicit */int) ((var_3) < ((((_Bool)1) ? (((/* implicit */int) (unsigned short)18049)) : (var_3))))))));
    }
    for (signed char i_1 = 4; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (((-((-(arr_0 [i_1]))))) ^ (((/* implicit */int) ((unsigned short) arr_5 [i_1 - 4] [i_1])))));
        var_20 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((var_3) / (((/* implicit */int) (short)220))))) > (max((((/* implicit */unsigned int) arr_5 [i_1 - 3] [(signed char)14])), (var_13)))))) < ((-(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-119)) + (119)))))))));
        arr_6 [i_1 - 3] [i_1] = ((/* implicit */unsigned short) arr_4 [(short)8] [i_1 - 4]);
        /* LoopSeq 3 */
        for (unsigned short i_2 = 3; i_2 < 19; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) 18251162462440795414ULL)))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 708163505)) : (16204628106337090965ULL)));
        }
        for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) /* same iter space */
        {
            arr_11 [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_9 [i_3 + 2] [i_1 - 4] [8])) % (((/* implicit */int) arr_9 [i_3 + 1] [i_1 - 3] [i_3 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_3 + 2])) < ((+(((/* implicit */int) (unsigned short)42041)))))))));
            arr_12 [i_1] [i_1 - 4] [i_3] = ((/* implicit */int) ((unsigned short) var_2));
            var_23 = ((unsigned char) ((arr_2 [i_1 - 1]) / (((/* implicit */long long int) var_3))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
        {
            var_24 *= ((/* implicit */signed char) (+(((/* implicit */int) (short)215))));
            var_25 = var_13;
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_1 + 1] [i_1 - 3])), (var_6))))) - (((((/* implicit */_Bool) ((unsigned char) 2242115967372460650ULL))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)47486))))) : (arr_13 [i_4] [i_4] [i_4])))));
        }
    }
    var_27 = var_2;
}
