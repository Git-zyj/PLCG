/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112548
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8891058977667027523LL)) ? (4294967295U) : (1U)));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-90)) - (-171666554))))))) >> (((var_1) - (5163585298917452429LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_20 = ((/* implicit */_Bool) min((((arr_0 [i_1]) * (arr_0 [i_0 - 1]))), (((/* implicit */unsigned long long int) (unsigned char)28))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)4))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2231623440562191694LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned char) 4294967291U)))))) && (((/* implicit */_Bool) ((short) 1012691039)))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
                    {
                        arr_13 [i_4] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -2192549686748549391LL)) ? (-4453481055510938058LL) : (2231623440562191694LL))));
                        arr_14 [9LL] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) (((-(7148641621714007134LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)512))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_23 -= ((/* implicit */long long int) var_16);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)56085)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16813))) : (arr_1 [i_0 + 1])));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0 + 1])) | (((/* implicit */int) arr_7 [i_0 + 1]))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) ((unsigned short) (signed char)-22))) : (((/* implicit */int) (!((_Bool)1))))));
                    }
                }
                for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    arr_20 [i_0] = ((/* implicit */unsigned long long int) ((((((1768567312U) / (((/* implicit */unsigned int) var_5)))) >> (((((/* implicit */int) (unsigned short)29844)) / (var_10))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) (signed char)100)))))));
                    var_27 += ((/* implicit */unsigned short) ((long long int) max((min((((/* implicit */unsigned long long int) 2305843007066210304LL)), (17288113845717565263ULL))), (min((arr_4 [1]), (((/* implicit */unsigned long long int) var_10)))))));
                }
                /* vectorizable */
                for (short i_7 = 1; i_7 < 6; i_7 += 4) 
                {
                    arr_24 [i_0 - 1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 520192ULL)) ? (11390207276203897621ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 - 1])))));
                    var_28 = ((/* implicit */unsigned char) (~(3145431258U)));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [(unsigned char)1])) ? (arr_5 [i_0] [i_0 + 1] [i_7]) : (((/* implicit */int) (unsigned short)34256))));
                    var_30 = ((/* implicit */int) -5449882650816174853LL);
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (long long int i_9 = 3; i_9 < 6; i_9 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_7 + 4] [i_8] [i_9] = ((/* implicit */_Bool) ((long long int) 16776704));
                                var_31 = ((/* implicit */int) ((long long int) ((((/* implicit */int) (unsigned char)35)) & (((/* implicit */int) arr_2 [i_0] [i_1])))));
                            }
                        } 
                    } 
                }
                var_32 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (unsigned short)43004)) >> (((((/* implicit */int) (unsigned short)34241)) - (34233))))), ((-(((/* implicit */int) arr_2 [i_0] [i_0])))))) | (((/* implicit */int) ((short) ((arr_22 [4LL] [i_1] [i_1]) == (-7786224288801909232LL)))))));
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4671597507252556727ULL)) ? (-5449882650816174855LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)178)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) - (13775146566456994888ULL))))))));
                var_34 = ((/* implicit */unsigned long long int) (unsigned short)31279);
                var_35 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34094)))))));
            }
        } 
    } 
}
