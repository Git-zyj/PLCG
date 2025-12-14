/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179877
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
    var_17 = ((/* implicit */_Bool) (short)-31764);
    var_18 = ((/* implicit */unsigned char) -4LL);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [20U] &= (~(((/* implicit */int) (((~(((/* implicit */int) (unsigned short)17493)))) <= (((/* implicit */int) ((2131088788342534029LL) != (var_10))))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(13U)))) - ((~(((((/* implicit */_Bool) var_8)) ? (arr_3 [0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31661))))))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31764)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-31764)))))) : (max((((/* implicit */long long int) ((_Bool) (unsigned short)39941))), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)16))) : (var_10)))))));
        arr_8 [10U] [i_1] = ((/* implicit */unsigned long long int) 15U);
        arr_9 [(unsigned char)18] [i_1] &= ((/* implicit */unsigned short) (~(((((/* implicit */int) ((_Bool) arr_3 [4ULL]))) / (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) var_13))))))));
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)65534)) ? (1549386530U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) arr_1 [i_2]))))) ? ((-((-(var_1))))) : ((~((~(((/* implicit */int) (unsigned char)0))))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)175))));
        var_21 = ((/* implicit */unsigned char) ((((((unsigned long long int) arr_12 [i_2])) < (((6677267140101608071ULL) / (81349239147816075ULL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : (((((/* implicit */int) (signed char)-1)) - ((-(((/* implicit */int) (_Bool)0))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (_Bool)0)) : (1871018154)));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (2232871346751579848LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_3] [i_3])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            for (short i_5 = 3; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_24 [i_3] [(unsigned char)12] [1U] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31772)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)9216))))) % (((((/* implicit */_Bool) 1871018183)) ? (805306368U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250)))))));
                    var_23 ^= ((/* implicit */int) arr_5 [i_4 - 1]);
                    arr_25 [i_5 - 3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3428466655882227426LL) / (((/* implicit */long long int) 8U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)39933)) : (((/* implicit */int) arr_20 [14U] [(signed char)13]))))) : (((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-96)))))));
                }
            } 
        } 
        arr_26 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
        var_24 = ((/* implicit */unsigned int) ((((arr_11 [i_3] [i_3]) + (9223372036854775807LL))) >> (((arr_11 [i_3] [i_3]) + (4613527124399980374LL)))));
    }
}
