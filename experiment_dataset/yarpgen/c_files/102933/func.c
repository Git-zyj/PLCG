/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102933
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
    var_17 ^= ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_15)) == (((((/* implicit */int) var_13)) << (((/* implicit */int) (_Bool)1)))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -3654659910878472773LL)) - (var_1)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 *= max((min((((/* implicit */int) arr_4 [i_1 + 1] [2U] [i_0])), (((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0]))))), (((/* implicit */int) ((((/* implicit */_Bool) 7LL)) || (((/* implicit */_Bool) -3654659910878472773LL))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((-3654659910878472773LL), (((/* implicit */long long int) 2097151U))));
                                var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_3 [i_1 - 2]) : (var_8)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32925))) % (arr_5 [i_0] [i_0] [(signed char)12]))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_10 [(unsigned short)14])))))))));
                                arr_14 [i_1 - 1] [i_1 + 1] = ((/* implicit */short) 24576LL);
                                arr_15 [i_4] [i_1 - 2] [i_4] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (unsigned short)32925);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 2; i_6 < 17; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 1829328571550486782LL))) ? ((-(arr_8 [0U]))) : (((-3654659910878472773LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))) ? (((((/* implicit */_Bool) var_15)) ? (8144102779507316653ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) : (((/* implicit */unsigned long long int) ((unsigned int) 0U))))))));
                                arr_24 [i_7] [(short)14] [i_7] [i_7] [i_5] = ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_5] [i_0]))) & (24573LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 2; i_8 < 9; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            {
                var_23 = var_4;
                arr_32 [i_9] [11U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)6)) ? (((24576LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234)))));
                var_24 += ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) var_10)))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((short) (-(-24590LL)))))));
                            arr_37 [(unsigned short)0] [(unsigned short)2] [i_8] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-7))));
                        }
                    } 
                } 
            }
        } 
    } 
}
