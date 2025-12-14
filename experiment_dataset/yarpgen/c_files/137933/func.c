/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137933
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
    var_16 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) var_9)), (-1437416903710829055LL)))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (-((-((+(-1437416903710829059LL)))))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min(((~(((var_5) >> (((arr_5 [i_0] [i_0] [i_0]) - (951045655U))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_5 [i_0] [21ULL] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) var_8)))))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_19 = min((max(((+(arr_8 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))))), ((-((+(var_5))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(-1437416903710829055LL))), (((/* implicit */long long int) ((3) & (((/* implicit */int) (signed char)-122)))))))) || (((((/* implicit */unsigned long long int) var_15)) <= (arr_8 [i_3 - 1] [i_1 + 1] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
