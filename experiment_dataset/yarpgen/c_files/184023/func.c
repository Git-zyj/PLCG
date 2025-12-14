/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184023
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4111141662U)), (var_0)))) ? (4111141677U) : ((+(min((var_4), (((/* implicit */unsigned int) (unsigned short)12145))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned long long int) var_1));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(4111141663U)))))))) <= (var_3)));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((max((var_3), (var_3))) + (((/* implicit */unsigned long long int) ((183825649U) - (183825658U)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)12145)) ? (max((var_3), (((/* implicit */unsigned long long int) arr_6 [4U])))) : (((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */long long int) arr_6 [i_1])))))))));
            var_13 = ((((29394961U) + (4111141672U))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65527))))));
            arr_9 [12ULL] [i_1] [10U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned short)53395), (((/* implicit */unsigned short) (signed char)105)))))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14240))) + (var_3))))) : (((/* implicit */unsigned long long int) ((min((4111141662U), (4111141676U))) + (((/* implicit */unsigned int) arr_6 [i_2])))))));
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)8))));
            var_14 = ((/* implicit */unsigned long long int) -1284333096035744142LL);
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (unsigned short)45089))));
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_3])))))) ? (var_9) : (((/* implicit */int) var_5)))))));
            var_16 -= (-((-(min((4294967295U), (((/* implicit */unsigned int) arr_12 [i_3] [i_3])))))));
        }
        arr_15 [6U] |= ((/* implicit */long long int) ((unsigned int) min(((~(var_8))), ((-(var_8))))));
        var_17 = ((/* implicit */int) min((var_17), (((((-2050626575) + (2147483647))) << (((((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned short)8] [i_1]))) : (4111141692U))) - (10715U)))))));
    }
    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) var_4)) ? (arr_16 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4 - 1])) ? (arr_7 [i_4 - 1]) : (arr_7 [i_4 + 1]))))));
        arr_19 [i_4] = ((/* implicit */int) 183825616U);
        var_19 = ((/* implicit */unsigned int) (unsigned short)4);
    }
}
