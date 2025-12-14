/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104881
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
    var_10 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1665917268U)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (unsigned char)85))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)85))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))) - (var_1))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_12 ^= arr_3 [i_0] [i_1] [i_3];
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_2])), (7475768711432612783LL)))) ? (((((/* implicit */_Bool) 2629050027U)) ? (-666388432950338004LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))))) : (((/* implicit */long long int) 1454398915U))))) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 848474605U)) || (var_8))))))))));
                        arr_10 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_2] [i_3]);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)85))))), (((((/* implicit */_Bool) (unsigned char)96)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))) * (12593857510178955001ULL)))));
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                for (int i_7 = 4; i_7 < 8; i_7 += 1) 
                {
                    {
                        arr_23 [i_4] [i_6] [i_6] [i_6] [i_7 - 1] [i_6] = ((/* implicit */unsigned long long int) -666388432950338004LL);
                        arr_24 [i_4] [i_4] = ((/* implicit */unsigned short) ((long long int) ((long long int) arr_21 [i_7 - 1] [(unsigned char)6] [i_7 - 1] [i_7] [i_7] [i_4])));
                        var_15 = ((/* implicit */unsigned int) ((short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_4])) : (arr_19 [i_4] [i_5] [i_6] [i_7 + 1]))))));
                        arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((((((/* implicit */int) arr_13 [i_4] [i_5] [i_4])) + (2147483647))) << (((((-666388432950338004LL) + (666388432950338032LL))) - (28LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4635878867515287493LL))))))));
                        arr_26 [i_4] [i_5] [i_4] [4] = var_7;
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned short) var_7);
        var_17 = (i_4 % 2 == zero) ? (((/* implicit */unsigned short) min((((var_2) << (((arr_15 [i_4] [i_4]) - (9185399547333933477LL))))), (((unsigned int) arr_15 [i_4] [i_4]))))) : (((/* implicit */unsigned short) min((((var_2) << (((((arr_15 [i_4] [i_4]) - (9185399547333933477LL))) + (1566588322216549080LL))))), (((unsigned int) arr_15 [i_4] [i_4])))));
    }
}
