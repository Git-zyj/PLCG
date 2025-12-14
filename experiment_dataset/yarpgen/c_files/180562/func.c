/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180562
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)126))) >= (545357767376896LL)));
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_3])) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_1]))) : (((/* implicit */int) (short)14567))))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_7 [i_0] [i_0] [i_0] [3ULL]))))), (((((/* implicit */_Bool) (short)-14579)) ? (9325086900725248734ULL) : (((/* implicit */unsigned long long int) -1305384587))))));
            }
        } 
    } 
    var_15 = var_0;
}
