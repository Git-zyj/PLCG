/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144840
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_2])), (arr_7 [i_0] [(unsigned short)9] [2ULL] [i_2])))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56)))))))), (max(((unsigned short)0), (((/* implicit */unsigned short) ((arr_6 [i_1] [i_0]) > (((/* implicit */unsigned long long int) var_12)))))))));
                    arr_10 [i_0] [(signed char)6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2])) + (((/* implicit */int) arr_7 [i_2] [i_1] [7] [i_0]))))), (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned char)10] [7] [i_1] [7]))) : (var_12)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((3247796508231505496ULL), (((/* implicit */unsigned long long int) (unsigned char)1))));
}
