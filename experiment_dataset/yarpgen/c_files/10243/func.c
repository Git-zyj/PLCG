/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10243
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = var_10;
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [21ULL] [i_1] [i_0] [10LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_2]) : (arr_3 [(short)14])))) ? (arr_3 [i_3]) : (((/* implicit */int) min((var_5), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))))))))));
                        var_11 = max((min((((((/* implicit */_Bool) arr_4 [i_3] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [(_Bool)1] [i_1] [(_Bool)1])) : (arr_3 [i_0]))), (((/* implicit */int) arr_10 [(short)13] [(signed char)14] [i_2] [i_2] [i_2] [i_2])))), (var_4));
                        arr_12 [7U] [i_0] [3U] [(short)7] [i_0] [3U] = ((/* implicit */unsigned int) min((var_2), (((/* implicit */int) (unsigned short)29113))));
                        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) arr_0 [i_0])))))));
                        var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))) >= (min((((/* implicit */long long int) (_Bool)1)), (arr_5 [9U]))))))) : (arr_5 [13ULL])));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_1 [i_0])))))) ? (5760009699807830526LL) : (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])), (arr_3 [i_0])))))))));
        var_15 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)29113)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) var_6)) & (((/* implicit */int) arr_1 [i_0]))))))));
        arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) & (0ULL)));
    }
    var_16 = ((/* implicit */short) min((var_4), (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)169))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_1))))))));
}
