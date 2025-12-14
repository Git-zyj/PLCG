/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168913
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((int) var_2)))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_11)) - (44)))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */signed char) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) - (var_4))))) - (((7971222919051145476ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                    arr_8 [i_2] = ((/* implicit */signed char) (((+(7971222919051145476ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7971222919051145476ULL)) ? (arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]) : (arr_3 [i_1 - 2] [i_1 - 1] [i_1 + 1]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            arr_11 [i_0 + 1] [i_0 - 2] [i_3] = ((/* implicit */unsigned char) ((max((arr_0 [i_0 - 2]), (arr_0 [i_0 - 2]))) ? (((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2]))));
            var_14 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0))))), (arr_3 [i_0 + 1] [i_0 - 1] [(unsigned short)4])))) ? (var_5) : (((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) << (((arr_1 [i_0] [i_0 - 2]) - (341677238U)))))))));
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0 - 1])), (var_11)))) >> (((/* implicit */int) (!(arr_0 [i_0 + 1]))))));
        }
        arr_13 [i_0] [(signed char)1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 2])) - (((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0 - 1]))))), (7971222919051145484ULL)));
        var_15 = ((/* implicit */signed char) min((var_3), (((((/* implicit */_Bool) 8146338765913148511ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)47145))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((10475521154658406153ULL) >> (((var_10) - (1990399929U)))))) ? (var_7) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        var_17 ^= ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            arr_20 [i_4] = ((((/* implicit */_Bool) -6168726425968350575LL)) ? (524245072883239762LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4722))));
            arr_21 [i_4] [i_4 + 3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 8146338765913148511ULL)) ? (624023837921284124ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27076)))));
        }
        for (short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            arr_24 [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((arr_18 [3LL]) ? (((/* implicit */unsigned long long int) var_2)) : (var_6))) : (((/* implicit */unsigned long long int) var_7))));
            var_18 = ((/* implicit */long long int) -256180912);
            var_19 = ((/* implicit */short) var_1);
        }
        var_20 = ((/* implicit */int) arr_18 [i_4 + 3]);
    }
    var_21 = ((/* implicit */int) var_5);
}
