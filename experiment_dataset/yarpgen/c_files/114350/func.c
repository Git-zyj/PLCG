/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114350
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)2))))) || (((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 1])))) ? (((((/* implicit */_Bool) ((arr_5 [i_2] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (min((((/* implicit */unsigned int) var_4)), (arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned int) arr_1 [i_1] [i_2])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (var_3))))));
                    arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */short) (signed char)2);
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_5 [i_2] [i_2]);
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) 2943159806U)), (11211235399099052657ULL))), (((/* implicit */unsigned long long int) min((arr_2 [(signed char)7]), (((/* implicit */long long int) arr_3 [i_0] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26567)) ? (((((/* implicit */_Bool) 268431360)) ? (-268431366) : (((/* implicit */int) (signed char)27)))) : (-268431347)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-97)) & (((/* implicit */int) (signed char)18))))) : (max((arr_5 [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_4 - 3])) ? (((/* implicit */unsigned long long int) -7651797555817120458LL)) : (arr_14 [(unsigned short)4] [(_Bool)1] [i_0] [i_1 - 1] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)4657)), (-509574693)))) || (((/* implicit */_Bool) 2147483647))))))));
                                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                                var_17 = ((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_1] [i_2]);
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_13 [i_0] [i_1 + 2] [i_2] [i_3] [i_4 - 2] [i_3] [i_4 - 2]))) && (((/* implicit */_Bool) (+((-2147483647 - 1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_4);
}
