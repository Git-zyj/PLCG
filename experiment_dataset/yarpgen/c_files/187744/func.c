/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187744
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
    var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (unsigned char)0)) : (var_8))), (((/* implicit */int) var_13))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4294967295U) | (4U)))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11342))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) (unsigned char)164);
                var_18 -= ((/* implicit */unsigned short) arr_2 [i_0]);
                arr_6 [i_1] [(unsigned char)22] [(unsigned char)22] = ((/* implicit */signed char) var_13);
                var_19 |= ((/* implicit */unsigned int) var_8);
                arr_7 [i_0] = ((/* implicit */long long int) arr_4 [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned char i_3 = 3; i_3 < 10; i_3 += 1) 
        {
            {
                var_20 -= ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)39))))) >= (3676910629352006366ULL));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_21 ^= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 285419193)) ? (16U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2])))))))))));
                            arr_18 [7U] [i_3 - 3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (unsigned short)877)) : (((/* implicit */int) (unsigned char)144))))) ? (((((/* implicit */_Bool) (unsigned char)91)) ? (arr_15 [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)73), (((/* implicit */signed char) (_Bool)1)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((-2400714263701924321LL), (((/* implicit */long long int) var_13))))) ? ((~(((/* implicit */int) arr_3 [i_2] [i_2] [i_2])))) : (((/* implicit */int) arr_16 [(unsigned short)6] [6ULL] [i_4] [i_4] [i_5] [i_5 + 1])))))));
                            var_22 = ((/* implicit */signed char) ((unsigned short) ((short) arr_9 [i_4] [i_3 - 3])));
                        }
                    } 
                } 
            }
        } 
    } 
}
