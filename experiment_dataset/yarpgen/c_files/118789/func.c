/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118789
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
    var_13 = ((/* implicit */short) (signed char)-61);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) 748080562);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_14 &= ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))) - (arr_3 [i_3] [i_1] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))));
                            arr_11 [i_0] [8] [i_1] [i_2] [i_0] = ((/* implicit */int) arr_2 [(_Bool)1]);
                            arr_12 [i_3] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((short) (_Bool)0)), (((/* implicit */short) var_1)))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) arr_1 [i_0])) <= (290508533U))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)61)))) : (((/* implicit */int) (((~(((/* implicit */int) (signed char)4)))) > (((/* implicit */int) ((arr_4 [(signed char)3] [i_0] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))))));
                arr_14 [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) min((9754742131320938665ULL), (arr_3 [i_1] [i_0] [i_0 + 1])))) ? (8692001942388612966ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_10 [i_0] [0LL] [i_0] [i_1])), (arr_1 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0])))))));
                var_15 ^= ((/* implicit */long long int) (signed char)-43);
            }
        } 
    } 
}
