/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152922
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_10 -= ((/* implicit */signed char) 17218502421402618480ULL);
                arr_6 [i_0] &= ((/* implicit */unsigned int) ((17218502421402618480ULL) > (0ULL)));
                var_11 = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_2 - 1] [i_3] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 10901660764905408250ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))), (((/* implicit */long long int) ((unsigned short) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) (signed char)80)))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_4] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) var_9)) : (9134906961235612453ULL)))));
                    arr_16 [i_4] [i_3] [i_2] [i_2] = ((/* implicit */signed char) arr_10 [i_3]);
                    arr_17 [i_2] [(_Bool)1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_2] [i_3] [i_3]))) ? (((((/* implicit */_Bool) var_9)) ? (2394058193962170922ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 15; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                arr_22 [i_5] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!((!(arr_13 [9U])))))), (((unsigned long long int) arr_14 [i_5 - 3] [i_5 + 1] [i_5 + 1]))));
                var_12 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_14 [i_6] [i_6] [i_5])) << (((/* implicit */int) arr_14 [i_5 - 3] [i_5] [i_6])))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_13 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(signed char)12] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_13 [i_6]))))), (max((18446744073709551607ULL), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 13165579068449415678ULL)))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 14; i_8 += 2) 
                    {
                        for (long long int i_9 = 1; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_14 = 1228241652306933136ULL;
                                var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) 3599488990U)) <= (arr_1 [i_8] [i_9])))) | (((((/* implicit */_Bool) 4095)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_7]))))));
                                arr_31 [i_5] [i_6] [i_7] [i_7] [i_9] = ((/* implicit */unsigned short) (_Bool)1);
                                var_16 = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_9)) : (565499884020966362LL))) + (9223372036854775807LL))) << (((max((((/* implicit */long long int) 2033312254U)), (var_3))) - (2033312254LL))))) <= (((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)57)))))))));
    /* LoopNest 2 */
    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        for (unsigned short i_11 = 1; i_11 < 24; i_11 += 2) 
        {
            {
                var_18 -= ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((+(9223372036854775807LL))))) % (((/* implicit */long long int) ((/* implicit */int) max((arr_32 [i_10]), (((/* implicit */unsigned short) ((((/* implicit */long long int) 4294967291U)) > (var_3))))))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (short)-32751)), (1883995563U)))))) ? ((-(((arr_2 [i_10] [i_10] [i_11 - 1]) ? (((/* implicit */unsigned long long int) var_1)) : (17218502421402618480ULL))))) : (((/* implicit */unsigned long long int) max((min((var_1), (((/* implicit */unsigned int) arr_34 [i_11])))), (max((((/* implicit */unsigned int) -1866083297)), (11U)))))))))));
                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)33774))));
                arr_38 [i_10] [(signed char)10] [i_11] = ((/* implicit */long long int) arr_4 [i_10]);
            }
        } 
    } 
}
