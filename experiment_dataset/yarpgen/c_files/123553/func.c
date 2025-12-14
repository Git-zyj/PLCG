/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123553
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (signed char)-68))));
    var_16 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1134907106097364992ULL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))));
                var_17 += ((/* implicit */_Bool) min(((~((~(((/* implicit */int) (signed char)-80)))))), (((/* implicit */int) var_13))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((long long int) -5065357343540532668LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-68)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (max((((/* implicit */unsigned long long int) (unsigned short)25823)), (17469405365402478013ULL)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        arr_8 [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) -719044774)) : (arr_6 [i_2])));
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)244)) ? (arr_0 [i_2]) : (((unsigned long long int) arr_0 [i_2]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 *= ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)40280)) <= (((/* implicit */int) (signed char)-113))))), (arr_3 [i_3] [i_3] [i_3])));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) ((signed char) 4294967288U));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((var_5) ? (max((arr_0 [i_3]), (arr_0 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (var_0) : (min((((/* implicit */long long int) arr_1 [(signed char)8])), (7998258521423817867LL))))))))));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3705221980U)) ? (((/* implicit */int) arr_11 [(unsigned short)5])) : (((/* implicit */int) ((unsigned short) (-2147483647 - 1))))));
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((int) (signed char)75));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_2 [i_4]), ((unsigned char)66)))) & (((/* implicit */int) max((var_11), (var_11))))))) ? (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)39716))))) : (arr_17 [(signed char)18] [22ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 8392097723441054280ULL))))));
        arr_19 [i_4] [(signed char)5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4] [2LL] [i_4])))))) - (min((max((18446744073709551607ULL), (5429757222683935000ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_4])) / (((/* implicit */int) (unsigned short)39712)))))))));
    }
}
