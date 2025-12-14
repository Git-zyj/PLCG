/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108373
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
    for (short i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_14 |= ((/* implicit */short) min((((unsigned short) (_Bool)1)), (max(((unsigned short)20596), ((unsigned short)42156)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1])))))) ? (arr_2 [i_0 + 1]) : (((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_2 [i_0 - 3])))));
                                arr_11 [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(signed char)15] [(signed char)1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)20619)) : (((/* implicit */int) (unsigned short)42130)))) : (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) min((max((var_4), (((/* implicit */int) arr_8 [i_0] [(_Bool)0])))), (((/* implicit */int) (unsigned short)58036))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_1))) == (6909660735342337812LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((arr_1 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [2U]))) : (arr_2 [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))), (var_8))), (((/* implicit */unsigned int) (unsigned short)5932))));
}
