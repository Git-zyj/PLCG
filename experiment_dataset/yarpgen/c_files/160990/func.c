/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160990
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
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) var_9);
                arr_7 [i_1] [i_0] [i_0 - 1] = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_0] [i_1])), ((-(134217727)))))), (max((-1025101472642877665LL), (((/* implicit */long long int) -481440493))))));
                var_12 += 3447512322435309782ULL;
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_13 = ((((/* implicit */_Bool) max((arr_1 [i_0 - 2] [i_2 - 3]), (arr_1 [i_0 - 1] [i_2 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_2 + 1])) || (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_2 - 1]))))) : ((-(((/* implicit */int) (_Bool)1)))));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_8 [i_3]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_3);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_4)));
}
