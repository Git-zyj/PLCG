/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122595
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
    var_12 *= ((/* implicit */unsigned char) min(((unsigned short)34338), (((/* implicit */unsigned short) var_0))));
    var_13 = ((/* implicit */int) (!(((min((((/* implicit */long long int) (unsigned short)31)), (-9156670825513362735LL))) == (((/* implicit */long long int) 3032844474U))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) (signed char)86);
        var_15 += ((/* implicit */short) (_Bool)1);
        var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_1 [i_0])), (((long long int) 3549803517769046417LL))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_17 = (!(var_4));
                        var_18 &= ((/* implicit */unsigned short) (unsigned char)133);
                        var_19 = ((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 3]);
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            var_20 = ((((/* implicit */_Bool) (unsigned short)31198)) ? (max((((/* implicit */long long int) (_Bool)1)), (1125899906842623LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_4 - 1])))));
                            arr_13 [i_0] [i_3] [i_4] [i_1] [i_1] = ((/* implicit */int) ((arr_9 [i_0] [i_0] [i_2] [i_3]) >= (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])) > (0ULL)))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 *= ((/* implicit */unsigned short) arr_6 [i_0] [i_0]);
                            arr_16 [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (long long int i_6 = 4; i_6 < 15; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) || ((_Bool)1)));
                            var_22 -= ((/* implicit */_Bool) 2347764283U);
                            var_23 = ((/* implicit */unsigned long long int) ((((((var_3) & (var_6))) + (((/* implicit */int) (_Bool)1)))) % ((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-106)) || (((/* implicit */_Bool) (signed char)100)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        arr_23 [i_7] &= ((/* implicit */short) (_Bool)1);
        var_24 = ((/* implicit */unsigned int) min((((9223372036854775807LL) >> (((((/* implicit */int) (short)32767)) - (32728))))), (((/* implicit */long long int) (-2147483647 - 1)))));
    }
}
