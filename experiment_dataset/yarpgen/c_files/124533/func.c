/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124533
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
    var_14 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6441605321268283566ULL)) ? (((/* implicit */unsigned int) ((((var_7) + (2147483647))) << (((((-1LL) + (32LL))) - (31LL)))))) : (((2095104U) & (((/* implicit */unsigned int) var_11))))))) : (((((((((/* implicit */long long int) var_11)) | ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) << (((var_10) - (13863369019922985697ULL)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-20006))) & (var_9)));
                        arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [(signed char)7]);
                    }
                } 
            } 
        } 
        var_16 *= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned char i_4 = 2; i_4 < 18; i_4 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) arr_11 [i_4 - 1]);
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 637977711)) && (((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 1])))) ? (var_5) : (((/* implicit */unsigned long long int) var_4))));
        var_19 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 0LL)))) || (((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) 25U)))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (long long int i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 2) 
                        {
                            {
                                arr_25 [i_4 - 1] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) var_12);
                                var_20 = ((/* implicit */signed char) min(((short)-30110), ((short)20005)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_15 [i_4] [i_6 - 1]))));
                    arr_26 [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5541564337891343662ULL))));
                }
            } 
        } 
    }
}
