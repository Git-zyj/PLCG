/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156810
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
    var_15 = ((/* implicit */int) var_5);
    var_16 = ((min((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), ((~(9223372036854775807LL))))) + (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)56509)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))) == ((+(((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((arr_10 [i_3] [i_1] [i_1] [i_1] [(short)15]) != (arr_10 [i_3] [i_3] [i_2] [i_1] [i_0]))) ? (((/* implicit */int) (!(((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_3] [i_0] [i_0]) ? (4089776690U) : (4089776690U))))))))))));
                            arr_12 [i_0] |= ((/* implicit */unsigned char) (~(3941202065450620010ULL)));
                            var_18 = ((/* implicit */unsigned int) arr_2 [i_0]);
                            arr_13 [i_3] [i_2] [i_3] = ((((/* implicit */unsigned long long int) arr_3 [(signed char)12])) == (((((((/* implicit */int) arr_7 [i_1] [(_Bool)1] [i_1])) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) (+(arr_11 [i_0] [i_0])))) : (var_3))));
                        }
                    } 
                } 
                arr_14 [i_1] [1ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [(short)10] [i_1])) + (min((5886177124240489644ULL), (((/* implicit */unsigned long long int) 4079534960U)))))))));
                var_19 = ((/* implicit */_Bool) 1059881410);
                arr_15 [(_Bool)1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) << (((((/* implicit */int) arr_2 [i_0])) - (137)))))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))));
            }
        } 
    } 
}
