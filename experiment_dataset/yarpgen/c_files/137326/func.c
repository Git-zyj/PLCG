/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137326
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
    var_20 = ((/* implicit */short) 13653982590434273583ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_21 -= ((/* implicit */signed char) var_5);
        var_22 = ((/* implicit */unsigned long long int) var_12);
    }
    for (short i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) 548682072064ULL)) ? (-1800917994495637437LL) : (5089038505617010544LL))), (((/* implicit */long long int) min((((/* implicit */int) (short)8748)), (var_4)))))) ^ (((/* implicit */long long int) ((((((/* implicit */int) var_6)) > (-1888710388))) ? ((+(((/* implicit */int) (short)-22622)))) : (arr_3 [i_1 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_23 = ((/* implicit */int) arr_2 [i_1]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                var_24 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
                var_25 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)8741))));
            }
            var_26 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (short)13046))))));
            var_27 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_18))))));
        }
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)8748))) : (-1800917994495637437LL)))) ? (((/* implicit */int) ((arr_5 [i_1]) > (arr_5 [i_1 - 2])))) : (1770813718))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        arr_19 [i_1 - 3] [i_1] [i_4] [i_4] [i_4] [6U] = ((/* implicit */unsigned short) ((1800917994495637451LL) ^ (-1800917994495637437LL)));
                        var_29 += ((/* implicit */int) ((long long int) ((short) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_7)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_7 = 2; i_7 < 9; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                {
                    arr_28 [i_7] [i_8] [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1800917994495637451LL)) ? (var_10) : (arr_7 [i_7 - 2])))) ? (min((arr_7 [i_7 - 2]), (((/* implicit */unsigned long long int) arr_6 [i_7 - 1] [i_7 + 2] [i_7 - 2])))) : (min((arr_7 [i_7 - 2]), (arr_7 [i_7 + 2]))));
                    arr_29 [i_7] [i_8] [i_8] [i_9] &= ((/* implicit */unsigned int) (signed char)-5);
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_18 [i_9]) ? (((/* implicit */int) arr_18 [i_8])) : (((/* implicit */int) arr_18 [i_9]))))) ? (min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) 2147483647)) : (1000331686U))), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        var_31 ^= ((/* implicit */unsigned int) var_18);
        var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-8749)) | (((/* implicit */int) (signed char)(-127 - 1)))))) : (arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 2])))));
        var_33 = ((/* implicit */unsigned long long int) 1138112160);
    }
}
