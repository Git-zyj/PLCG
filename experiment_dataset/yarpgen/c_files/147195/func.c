/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147195
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) != (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (25ULL) : (((/* implicit */unsigned long long int) 1563448090)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (var_8) : (var_5)))) ? (((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_0] [i_0]))) : (arr_5 [i_0] [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned short)498)) : (((/* implicit */int) (signed char)0))))))) != (max((((((/* implicit */_Bool) (signed char)-118)) ? (7602307241068352581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65042))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)2)), (-8113293526219169295LL)))))))))));
                                arr_14 [i_3] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) var_4)))))))), ((+(arr_12 [i_4] [i_4] [i_4 - 4] [i_4] [i_4 - 4] [i_4 - 3])))));
                                arr_15 [i_4] [i_4] [i_1] [i_3] [i_3] = ((/* implicit */signed char) var_0);
                                arr_16 [i_0] [i_1] [i_3] [i_2] [i_1] [i_0] = (!(((/* implicit */_Bool) var_6)));
                                arr_17 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) || (var_1)))) < (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1]))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-9901)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (1515293957550285310ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))))))))) : ((+(((/* implicit */int) (unsigned short)522))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */signed char) var_7)), (var_6)));
    var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((var_5) ^ (var_8)))) ? (max((var_8), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65028)))))))));
}
