/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176557
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 1]))))) == (min((((/* implicit */int) min(((unsigned short)65041), (((/* implicit */unsigned short) (_Bool)1))))), (((var_0) ? (((/* implicit */int) (short)-20097)) : (((/* implicit */int) (unsigned short)513))))))));
                    var_14 ^= ((/* implicit */unsigned int) var_9);
                    var_15 = ((/* implicit */unsigned short) ((((_Bool) max((var_10), (var_10)))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_6))), (((/* implicit */int) var_13))))) : ((~(5736837637276219465LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 22; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) ((((unsigned int) min((((/* implicit */unsigned int) (unsigned short)43736)), (19591845U)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                                var_17 *= ((/* implicit */unsigned int) arr_13 [i_3] [i_4]);
                                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) - (((/* implicit */int) var_0)))) - (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (signed char)127);
                            var_20 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)83)), (arr_16 [i_8] [i_8] [i_4] [i_3])))) ? (arr_10 [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_24 [2LL] [i_4] [i_4] [i_4] [i_8] [i_9])))))), (((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)487)))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) (unsigned short)491)) : (((/* implicit */int) (signed char)68))))))));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - ((+(arr_10 [i_3]))))) + (max((((/* implicit */unsigned int) (+(arr_27 [i_3] [i_3] [i_3])))), ((((_Bool)1) ? (557396867U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65040))))))))))));
            }
        } 
    } 
    var_23 = var_5;
    var_24 = ((/* implicit */int) (-(var_2)));
}
