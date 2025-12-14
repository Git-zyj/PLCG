/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176063
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_13)) ^ (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((+(var_13)))));
    var_18 = ((/* implicit */short) min(((~(((var_8) | (14126131978200772436ULL))))), (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (_Bool)1))))) : (var_8)))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_10))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_20 = ((/* implicit */long long int) var_0);
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 1] [i_1] [(short)10])) ? (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_1] [(signed char)9])))))));
                }
                var_22 = min((((/* implicit */long long int) var_11)), (var_12));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2855322687U)) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4176)))) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) ((signed char) (unsigned short)65535))) : (((/* implicit */int) (unsigned short)0)))))));
                var_24 = ((/* implicit */unsigned long long int) var_7);
                var_25 |= ((/* implicit */int) arr_9 [i_4] [i_3]);
                var_26 = ((/* implicit */unsigned long long int) var_15);
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_8 [i_6] [i_5])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) 2271743841U)))))) : (max((var_1), (((/* implicit */unsigned long long int) arr_13 [i_3 + 3] [i_3 + 3] [i_3 + 3])))))))))));
                                var_28 = ((/* implicit */short) ((_Bool) (_Bool)0));
                                var_29 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [0ULL] [i_3 - 2] [i_5 - 1])) && (((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 3; i_8 < 23; i_8 += 4) 
                    {
                        for (long long int i_9 = 2; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_13 [i_5 - 1] [i_4] [i_3 - 2]))));
                                var_31 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) var_16)) ? (373910530655090676LL) : (8921211322314690430LL)))));
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_3 - 2] [i_8 - 2])), (arr_23 [i_3 - 2] [i_8 - 2] [i_4] [i_8] [i_8 - 2])))) ? (((int) arr_11 [i_3 - 2] [i_8 - 2])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)57426)) == (((/* implicit */int) (_Bool)1)))))));
                                var_33 = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned short) (((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -1942647578))))));
                }
            }
        } 
    } 
}
