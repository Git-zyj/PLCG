/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17842
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
    var_11 |= var_2;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [(_Bool)1] [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((unsigned int) min((arr_0 [i_1]), (2773093399U))))) : (((arr_3 [i_0 - 2]) * (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))));
                var_12 = ((/* implicit */short) ((arr_3 [i_0 - 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 + 2]))))));
                arr_5 [i_0] [i_1] |= ((/* implicit */unsigned char) arr_0 [14]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_3])))) && (((/* implicit */_Bool) arr_7 [i_3]))))) != (((((/* implicit */_Bool) (unsigned short)32736)) ? (((/* implicit */int) (unsigned short)21729)) : (((/* implicit */int) arr_6 [i_3]))))));
                var_14 = ((/* implicit */unsigned long long int) (+(-786830326)));
                arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)0)) * (-1877652497))) * (((/* implicit */int) (!((!(arr_1 [i_3]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (17308006316197264991ULL)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || ((_Bool)1)))), (var_9)))));
}
