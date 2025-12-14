/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140247
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [(unsigned short)10] [(unsigned short)8] = ((/* implicit */unsigned int) (unsigned short)11277);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_10 = ((/* implicit */signed char) (((!(((((/* implicit */int) (signed char)-4)) >= (((/* implicit */int) (unsigned short)44517)))))) ? (((/* implicit */int) (signed char)4)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (var_0)))) ? ((+(((/* implicit */int) (signed char)8)))) : (((/* implicit */int) var_5))))));
                    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)15))));
                    var_12 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)14)) != (((/* implicit */int) (unsigned short)45788)))))));
                    arr_9 [0] [i_0] [8LL] [(signed char)14] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (unsigned short)35821)) : (((/* implicit */int) (signed char)-15)))))));
                    var_13 |= ((/* implicit */unsigned char) var_7);
                }
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)6144))))), (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (2147483648U))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) var_1);
                var_16 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)65))));
                var_17 += (~((~(((((/* implicit */int) (unsigned short)24960)) >> (((2147483647) - (2147483644))))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))), ((signed char)-29)));
    var_19 = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (signed char)0))));
}
