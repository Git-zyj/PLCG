/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158882
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_4 [11ULL] [11ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) -4377250907091156211LL)))));
        arr_5 [i_0] = ((/* implicit */long long int) ((short) var_6));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned long long int) (+((-(((var_9) / (-4580074800953684277LL)))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) 4377250907091156234LL);
        var_11 = ((/* implicit */long long int) min((var_11), (min((((/* implicit */long long int) ((((/* implicit */long long int) arr_8 [i_1])) < ((~(var_6)))))), (arr_2 [9LL] [i_1])))));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_13 [i_2] = ((long long int) ((long long int) ((var_7) % (9007199254708224ULL))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) 4377250907091156230LL))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 8; i_5 += 1) 
                {
                    {
                        var_13 = ((/* implicit */long long int) (+(((min((((/* implicit */unsigned long long int) -4377250907091156192LL)), (arr_19 [i_2] [i_2]))) + (((/* implicit */unsigned long long int) 4377250907091156210LL))))));
                        arr_21 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (18446744073709551605ULL)))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */unsigned long long int) var_5)) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((var_6) ^ (((/* implicit */long long int) 4209879019U))))) : ((-(2ULL))))) - (7531571539767921409ULL)))));
                    }
                } 
            } 
        } 
        arr_22 [i_2] [i_2] = ((/* implicit */long long int) (+((~(10ULL)))));
    }
    var_14 = ((unsigned int) ((((/* implicit */unsigned long long int) (+(var_9)))) ^ (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)0))))));
    var_15 = ((/* implicit */unsigned long long int) ((short) (+(((long long int) var_9)))));
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 1141742594850101265ULL)) && (((/* implicit */_Bool) var_5))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        var_17 += ((/* implicit */unsigned int) arr_25 [i_8] [15ULL]);
                        var_18 = ((1141742594850101265ULL) & (arr_26 [i_6]));
                        arr_32 [i_8] = ((/* implicit */unsigned int) ((4286578688LL) >= (arr_24 [i_6])));
                    }
                    var_19 = ((/* implicit */long long int) ((2437445903U) > (2959735310U)));
                    var_20 ^= min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [12ULL])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -4286578681LL)) & (9658638528893694934ULL))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_9);
}
