/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159378
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
    var_11 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (var_4)))) ? (((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (var_6)))) : (((/* implicit */int) var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_12 += ((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) 13328928446963973291ULL)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned char)228))))) == (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)36)), ((unsigned short)39431)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [(unsigned char)9] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                                var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])), (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) ((unsigned char) (signed char)76))) : (((((/* implicit */_Bool) (unsigned char)104)) ? (var_6) : (((/* implicit */int) arr_5 [i_2]))))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) ((signed char) (-((~(((/* implicit */int) (signed char)4)))))));
            }
        } 
    } 
}
