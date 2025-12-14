/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143030
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
    var_17 |= ((/* implicit */unsigned char) 1073741824U);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) min((1610612736U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
        var_18 = 705532890U;
        var_19 = var_14;
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 7412096279044690617ULL)))))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_2] [(unsigned short)14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967286U))));
                        arr_16 [i_2] [i_2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((11034647794664860999ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 11014811820038306484ULL))))));
                    }
                } 
            } 
            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (7412096279044690629ULL) : (11014811820038306491ULL)));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_7))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            arr_20 [i_5] [i_1] = ((/* implicit */_Bool) (+(min((((/* implicit */int) arr_8 [i_1] [i_1] [(signed char)14] [i_5])), (((((/* implicit */_Bool) arr_5 [11ULL] [i_5])) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) var_9))))))));
            arr_21 [(_Bool)1] [i_5] [i_5] = ((/* implicit */signed char) var_0);
            var_22 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 7412096279044690617ULL)) && (((/* implicit */_Bool) 11034647794664860997ULL)))), ((!(((/* implicit */_Bool) 1168247651234004060ULL))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            arr_24 [i_1] = ((/* implicit */long long int) arr_7 [i_6 + 4] [i_6] [i_1]);
            arr_25 [i_1] [i_1] [i_6] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_23 [i_1] [i_6]))))), (arr_0 [i_1])))), (((11034647794664860987ULL) ^ (min((11034647794664860999ULL), (11034647794664860999ULL)))))));
            arr_26 [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17592051826688LL)) ? (7412096279044690624ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88)))));
            var_23 ^= ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_19 [i_6 + 2] [i_6 + 1])))), (((/* implicit */int) var_12))));
        }
    }
    var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-14))));
}
