/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132089
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
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)64))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_21 = max((arr_4 [i_0] [(signed char)1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) 0)))))))));
                    var_22 = ((/* implicit */int) (signed char)52);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) (-((-((-(((/* implicit */int) (unsigned short)8))))))));
    /* LoopNest 3 */
    for (signed char i_3 = 2; i_3 < 11; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_4] [i_3] = ((/* implicit */long long int) max(((~(((/* implicit */int) max(((unsigned char)119), (((/* implicit */unsigned char) (signed char)-60))))))), ((~(((/* implicit */int) (unsigned char)119))))));
                    arr_19 [i_5 - 1] [i_4] [i_4] [i_3] = ((/* implicit */long long int) max((max((((int) arr_17 [i_5 + 1] [i_4] [i_3])), (((/* implicit */int) max(((unsigned char)92), (((/* implicit */unsigned char) (signed char)88))))))), ((~((~(((/* implicit */int) (unsigned char)0))))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~((-((~(538454292387709444LL))))))))));
                    arr_20 [i_3] [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned short) (+(max((max((((/* implicit */long long int) arr_14 [i_3 - 2] [i_5 + 1])), (0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : (((/* implicit */int) (signed char)81)))))))));
                }
            } 
        } 
    } 
}
