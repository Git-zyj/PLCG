/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140780
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) (+(max((((int) (unsigned char)253)), (((/* implicit */int) var_3))))));
        var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-((+(((/* implicit */int) var_6))))))), (((unsigned int) ((unsigned int) 1296327816U)))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */long long int) (!((((+(((/* implicit */int) (signed char)85)))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_13 = ((/* implicit */_Bool) ((unsigned long long int) -1LL));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_10 [i_1 + 1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4222272981U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0)))) / (((((/* implicit */_Bool) 6672076448305385069ULL)) ? (arr_5 [i_3] [i_2] [10ULL]) : (var_9)))));
                arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (arr_8 [i_1] [i_1] [i_1 + 1] [i_3])));
            }
        }
        var_14 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) arr_6 [i_1 + 1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])))))));
        var_15 = ((/* implicit */_Bool) (((+(((unsigned int) (short)10010)))) * (((/* implicit */unsigned int) (+(arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
    }
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned long long int) var_5);
        var_17 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)-10010)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21939)))))));
        arr_14 [i_4] = ((/* implicit */_Bool) (+((+((~(((/* implicit */int) var_4))))))));
        arr_15 [i_4] [(unsigned short)13] = (unsigned char)0;
        var_18 &= ((/* implicit */_Bool) (+((+((+(((/* implicit */int) (unsigned char)1))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (signed char)-85);
        var_20 = ((/* implicit */int) (unsigned char)158);
    }
    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_10)))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) + (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) var_5)))))))))));
}
