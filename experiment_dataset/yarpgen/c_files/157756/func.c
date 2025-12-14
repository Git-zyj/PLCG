/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157756
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */unsigned char) ((int) var_9));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) arr_0 [i_1] [i_0]))))) ? (((((/* implicit */int) var_8)) / (arr_0 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_1])))));
                var_17 ^= ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (~(var_5)));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (unsigned int i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    {
                        arr_16 [i_3] [i_2] [i_3] [i_3] = max((((/* implicit */long long int) var_10)), (((long long int) arr_1 [i_5 - 1])));
                        var_19 -= ((/* implicit */_Bool) arr_5 [i_3] [i_5]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) -272721146);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) ((941196843U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) > (((/* implicit */int) arr_11 [i_2])))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((2147483647) == (((/* implicit */int) arr_12 [i_2])))) ? ((+(arr_10 [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_2] [9ULL]))))))) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) max((max(((signed char)9), (((/* implicit */signed char) arr_1 [i_2])))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) arr_6 [i_2])))))))))))));
    }
    var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) ((short) var_8)))))) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) ((_Bool) var_5)))))));
}
