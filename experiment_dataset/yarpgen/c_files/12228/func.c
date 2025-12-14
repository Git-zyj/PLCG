/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12228
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 6; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((-1923711641256983896LL), (-1923711641256983896LL)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (short)-32748);
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_3 [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)53356)) < (((/* implicit */int) (unsigned char)199)))))));
                            var_18 = ((/* implicit */unsigned int) ((unsigned char) ((max((((/* implicit */int) var_3)), (arr_4 [i_0] [i_1] [i_2 - 1]))) < (-1965433910))));
                            var_19 = ((/* implicit */unsigned char) ((_Bool) ((long long int) ((unsigned char) (short)-11252))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_9);
}
