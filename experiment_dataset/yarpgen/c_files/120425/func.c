/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120425
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
    var_11 = min((var_2), (((/* implicit */long long int) max((((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_3)) - (47))))), (var_7)))));
    var_12 = ((/* implicit */short) min((((/* implicit */long long int) min((max((var_4), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) min((var_9), (var_8))))))), (((min((-8457145786213683094LL), (8457145786213683094LL))) ^ (max((3432908710626751581LL), (((/* implicit */long long int) var_6))))))));
    var_13 = ((/* implicit */unsigned long long int) 1112719411U);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
            var_14 = ((/* implicit */unsigned int) arr_2 [i_0]);
            arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) / (((/* implicit */int) (signed char)10)))) << (((max((1638433690783959359ULL), (((/* implicit */unsigned long long int) 8457145786213683093LL)))) - (8457145786213683088ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) var_6))))) : (8457145786213683092LL)));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) / (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) var_4)), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (var_8)))))))));
            arr_8 [i_2] [i_0] [i_0] = var_1;
            arr_9 [i_0 - 1] [i_2] [i_2] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */short) var_1))))), (min((arr_0 [i_0]), (arr_0 [i_2])))))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 8457145786213683099LL)) || ((_Bool)1)))) == (((/* implicit */int) arr_2 [i_0]))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_4))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 17; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) var_3);
                        var_19 = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
        }
        arr_17 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0])), (5341912978046236448ULL)))) ? (((min((((/* implicit */unsigned long long int) var_3)), (arr_0 [2U]))) << (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_0))))) : (((/* implicit */unsigned long long int) min(((-(var_7))), (((/* implicit */int) min((((/* implicit */short) var_9)), ((short)15230)))))))));
        arr_18 [i_0] [i_0] = ((/* implicit */int) (~(min((max((((/* implicit */unsigned long long int) arr_12 [i_0])), (5818683215486675428ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_6)))))))));
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_2 [i_6]);
        arr_23 [i_6] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_6]))));
    }
}
