/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181535
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)36)) > (((/* implicit */int) (signed char)84))));
                    arr_9 [i_1] [i_2] = ((/* implicit */signed char) max((-1796695278392246907LL), (1796695278392246906LL)));
                    arr_10 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) (-(13876442739223993145ULL)))) ? (((/* implicit */unsigned long long int) 1796695278392246906LL)) : (7155709576744513555ULL));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_12 &= ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-25082))) % (3323885372U))), (((/* implicit */unsigned int) max((arr_7 [i_1] [i_1] [i_0] [i_3]), (((/* implicit */short) ((arr_1 [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54)))))))))));
                        arr_14 [i_2] [(signed char)14] [i_2] [17ULL] [17ULL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (signed char)-84)), (4294967275U))), (min((((/* implicit */unsigned int) (signed char)126)), (3323885372U))))))));
                        arr_15 [(short)8] [i_0] [0U] [i_2] [i_3] = ((/* implicit */long long int) max(((-(max((((/* implicit */unsigned int) (short)(-32767 - 1))), (827217531U))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)-122))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_2] [8ULL])) ? (((/* implicit */int) (short)25082)) : (((/* implicit */int) var_4)))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                    {
                        arr_19 [i_2] = ((/* implicit */short) (-(max((0U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
                        var_13 = var_4;
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-107)))) >> ((((~(1724642601U))) - (2570324656U))))), (((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (signed char)127))))))));
}
