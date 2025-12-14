/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160983
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) - (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) arr_1 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (+((-(arr_0 [i_0] [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)87)), ((+(((((/* implicit */int) (short)0)) - (((/* implicit */int) arr_1 [i_1]))))))));
        arr_9 [i_1] = (signed char)-13;
        arr_10 [i_1] [i_1] = (short)0;
        arr_11 [i_1] [i_1] = ((unsigned char) (unsigned char)145);
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        arr_14 [i_2] [i_2] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (arr_0 [i_2] [i_2])));
        arr_15 [i_2] [i_2] = ((/* implicit */short) 2842624201U);
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)32760))))), (min((var_4), (var_4))))) : (((/* implicit */unsigned int) (+((-(var_13))))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)92)) & (var_12)));
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_19 [i_3] = ((((unsigned int) arr_1 [i_3])) <= (((/* implicit */unsigned int) ((int) arr_1 [i_3]))));
        arr_20 [i_3] = ((/* implicit */signed char) max((var_4), (((/* implicit */unsigned int) ((3136534848458479275LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            arr_23 [i_4] [i_3] = ((/* implicit */unsigned char) arr_1 [i_4]);
            arr_24 [i_3] [i_3] = ((/* implicit */unsigned char) arr_0 [i_3] [i_3]);
        }
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            arr_27 [i_3] [i_5] = ((1073741823U) + (198314733U));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 1; i_6 < 22; i_6 += 2) 
            {
                arr_30 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */int) var_0);
                arr_31 [i_5] [i_5] [i_5] [i_3] = ((/* implicit */long long int) 502811138U);
                arr_32 [i_3] [i_5] [i_5] [i_3] = (~(((/* implicit */int) (signed char)101)));
            }
            for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                arr_35 [i_3] [i_5 + 4] [i_5 + 3] [i_5] = ((/* implicit */int) 10284939585844915630ULL);
                arr_36 [i_3] [i_5] = ((/* implicit */unsigned short) ((291801808) % (((/* implicit */int) (short)-21570))));
            }
        }
        arr_37 [i_3] = ((/* implicit */unsigned int) arr_18 [i_3]);
    }
}
