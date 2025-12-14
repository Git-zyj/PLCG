/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113345
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (min(((+(((/* implicit */int) (signed char)-38)))), (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) (signed char)-33))) || (((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (unsigned char)171)))))) ? (((/* implicit */int) arr_1 [i_2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1107067624792313722LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-8469391801610817648LL)))) ? ((-(((/* implicit */int) arr_10 [i_1] [i_2] [7LL] [i_2] [i_1] [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_12 [i_0] [i_0] [i_0] [i_2] [i_1] [i_3]))))))));
                                var_12 ^= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (signed char)54))) >= (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0 + 1] [i_1])) > (((/* implicit */int) arr_11 [i_0 + 1] [i_2])))))));
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3] [i_4] = (-(min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_2])), (-6701479654778905226LL))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned short) arr_10 [(unsigned char)3] [i_1] [i_1] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (arr_4 [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] [i_2] [i_1]))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
    var_15 = ((/* implicit */unsigned char) var_6);
}
