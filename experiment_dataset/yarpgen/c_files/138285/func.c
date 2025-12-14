/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138285
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_11 [(short)10] [i_3] [12LL] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_1])))), (((((/* implicit */_Bool) arr_8 [i_2 - 1] [(_Bool)1] [i_2 - 1] [i_2 + 2])) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
                            arr_12 [i_3] = ((/* implicit */short) var_11);
                            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~(max((((((/* implicit */int) var_5)) << (0LL))), ((~(((/* implicit */int) var_11)))))))))));
                            var_13 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 16760832U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (-1LL))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_3)), (((arr_3 [5LL] [i_1] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (arr_3 [i_1] [i_1] [3LL])))))))));
                        }
                    } 
                } 
                arr_14 [(_Bool)1] [i_1] [i_1] &= ((/* implicit */long long int) arr_9 [4LL] [i_1] [(unsigned char)8] [i_0 - 2] [i_0] [i_0 - 2]);
                arr_15 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [1LL] [1LL] [i_0 + 1] [i_0] [i_0 + 2] [(unsigned short)9]))))) ? (((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0 + 1] [(_Bool)1] [i_0 + 2] [i_0]), (arr_7 [i_0] [i_0] [i_0 + 1] [9LL] [i_0 + 2] [i_0 + 1])))) : ((~(((/* implicit */int) (unsigned char)10))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_16 [i_5] [i_4])), ((unsigned short)18)));
                var_15 = min((((((/* implicit */unsigned long long int) (~(1LL)))) ^ (5896452624679003685ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_4] [i_4])) >> (((arr_17 [i_4] [i_5]) - (2652135438082074886LL)))))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((max((-1LL), (((/* implicit */long long int) (unsigned char)24)))) % (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-71))))))))));
            }
        } 
    } 
}
