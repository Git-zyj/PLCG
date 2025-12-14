/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124687
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
    var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)40917)) <= (((/* implicit */int) var_17))))), (max((var_7), (var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned short)40917)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2])))) <= ((((_Bool)0) ? (var_12) : (((/* implicit */int) (short)256)))))) ? ((~(((int) arr_2 [i_0] [i_2] [(unsigned char)6])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */int) min((arr_4 [i_3] [9]), ((_Bool)1)))) : (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [(short)18]))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))));
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_7 [i_3] [(unsigned short)4] [i_1] [14]) <= (((/* implicit */int) (short)-20465))))), ((-(arr_8 [(unsigned char)11] [i_1] [i_2] [(unsigned char)11]))))))));
                            arr_9 [i_0 - 4] [i_1] [i_2] [i_1] = ((/* implicit */long long int) arr_0 [i_0 - 4]);
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */short) arr_4 [i_0] [i_1 - 1])), ((short)-20445)))), (((((/* implicit */_Bool) min((((/* implicit */int) (short)20464)), (14886800)))) ? (min((((/* implicit */long long int) (_Bool)0)), (arr_1 [i_0]))) : ((-(arr_2 [i_0] [i_0] [i_1])))))));
                var_24 -= ((/* implicit */long long int) ((max((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */int) var_2)) ^ (0))))) == (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)55))))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0 + 1])), ((unsigned short)65530)))) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_1 + 2])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 - 2]))));
            }
        } 
    } 
    var_26 ^= ((/* implicit */unsigned char) 18446744073709551615ULL);
}
