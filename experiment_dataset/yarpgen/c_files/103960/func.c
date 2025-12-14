/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103960
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
    var_10 = ((/* implicit */_Bool) (~(max((var_4), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_12 [(signed char)2] [i_2] [i_2] [(_Bool)1] [(signed char)3] [i_0] = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) arr_7 [i_2])))));
                            arr_13 [i_0] [i_1] [i_0] [i_2] [i_1] = ((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) != (((((/* implicit */int) arr_7 [i_0])) / (((((/* implicit */_Bool) 48)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                            var_11 = ((/* implicit */int) var_4);
                            var_12 = ((/* implicit */_Bool) max((((signed char) ((_Bool) var_3))), (((/* implicit */signed char) ((8LL) <= (((arr_9 [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_0] [i_4] [i_5] = ((_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) var_5))));
                            arr_21 [i_4] = ((/* implicit */_Bool) (unsigned short)65535);
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((_Bool)1) ? (max((((/* implicit */long long int) 964660950)), ((((_Bool)1) ? (((/* implicit */long long int) -1821469205)) : (-9LL))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_22 [i_4] [i_5] = (!((_Bool)1));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 ^= max((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))), ((+(var_9))))), (((((/* implicit */_Bool) ((unsigned short) var_6))) ? (max((var_2), (((/* implicit */int) var_7)))) : (((var_6) >> (((var_9) + (2047849466))))))));
}
