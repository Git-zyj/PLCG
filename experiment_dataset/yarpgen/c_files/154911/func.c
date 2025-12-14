/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154911
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_1 - 1] = min(((unsigned short)40731), (((/* implicit */unsigned short) (unsigned char)145)));
                    arr_10 [i_0] [i_2] = ((unsigned long long int) 1489470341018577681ULL);
                    var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16957273732690973935ULL)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((-7925616075380305299LL) + (9223372036854775807LL))) << (((var_1) - (1648603099))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))) ? (min((1489470341018577672ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(signed char)3] [i_1] [i_1] [(signed char)3])) ? (-7925616075380305280LL) : (((/* implicit */long long int) arr_1 [i_2 - 1]))))))) : (max((arr_7 [i_1 - 1] [(signed char)7] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-13)) & (((/* implicit */int) (unsigned short)5)))))))));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) : (max((((((/* implicit */_Bool) (signed char)-1)) ? (9766991018654354780ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [2LL]))))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2 - 1] [i_2 + 2])))))))));
                    var_14 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (short)-8987)))));
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))), (((/* implicit */unsigned int) var_8))))) && (((/* implicit */_Bool) var_10)));
}
