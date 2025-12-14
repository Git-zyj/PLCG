/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140765
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
    var_11 = ((/* implicit */signed char) (((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((min((var_3), (((/* implicit */unsigned int) var_6)))) - (2729068242U))))) >> (0U)));
    var_12 = ((/* implicit */unsigned short) (~(min((var_1), (((/* implicit */long long int) var_8))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) min((arr_5 [i_4] [i_3] [i_0] [i_0]), (((/* implicit */int) arr_6 [(unsigned short)0])))))) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_3 - 1] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_4] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : ((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [(signed char)0])), (arr_6 [i_0]))))))));
                                arr_14 [i_2] [i_1] [i_2] [i_1] [i_1] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((long long int) var_2)) / (((/* implicit */long long int) ((/* implicit */int) (!(arr_9 [i_3] [i_3 - 1] [i_4] [i_4] [i_2])))))))) : (((/* implicit */unsigned char) ((((long long int) var_2)) * (((/* implicit */long long int) ((/* implicit */int) (!(arr_9 [i_3] [i_3 - 1] [i_4] [i_4] [i_2]))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((min((((/* implicit */long long int) (short)(-32767 - 1))), ((~(arr_2 [i_0] [i_1]))))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))));
                arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)48306)) : (((/* implicit */int) (signed char)-113))))))) ? (min((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_0])), ((+(((/* implicit */int) arr_3 [i_0] [(unsigned short)5] [i_0])))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [(unsigned short)0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */int) (signed char)85)) << (((arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]) - (2444931126679179614ULL)))))))));
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)15);
            }
        } 
    } 
}
