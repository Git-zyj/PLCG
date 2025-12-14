/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129774
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)27013)) || (((/* implicit */_Bool) (short)27013)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_17 [i_2] [i_2] = ((/* implicit */int) min((min((arr_1 [i_0] [8LL]), (((/* implicit */unsigned long long int) 8374726130514532385LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_3])))))));
                                var_16 = ((/* implicit */signed char) arr_6 [i_4]);
                                arr_18 [i_0] [i_2] [10LL] [(short)17] [i_4] = ((/* implicit */long long int) (short)-27003);
                            }
                        } 
                    } 
                } 
                var_17 = ((((/* implicit */_Bool) -6372845060702785027LL)) ? (arr_14 [i_1] [(signed char)20] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_1 [(unsigned short)2] [9LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32766)) >= (((/* implicit */int) (unsigned short)7)))))) <= (6945194202031725489LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : ((-(-6739072400311079082LL)))));
    var_19 = ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) var_8)));
    var_20 += ((/* implicit */short) min(((signed char)-100), (((/* implicit */signed char) ((-1887993623) <= (((/* implicit */int) (signed char)-125)))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)55853)) : (-2035444908)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-2LL)))))) : (var_14)));
}
