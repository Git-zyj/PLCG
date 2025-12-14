/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103946
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 2141349799U)) ? (2153617497U) : (2153617497U)))));
                    var_19 = ((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)55)), ((short)-6798)));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_1] [i_2 + 1] [i_2])))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [(_Bool)0] [(_Bool)0] [i_0]), (((/* implicit */unsigned short) ((unsigned char) arr_6 [i_0] [i_1] [i_0] [i_0])))))))));
                    arr_7 [i_2 + 2] [i_0] [i_2 + 2] [i_2] = ((/* implicit */unsigned char) 4294967277U);
                    var_21 = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (((((/* implicit */_Bool) (unsigned short)31422)) ? (min((((/* implicit */unsigned long long int) var_8)), (var_10))) : (((var_14) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) 
        {
            {
                var_23 *= var_7;
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4 - 2])) ? (arr_9 [i_4 - 1] [i_4 - 2]) : (arr_9 [i_4 - 2] [i_4 - 1]))))))));
                var_25 += ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6806))) == (4294967271U)))) != (((/* implicit */int) ((signed char) arr_6 [i_3] [i_3] [i_4] [3U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_4))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) 2153617496U))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)28242))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (arr_6 [i_3] [i_3] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) var_13);
}
