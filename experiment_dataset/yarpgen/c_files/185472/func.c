/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185472
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
    var_15 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (12991826198390000993ULL) : (var_14)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 5975324872679602373ULL)) ? (5985843152960681446ULL) : (arr_0 [i_0 - 3])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : ((-(((long long int) -2722183629173130497LL))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            arr_4 [(signed char)10] [i_1] = ((((/* implicit */_Bool) max((((arr_2 [i_0 - 1] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_1 [i_0]))), (max((var_7), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0] [i_0 + 2] [i_1])) : (((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0] [5ULL]))))), (var_0))));
            var_18 = ((((/* implicit */_Bool) ((unsigned long long int) 5985843152960681457ULL))) ? ((+(arr_0 [i_1 - 1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 4; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(5985843152960681446ULL))))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(min(((~(var_14))), (((/* implicit */unsigned long long int) ((unsigned char) 2305771273205335243ULL))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)41)), (5985843152960681445ULL)))) ? (var_0) : (4397622658132666071LL)))));
        var_22 = ((/* implicit */signed char) (-(-3155179073059749902LL)));
    }
}
