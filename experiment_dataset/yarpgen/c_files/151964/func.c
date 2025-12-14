/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151964
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(-8539872339816663127LL))))));
    var_12 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [0U]))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_3 [16ULL] [i_1] [6U])))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0] [2LL] [i_1])) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_4 [i_1] [i_0] [i_0]))) != (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (var_9)))))))));
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2305842940494217216ULL)))) ? (((/* implicit */unsigned long long int) max((-2766764614585040436LL), (((/* implicit */long long int) (unsigned char)128))))) : (16140901133215334400ULL)))) ? (((/* implicit */unsigned long long int) var_7)) : (2305842940494217216ULL));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            {
                var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305842940494217216ULL)) ? (((16140901133215334402ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37329))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [24ULL])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [18LL]))))) : (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (15322115234940075344ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1322758957U)) ? (14956810U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))))))));
                var_17 = ((/* implicit */signed char) ((unsigned int) arr_10 [i_2]));
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_13 [i_3] [i_3] [i_4] [i_5] [i_6] [i_6]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_13 [i_3] [i_3] [i_4] [(_Bool)1] [i_4] [i_2]) : (arr_13 [i_6] [i_5] [i_4] [i_4] [i_3] [i_6])))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)37329)) ? (((/* implicit */long long int) 4294967295U)) : (1850201146114977735LL))))));
                                var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) 2972208339U)) : (((long long int) 1516819881))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_3))));
                            }
                        } 
                    } 
                } 
                var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_8 [i_2] [i_2])))) ? (max((var_10), (((/* implicit */long long int) var_5)))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (arr_7 [i_3])))));
            }
        } 
    } 
}
