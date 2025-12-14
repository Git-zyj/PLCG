/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11706
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_11))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)62379)) : (((/* implicit */int) var_7))))) || (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)24))))))));
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((max((2147483648U), (2147483634U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((-2089610496) <= (((/* implicit */int) (_Bool)1)))))))))));
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-103)) >= (((/* implicit */int) min((var_9), (((/* implicit */short) (signed char)102))))))) ? (((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_3 [(unsigned short)3] [i_1])) < (0ULL))) ? ((+(arr_2 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (arr_4 [i_1] [10U] [i_0]))))))))))));
                var_16 = ((/* implicit */unsigned char) 7249969114893682477ULL);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) var_8);
                            var_18 = ((/* implicit */signed char) var_0);
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0 + 2])) << (((2022265816U) - (2022265801U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0 + 3] [i_0 + 3]))))) : (((((/* implicit */int) arr_9 [i_0] [i_0 + 2])) / (((/* implicit */int) arr_9 [i_2] [i_0 - 1]))))));
                            var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (arr_6 [i_0 - 1] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
}
