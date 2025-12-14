/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184534
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2902038439520586154LL)) && (((/* implicit */_Bool) (unsigned char)61)))) ? ((+(arr_2 [i_0] [i_1] [i_0]))) : (((/* implicit */long long int) max((((/* implicit */int) var_8)), (-1636215957))))))) ? (((1957085532576925780ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(arr_0 [i_0])))))))))));
                var_18 = ((((/* implicit */int) (unsigned char)242)) != (-1636215957));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) (short)-8052));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_0]), (arr_4 [i_1])))) ? (((2902038439520586159LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)100))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)124)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 9; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            {
                var_20 |= ((/* implicit */_Bool) ((((long long int) (+(arr_2 [1] [i_3 - 1] [i_3])))) - (2902038439520586156LL)));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 9103297089146338622ULL))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)31))));
}
