/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117599
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
    var_13 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_6)) - (28571)))))) ? (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (_Bool)1)))))))) < (((/* implicit */long long int) var_4))));
    var_14 = (~(((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_11)) : (var_5)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (!(max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)8]))) <= (var_11))), ((_Bool)0)))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_0 [i_0])))))));
                            arr_14 [i_0] [i_3] [i_2] [i_0] [i_3] = ((/* implicit */long long int) max(((+(((9060959493945190307ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(signed char)8] [4] [(signed char)8] [(_Bool)1]))))))), (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [5] [i_3] [5] [5]))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))));
                            var_17 *= ((/* implicit */_Bool) ((short) ((unsigned int) ((unsigned long long int) 9060959493945190301ULL))));
                            arr_15 [i_3] [i_3] [10LL] [i_1] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_2 - 3] [i_3] [i_2 - 1] [i_2 - 1])))) % (max((var_7), (((/* implicit */long long int) arr_4 [i_2 - 1] [i_2 - 3] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
