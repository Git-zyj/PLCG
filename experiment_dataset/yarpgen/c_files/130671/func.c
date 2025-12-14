/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130671
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_14 ^= ((/* implicit */short) ((unsigned char) min((((/* implicit */long long int) var_10)), (var_2))));
                            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)62), (((/* implicit */unsigned char) ((signed char) -2025949277))))))));
                            var_16 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_8 [i_1] [i_2 + 2])))) >= (((arr_10 [i_1 - 3] [i_2 - 1] [(signed char)11]) / (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 3]))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) (unsigned char)87)) : ((~(((/* implicit */int) (short)32767))))))) ? (min((((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_1 + 2])))), ((+(var_5))))) : ((~(((/* implicit */int) var_3))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_10 [(unsigned char)0] [i_1 - 3] [i_1 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4000644516U)) ? (var_8) : (arr_1 [11LL])))) ? (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1])) : (arr_6 [i_0]))) : (min(((+(4026531840U))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0]))))))))))));
                var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(arr_6 [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (arr_7 [(unsigned char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) (~(4294967294U))))))));
                var_20 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (unsigned char)70)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_13)) : ((-(var_10))))) >> ((((~(((/* implicit */int) (short)-21126)))) - (21115)))));
}
