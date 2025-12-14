/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137113
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
    var_10 = ((/* implicit */unsigned long long int) ((unsigned char) ((max((var_2), (((/* implicit */int) var_1)))) << (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (short)16705))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_3 [i_0])), (1331537624U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_6 [i_0 + 1] [i_0 - 1])))) : ((-(((/* implicit */int) arr_7 [i_0] [(_Bool)1]))))));
                            arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] = (((~(587274617431374976LL))) | (((/* implicit */long long int) ((/* implicit */int) min((arr_11 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2]), ((unsigned char)32))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((var_3), (((/* implicit */int) arr_0 [i_3]))))) ? (((unsigned int) -144115188075855872LL)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) var_7))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -1632460646)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1198260757)) ? (((/* implicit */unsigned int) var_3)) : (4182643961U)))))))) : (0U)));
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52426)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2878833455U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) (short)30442)) : (((/* implicit */int) (signed char)-98))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 3708884611U)))))) : (max((var_8), (((/* implicit */unsigned int) arr_7 [i_0] [i_1])))))) : (((unsigned int) max(((unsigned short)52430), (((/* implicit */unsigned short) (short)-16706)))))));
            }
        } 
    } 
}
