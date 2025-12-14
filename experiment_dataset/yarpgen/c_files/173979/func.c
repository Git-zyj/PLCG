/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173979
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [16] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647ULL)) ? (arr_7 [i_1] [i_2] [i_2]) : (((/* implicit */int) (signed char)6))))) % (arr_0 [i_0 - 1])))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_15)) ? (353110803) : (((/* implicit */int) var_17))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [(signed char)22] [i_3] [i_4] = ((/* implicit */long long int) 7565395796530964781ULL);
                                arr_15 [i_0] [i_2] [i_2] [i_1] [i_4] = ((signed char) ((((/* implicit */_Bool) -353110819)) && (((/* implicit */_Bool) (signed char)-119))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_7 [i_0 - 1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))) : (var_5))), (((/* implicit */unsigned long long int) var_8)))) << ((((~(((/* implicit */int) var_14)))) + (71)))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (unsigned char i_6 = 3; i_6 < 10; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                {
                    arr_25 [i_5] [(signed char)6] [i_7] = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) : (arr_0 [i_5]))) ^ (((((/* implicit */_Bool) (signed char)-14)) ? (arr_20 [i_5]) : (((/* implicit */long long int) -353110794))))))));
                    arr_26 [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) arr_10 [(unsigned char)7] [i_6] [i_6 - 3] [i_6 + 1])), (2035918977)))));
                }
            } 
        } 
    } 
    var_21 = ((unsigned char) ((int) ((((/* implicit */_Bool) -4697292324019117549LL)) ? (-423727163851496644LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)38))))));
    var_22 |= ((/* implicit */signed char) ((((/* implicit */int) var_16)) & (((((/* implicit */_Bool) ((unsigned char) (unsigned char)63))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) var_17))))));
}
