/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145729
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
    var_16 = 689932249U;
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 7; i_3 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_6 [i_0] [i_2] [i_3 - 3]))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [i_1]))) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_2 - 2]))))));
                            var_19 = ((/* implicit */int) ((arr_1 [i_3 + 2]) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_3 + 1]))))));
                            arr_9 [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) min((((unsigned short) ((short) (signed char)-53))), (((/* implicit */unsigned short) (signed char)67))));
                            arr_10 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_2 - 3] [i_1] [i_3 + 1])) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 17177772032LL)))) : (min(((+(arr_1 [i_0]))), (((/* implicit */long long int) arr_7 [i_2 - 1] [i_1]))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (unsigned short)11186)) ? (((/* implicit */int) (unsigned short)4887)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_2))))))));
                var_21 = ((/* implicit */long long int) (signed char)62);
                var_22 = min((((/* implicit */unsigned short) ((arr_4 [i_0] [i_1]) < (-1874485181778575966LL)))), (max((((/* implicit */unsigned short) var_10)), (arr_2 [i_0] [i_0]))));
            }
        } 
    } 
    var_23 |= ((/* implicit */signed char) ((((min((var_4), (((/* implicit */unsigned int) (signed char)8)))) * (var_15))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_1)) << (((1831456058U) - (1831456032U))))))))));
    var_24 = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned int) var_12)), (max((var_9), (((/* implicit */unsigned int) var_13)))))));
}
