/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116830
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
    var_10 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)111)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)31958)) : (((/* implicit */int) (signed char)-112))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 532947818U)))))) : (((((/* implicit */_Bool) (unsigned short)46)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19412))) : (-2291424782102968842LL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2 + 1] [i_2 + 1]))) < (arr_8 [i_1] [i_2 + 1] [i_2] [i_2 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)9] [i_1] [i_1] [i_1] [i_1] [i_1]))) - (max((arr_8 [(unsigned short)17] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) var_9)))))))))));
                            var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_2 + 1] [i_3]))) * ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16073818422722385504ULL)))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) (!(min((((((/* implicit */long long int) ((/* implicit */int) var_1))) < (var_2))), (((_Bool) arr_2 [i_0] [i_0]))))));
            }
        } 
    } 
    var_14 *= ((/* implicit */unsigned char) 21U);
}
