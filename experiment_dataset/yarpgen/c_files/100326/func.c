/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100326
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
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (arr_3 [i_0] [9LL])));
                    arr_7 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((min((((/* implicit */long long int) 955257905U)), (-604665455920327566LL))) ^ (max((((/* implicit */long long int) arr_3 [i_2] [i_1])), (604665455920327576LL))))) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [7LL] [i_2])))));
                    var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (short)21445)))) && (((/* implicit */_Bool) arr_4 [i_0 + 1])))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) -808405170)), (arr_0 [i_0])))) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_1 [i_1 - 2])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [9] [i_1 + 1])) ? (((/* implicit */unsigned int) min((arr_3 [i_0] [i_0]), (((/* implicit */int) (short)-21445))))) : (arr_1 [0ULL]))))));
                    var_21 = ((/* implicit */signed char) (((+(((((/* implicit */long long int) ((/* implicit */int) (short)-9884))) - (604665455920327565LL))))) * (((/* implicit */long long int) ((/* implicit */int) ((max((-604665455920327568LL), (((/* implicit */long long int) (signed char)92)))) == ((+(1712259710299654822LL)))))))));
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */int) ((((/* implicit */long long int) var_10)) > ((~(5236587793676981742LL)))));
}
