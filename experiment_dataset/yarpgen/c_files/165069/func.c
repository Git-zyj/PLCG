/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165069
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
    var_13 = ((/* implicit */_Bool) max((((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9)))), (((/* implicit */int) ((_Bool) var_10)))));
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_5))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [(unsigned char)18] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_1] [i_0] [i_1])) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) min(((short)3353), (var_0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned int) var_4)) : (var_9)))))) : (max((min((var_7), (((/* implicit */long long int) (short)26085)))), (min((var_5), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 |= ((/* implicit */int) ((short) ((4247949316U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [7LL] [i_4 - 1]))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (2410094245643855258LL)))) ? (((/* implicit */int) arr_3 [i_4 - 2] [i_2 + 1])) : (((/* implicit */int) ((unsigned short) 4188320384U)))))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_11)))))) : (((int) ((long long int) arr_13 [(short)16] [i_0] [i_0] [(unsigned short)3] [(unsigned char)7] [(unsigned short)15])))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((short) arr_12 [i_0] [i_4])))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_9)))), (((long long int) 6429803927798766393LL)))) : (((/* implicit */long long int) (((_Bool)0) ? (4111372724U) : (((/* implicit */unsigned int) 483311733)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) (-(216172782113783808LL)));
                    arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) 2410094245643855281LL)) ? (arr_10 [i_0]) : (((/* implicit */long long int) 47017982U))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)18936)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned char) 47017982U)))))) : (((long long int) ((long long int) var_1)))))));
}
