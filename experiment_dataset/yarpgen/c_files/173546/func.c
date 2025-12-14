/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173546
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
    var_10 *= ((/* implicit */int) ((((((long long int) var_5)) / (((long long int) var_9)))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)193)), (var_8))))))))));
    var_11 = ((/* implicit */signed char) var_3);
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((max((-6445425071902329199LL), (((/* implicit */long long int) var_8)))) + ((~((-9223372036854775807LL - 1LL))))))));
    var_13 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_1)))))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)62)) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193)))))) ? ((+(var_0))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (13542882954155859821ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)61)), (arr_2 [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) var_4);
                                var_15 &= ((/* implicit */long long int) (unsigned char)101);
                                arr_14 [i_0] [i_1] [i_2 + 1] [15ULL] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6291456))));
                                var_16 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (+(1608290606297196983ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */unsigned long long int) 6348296585535348496LL)) * (12070248078204402447ULL))))));
                            }
                        } 
                    } 
                    var_17 = var_3;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) -6291472)) || (((/* implicit */_Bool) arr_15 [i_1] [i_2] [(signed char)18] [i_1])))) || (((/* implicit */_Bool) ((long long int) arr_16 [i_0] [i_0] [i_0] [i_2] [i_1] [i_6]))))));
                                var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_0 [i_6] [i_0])) || (((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) arr_10 [i_6] [i_5] [i_2 + 1] [i_1] [i_0])) : (((((/* implicit */int) arr_12 [5] [5] [i_1] [i_2 - 1] [i_1] [i_6])) << (((/* implicit */int) (unsigned short)0)))))) * (((/* implicit */int) (!(arr_16 [i_0] [i_0] [i_0] [(unsigned short)8] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [3ULL] [i_2] [i_2] [i_1])) : (((/* implicit */int) (signed char)-127))))))) ? (((/* implicit */unsigned long long int) 422545137117859896LL)) : (9655999283211719148ULL)));
                }
            } 
        } 
    } 
}
