/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145102
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) 6422247884767761797ULL);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1924145348608LL) << (((((/* implicit */int) (unsigned short)1024)) - (1010)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) >> (((((var_4) ? (12024496188941789829ULL) : (((/* implicit */unsigned long long int) var_11)))) - (12024496188941789808ULL)))))) : ((-(max((var_13), (((/* implicit */unsigned long long int) var_15))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) / (6422247884767761786ULL)))) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_2] [i_2] [i_2]))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)165)) ? (arr_5 [i_2] [i_2] [21ULL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            arr_16 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) var_9)), (var_6))))) ? (max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) max((6422247884767761802ULL), (((/* implicit */unsigned long long int) 262143U))))) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) ((unsigned short) 12024496188941789809ULL)))))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) 12024496188941789814ULL))));
        }
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-56)) ? (((long long int) 3458025367251320337ULL)) : (((/* implicit */long long int) max((((((/* implicit */int) (signed char)127)) << (((/* implicit */int) var_7)))), ((+(((/* implicit */int) arr_1 [i_3])))))))));
            var_20 = ((/* implicit */short) max((((/* implicit */int) var_7)), (((((/* implicit */int) (signed char)-127)) - (((/* implicit */int) (_Bool)1))))));
            arr_20 [i_3] [i_5] [i_5] &= ((/* implicit */_Bool) (+(((((/* implicit */int) arr_7 [i_3])) + (((/* implicit */int) (signed char)32))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2119295060) ^ (((/* implicit */int) arr_7 [i_3]))))) ? (((((/* implicit */int) var_0)) * ((~(((/* implicit */int) arr_8 [i_3] [i_3])))))) : (((((/* implicit */int) min(((unsigned char)165), (((/* implicit */unsigned char) (_Bool)0))))) | (((/* implicit */int) var_3))))));
        }
        arr_21 [i_3] = ((/* implicit */long long int) var_15);
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) ((((/* implicit */int) ((short) (unsigned short)2))) >= (((/* implicit */int) var_2))))) : (((/* implicit */int) (_Bool)1))));
}
