/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150687
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (signed char)0);
                                var_21 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (arr_11 [5LL] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */unsigned char) (signed char)41);
                    arr_14 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((_Bool) (signed char)41));
                }
            } 
        } 
        var_22 ^= ((/* implicit */unsigned int) (signed char)-41);
    }
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_23 ^= ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_7)), (arr_17 [i_5]))), (((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) == (var_6))))))));
        arr_18 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_16 [(signed char)0] [(signed char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62)))));
        arr_19 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_2), ((signed char)41))))));
    }
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max(((+(min((((/* implicit */long long int) var_8)), (var_16))))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_3))))))))))));
}
