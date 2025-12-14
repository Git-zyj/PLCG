/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104470
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(var_6)))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32456)) ? (((/* implicit */int) (short)32456)) : (((/* implicit */int) (short)32474))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2] [i_1]))))) : ((+(var_4)))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), ((+(((((/* implicit */_Bool) (unsigned short)41097)) ? (((/* implicit */unsigned long long int) -656419922916029822LL)) : (5127949491493980921ULL)))))));
                    var_15 = ((/* implicit */long long int) max((var_15), ((-(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))) ^ (var_4)))))));
                }
            } 
        } 
        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 880924272)) ? (880924272) : (((/* implicit */int) (unsigned short)24457))))) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */int) arr_6 [i_0] [i_0])) << (((/* implicit */int) var_10))))));
        var_17 ^= ((/* implicit */unsigned short) ((short) ((unsigned short) arr_5 [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3] [i_3]))))) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : ((+(((/* implicit */int) arr_13 [i_3]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7] [i_6] [i_5])) ? (arr_19 [i_3] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7])))))) ? ((~(arr_18 [i_3] [i_6]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_4] [i_5] [i_5] [i_5])))))));
                                arr_25 [i_7] [i_4] [i_6] [i_3] [i_4] [i_3] = ((/* implicit */long long int) arr_11 [i_3] [i_5]);
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */signed char) (-((~(((/* implicit */int) arr_16 [i_5] [i_4] [i_3]))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_0))))) : (max((var_4), (((/* implicit */long long int) var_11))))))) ? ((~(((((/* implicit */int) var_1)) & (var_6))))) : (((var_6) | ((-(((/* implicit */int) var_0))))))));
}
