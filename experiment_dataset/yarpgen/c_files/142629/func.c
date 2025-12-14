/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142629
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
    var_14 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_3] |= ((/* implicit */_Bool) ((long long int) (unsigned short)5));
                            var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) (((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))))) || (((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2 + 3] [i_2] [i_2 + 2])))) ? (min((((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [(unsigned short)9] [i_2 + 3] [13U] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((_Bool) arr_10 [7U] [i_1] [i_1] [i_3] [10ULL]))))) : (min((((((/* implicit */unsigned long long int) 9223372036854775807LL)) ^ (arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned short)0]))), (((/* implicit */unsigned long long int) ((var_7) <= (((/* implicit */unsigned long long int) var_10)))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) + (2147483647))) << (((((((/* implicit */_Bool) 2220912034214761476LL)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_1])))) - (11))))))));
                arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (+(4630280957277097101ULL))));
            }
        } 
    } 
}
