/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15067
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))) ? (((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] [i_4])) - (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) arr_0 [(signed char)20])) : (((/* implicit */int) arr_3 [i_1] [i_2])))))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_3]))))) >= (((/* implicit */int) arr_9 [i_2])))))) : ((-(arr_5 [i_0] [i_4 + 1])))));
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_2] = ((max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) arr_1 [i_0] [i_4]))))), (max((((/* implicit */unsigned long long int) var_1)), (0ULL))))) != (((((/* implicit */_Bool) max(((signed char)-33), ((signed char)50)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_2] [i_3] [i_2]))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */int) var_12);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_4);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))) == (8246337208320ULL)));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))));
}
