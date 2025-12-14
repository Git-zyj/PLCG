/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135512
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
    var_14 &= ((/* implicit */_Bool) (unsigned short)192);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0 + 1] [i_1 + 1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), ((unsigned short)32640)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36809))) : (((4382079522980867062ULL) - (((/* implicit */unsigned long long int) 1758152174U))))))));
            var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15872))) : (arr_3 [i_0] [i_0 - 1])))) & ((~(2417461203519648915ULL)))))) ? (3147552356U) : (min((3128221260U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_5 [i_1 + 1] [i_0 - 3] [i_0 + 1]) <= (arr_5 [i_0] [i_0 - 2] [i_1 + 1])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 1734515670U)))))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) arr_2 [i_2 + 1])))) ? (arr_5 [i_0] [i_2 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3] [i_2]))))) <= (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_2 + 1] [i_2])))));
            arr_10 [i_0] [(_Bool)1] [i_0 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0 - 1] [i_2]))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            arr_13 [i_3] [i_3] = max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_5) : (var_11)))) ? (((((/* implicit */_Bool) arr_2 [5LL])) ? (2536815125U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23487))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)2044)) - (((/* implicit */int) var_4))))))));
            arr_14 [i_0] [8U] [i_0] |= ((/* implicit */int) var_12);
            var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)23489)), (var_13)));
            var_18 |= (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 1]))) & (((((/* implicit */_Bool) arr_12 [i_0])) ? (4432087320787138800ULL) : (((/* implicit */unsigned long long int) -1905970708)))))));
        }
        var_19 &= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -5085864578450343LL)) ^ (4342501475441278025ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (2629302125U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1147414915U)) || (((/* implicit */_Bool) 3147552373U)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), ((~(18030504982367048448ULL)))));
        var_21 -= var_3;
    }
    for (unsigned int i_5 = 3; i_5 < 24; i_5 += 1) 
    {
        arr_22 [8] [(short)10] &= ((/* implicit */unsigned int) max((arr_18 [i_5]), (((((/* implicit */_Bool) min((5085864578450342LL), (-4692279157807333444LL)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_18 [(short)24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        var_22 = ((/* implicit */_Bool) (short)23490);
        arr_23 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_5 - 1]))));
        var_23 = ((/* implicit */unsigned char) min(((-(((unsigned int) arr_20 [i_5])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5 - 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))))));
    }
}
