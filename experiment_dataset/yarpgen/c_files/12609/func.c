/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12609
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
    var_16 *= ((/* implicit */int) (-(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) -1086555471)) : (131941395333120ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (max((var_8), (((/* implicit */long long int) var_7))))))));
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-17))));
            var_18 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (13997337910178274187ULL)))));
            arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 1] [i_0 - 1])) ? (1164218338130118880LL) : (((/* implicit */long long int) ((var_3) + (((/* implicit */unsigned int) var_12)))))));
            var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65529))));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (signed char i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    {
                        arr_15 [i_0] [(signed char)1] [i_0] [i_3] [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_4 - 1] [i_4] [i_4 + 2] [(unsigned char)3]))))) && (((/* implicit */_Bool) -6275155566850808868LL)));
                        var_20 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_12 [i_0] [i_0] [i_4 + 1] [i_4])));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1] [i_4 - 1] [i_4])) ? (((/* implicit */int) (unsigned char)232)) : (1233803083)))) && (((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0] [i_4 + 2] [i_0]))));
                    }
                } 
            } 
            arr_16 [i_0] [i_0] [i_2] &= ((/* implicit */unsigned long long int) (unsigned short)35863);
            var_22 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)252)))), (((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (var_12) : (((/* implicit */int) arr_9 [i_0 + 1]))))));
        }
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)25836)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))))) : (min((((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) == (4048361958917150993ULL))))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            for (short i_7 = 1; i_7 < 21; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_17 [i_5] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32764))))) : (((/* implicit */int) var_9))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ^ (var_11)))));
                    arr_26 [i_5] [i_5] &= ((/* implicit */long long int) var_4);
                }
            } 
        } 
    } 
}
