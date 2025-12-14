/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154995
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_14 += (-(((unsigned long long int) 10050683532200249110ULL)));
        var_15 = var_8;
        var_16 = ((/* implicit */unsigned long long int) var_5);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_17 = ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4893))))) : (var_4));
            arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((14071450529864494683ULL) + (9578066065327238323ULL))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8))));
        arr_8 [i_2] = var_7;
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? ((~(18244774261142615606ULL))) : (var_8)));
            arr_11 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) 2806542303068757780ULL)))));
        }
        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            var_19 = ((unsigned long long int) (((~(var_10))) <= (var_4)));
            var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((long long int) 8052646942244116013ULL)) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2801682109419678214LL)) == (var_13)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_2] [i_2]))))) : (((long long int) var_4))));
            arr_14 [i_4 - 1] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 - 2])) ? (var_11) : (var_11))), (((((((/* implicit */unsigned long long int) var_5)) * (var_9))) / (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))))));
        }
        for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            arr_17 [i_5] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)37178))))) <= (((((/* implicit */_Bool) var_8)) ? (var_13) : (arr_10 [i_2] [i_2]))))));
            var_21 = (((~(arr_9 [i_5] [i_2] [i_5]))) & (((var_9) / (var_11))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                arr_21 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((unsigned long long int) var_9))));
                arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (var_9) : (var_1)))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) != (arr_0 [i_2])));
                var_23 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_5] [i_5])))))), (((var_0) | (((/* implicit */unsigned long long int) 8253944493460981767LL))))))) ? ((~((~(arr_19 [i_6] [i_6] [i_6]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_2] [i_2])), (8253944493460981774LL)))));
            }
        }
        var_24 = ((long long int) ((((/* implicit */unsigned long long int) var_7)) == (var_10)));
        var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-8253944493460981774LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19034)))))) ? (arr_15 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) >= (var_13)))))))) || (((/* implicit */_Bool) var_3))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        arr_25 [i_7] = (((+(var_9))) * (((((/* implicit */_Bool) (-(var_9)))) ? (var_0) : (var_6))));
        var_26 = ((/* implicit */long long int) (unsigned short)32767);
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))));
        var_28 ^= ((/* implicit */long long int) var_10);
    }
    var_29 = ((/* implicit */long long int) max((((max((((/* implicit */unsigned long long int) var_3)), (var_8))) / (var_11))), (max((2157007905486285731ULL), (((/* implicit */unsigned long long int) ((long long int) var_9)))))));
}
