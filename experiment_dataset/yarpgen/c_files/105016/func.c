/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105016
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) < (((/* implicit */int) (short)9487)))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) 4194303)), (arr_1 [i_0]))) % (((/* implicit */unsigned long long int) ((long long int) (unsigned char)96))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) ((unsigned char) (unsigned short)14))) : (((/* implicit */int) ((((/* implicit */long long int) -1305408004)) >= (var_15)))))))));
                            arr_10 [i_0] [i_0] [i_1] [i_1] [i_0 - 1] = ((/* implicit */int) ((unsigned short) (short)4217));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((long long int) ((unsigned int) var_12)));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((long long int) var_3));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */long long int) (~((+(min((var_9), (((/* implicit */unsigned long long int) (unsigned short)65534))))))));
                                arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [16] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_5] [i_7] [(signed char)4]))) : (var_2))))) | (min((((1473373558103309314LL) | (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((_Bool) arr_15 [i_4] [i_5] [i_5])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 3; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_29 [i_10] [i_4] [i_10 + 1] [i_4] [i_10])) || (((/* implicit */_Bool) var_8))))));
                                var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)156)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [(unsigned short)14] [(unsigned short)14] [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) var_1)))))) : (max((((/* implicit */unsigned int) var_6)), (arr_30 [i_6] [i_5] [i_6] [i_9] [i_10 + 2])))))));
                                arr_31 [i_4] [i_4] [(unsigned short)18] [i_10] [(unsigned char)9] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11096))) < (787271226106106575ULL)))) >= (((/* implicit */int) (_Bool)1))));
                                arr_32 [i_4] [i_5] [i_6] [i_10] [i_5] = ((/* implicit */int) max((-9153804740196064775LL), (((/* implicit */long long int) (signed char)-62))));
                            }
                        } 
                    } 
                    arr_33 [i_6] [i_5] [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) | (4294967280U)));
                    arr_34 [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_6))) >= ((((_Bool)1) ? (((/* implicit */int) arr_25 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_25 [i_4] [i_4] [i_4]))))));
                }
            } 
        } 
    } 
}
