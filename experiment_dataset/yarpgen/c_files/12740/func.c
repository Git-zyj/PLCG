/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12740
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
    var_10 ^= ((/* implicit */short) max((3676804929540285988ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)125)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (max((((/* implicit */long long int) (_Bool)1)), (-8910587280873087164LL))))))));
    var_11 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) arr_0 [i_0]))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)3)), (var_7))) : (((/* implicit */unsigned long long int) ((int) arr_0 [i_0]))))), (max((arr_2 [i_0 + 2]), (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (var_7))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (max((((unsigned long long int) (short)(-32767 - 1))), (((/* implicit */unsigned long long int) (signed char)-126))))));
                                var_14 = ((/* implicit */unsigned long long int) 1198486677);
                                arr_13 [i_0] [i_3] [i_2] [i_1 + 3] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)24))));
                                var_15 = max((max((var_3), (((/* implicit */unsigned int) (unsigned char)142)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)136))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0 + 2] [i_1 + 1] [i_4 + 1] [i_4]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */int) (unsigned char)128);
                }
            } 
        } 
    }
}
