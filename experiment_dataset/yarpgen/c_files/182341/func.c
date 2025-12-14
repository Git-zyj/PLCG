/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182341
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
    var_10 = ((/* implicit */unsigned long long int) max(((unsigned short)65530), (var_9)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_11 -= ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned int) var_9);
        arr_3 [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [(unsigned short)4] [i_2] = var_2;
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) arr_7 [6U] [i_2 + 3] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] = ((/* implicit */unsigned short) arr_11 [i_2 + 3] [i_2 + 3] [(signed char)17] [i_2 + 4]);
                                var_13 |= ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
                                arr_17 [i_4] = (unsigned short)65530;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
    {
        var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (max(((~(((/* implicit */int) arr_5 [i_5])))), (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) var_9))))));
        arr_21 [i_5] = ((/* implicit */unsigned int) (unsigned short)0);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6)) ? (4146234920U) : (148732376U)));
        var_17 &= ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)117)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [10ULL] [i_5] [10ULL]))) : (var_2)));
    }
    var_18 = ((/* implicit */unsigned char) 8197623648808078530ULL);
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    arr_30 [i_6] = ((/* implicit */signed char) var_5);
                    arr_31 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_6] [i_7 - 2] [i_6]))));
                    var_19 = ((/* implicit */unsigned long long int) arr_4 [i_8 - 1] [i_7 + 2]);
                    var_20 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_6] [(signed char)4] [10U] [i_8 - 1] [i_7] [2LL]))));
                    arr_32 [i_6] [i_6] [i_8] = ((/* implicit */signed char) arr_0 [i_8 + 2] [i_7 - 2]);
                }
                var_21 = ((/* implicit */unsigned int) arr_10 [i_6] [(unsigned short)7] [i_6] [i_6]);
            }
        } 
    } 
    var_22 |= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)18727))));
}
