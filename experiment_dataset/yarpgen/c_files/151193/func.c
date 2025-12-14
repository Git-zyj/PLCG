/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151193
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
    var_19 = ((/* implicit */int) var_8);
    var_20 = ((/* implicit */signed char) (+((~(((/* implicit */int) (unsigned short)65508))))));
    var_21 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)19)), (-1162801006098809064LL)))) ? (1162801006098809057LL) : ((-(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 + 1]))) : (3636400015644958580LL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_23 ^= min((((-3403005667879816047LL) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_2] [i_2] [i_0 + 1]))))), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 7010246471497037310LL)) || (((/* implicit */_Bool) (signed char)-22))))), ((+(arr_13 [i_0 - 1] [i_1 + 1] [i_0 - 1] [i_3 - 1] [i_0 - 1])))))));
                                var_24 ^= (_Bool)1;
                                arr_14 [i_4] [i_0] [i_0] = ((/* implicit */int) ((1338585263) < (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            {
                var_25 = ((/* implicit */signed char) arr_10 [6LL]);
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_26 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) - (-1162801006098809064LL)))) ? (((((/* implicit */int) (unsigned char)229)) & (arr_15 [i_6]))) : (((/* implicit */int) arr_16 [i_5] [i_5]))))));
                                var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -1162801006098809064LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_7] [i_7] [i_8 - 1]))))));
                                var_28 ^= arr_16 [i_5] [i_5];
                                var_29 ^= ((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_5] [i_7])), (((((/* implicit */int) (unsigned char)255)) >> (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                var_30 += ((/* implicit */unsigned short) arr_0 [(unsigned short)8]);
                var_31 -= ((/* implicit */_Bool) min((min((((/* implicit */int) (signed char)-22)), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_5] [i_6])))))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_3 [i_5])))))));
            }
        } 
    } 
}
