/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127228
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 *= ((/* implicit */long long int) ((max((max((10928668870925985136ULL), (((/* implicit */unsigned long long int) 3)))), (((/* implicit */unsigned long long int) arr_4 [i_0 - 1])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28284)))));
                arr_5 [i_0] [i_0 + 1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned int) 0)) >= (949360618U)))), ((short)32766))))));
                var_20 = ((/* implicit */unsigned char) min(((-(7518075202783566479ULL))), (((/* implicit */unsigned long long int) (unsigned short)55416))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    var_21 = (!(((/* implicit */_Bool) ((-1734939156) | (((/* implicit */int) (short)-22610))))));
                    var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)17417), (((/* implicit */short) var_16))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (-4477851008283964096LL)))) : (arr_2 [i_2] [i_2 - 2] [i_2 - 2])))) ? (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_3 [i_0 + 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) 759630978))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (+(max((0), (((/* implicit */int) ((unsigned short) var_3)))))));
}
