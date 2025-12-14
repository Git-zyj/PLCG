/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164296
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned long long int) var_12);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [2ULL] &= ((/* implicit */unsigned long long int) (-(0U)));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (short)32751);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned int) max((-1LL), (((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))) <= (arr_11 [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [18ULL] [18ULL] [6U] [i_4] [12ULL])) <= (((/* implicit */int) (short)5151)))))) : (((var_12) ^ (((/* implicit */long long int) 11U))))))));
                                arr_15 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((short) 2608677141774905501ULL))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2LL)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_0] [i_1])))))), (((arr_4 [i_0] [i_1] [i_2]) * (((/* implicit */unsigned long long int) arr_14 [i_1] [i_0] [i_1] [i_3 - 1] [i_4] [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)6905)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))));
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] = max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U))))), (arr_6 [i_1] [i_2] [i_4 - 1]))), (arr_6 [i_3 - 1] [i_4 - 2] [i_4]));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0])))))), (arr_4 [i_0] [0ULL] [i_0])));
        arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((long long int) 6755399441055744LL)) - (((/* implicit */long long int) ((((/* implicit */_Bool) 6755399441055751LL)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6906))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((unsigned long long int) arr_13 [i_0] [i_0] [i_0] [16U] [i_0]))));
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            arr_23 [i_5] = ((/* implicit */short) arr_21 [i_6]);
            var_16 = ((/* implicit */int) ((511U) == (((/* implicit */unsigned int) arr_21 [i_5]))));
            arr_24 [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5])))))))), (((((/* implicit */_Bool) max((2194971910U), (((/* implicit */unsigned int) arr_22 [i_5] [i_5]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_18 [i_5])) : (arr_21 [i_6])))) : (min((14U), (((/* implicit */unsigned int) (short)8825))))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 3; i_9 < 24; i_9 += 2) 
                {
                    for (short i_10 = 3; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (var_7)));
                            arr_36 [i_5] [i_7] [13ULL] [i_9 + 1] [i_8] [i_9 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_10 + 1]))));
                        }
                    } 
                } 
            } 
            var_18 &= ((/* implicit */unsigned int) (-(((int) max((((/* implicit */unsigned long long int) arr_30 [i_7] [(short)12] [16U] [(short)12])), (arr_19 [i_5]))))));
        }
        arr_37 [i_5] = ((/* implicit */_Bool) ((unsigned int) 11U));
    }
    for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((signed char) arr_22 [i_11] [i_11])))));
        arr_41 [i_11] = ((/* implicit */unsigned char) min((((short) min((233668911865560023LL), (((/* implicit */long long int) (_Bool)1))))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [16ULL])))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((short) var_4)))));
    }
    for (int i_12 = 0; i_12 < 10; i_12 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) arr_6 [i_12] [i_12] [i_12]);
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned int) (short)5769)))));
        var_23 = ((/* implicit */long long int) min((max((((/* implicit */int) (short)-9770)), (-1747268266))), (((/* implicit */int) (signed char)-119))));
    }
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((signed char) var_11)))));
}
