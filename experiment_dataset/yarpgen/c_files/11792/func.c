/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11792
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */long long int) ((/* implicit */int) var_7))) / (8866461766385664LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_2 + 1] [i_1] [i_0])) * (((/* implicit */int) var_5)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)31)), ((+(((/* implicit */int) arr_12 [i_3] [i_3] [i_2] [i_3] [i_4]))))))) : ((+(min((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_4))))))));
                                var_10 ^= ((((((/* implicit */_Bool) (-(var_6)))) ? (max((((/* implicit */unsigned int) (unsigned short)62285)), (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8732153869709260407ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-15))))))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-26504))));
                                var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */int) (unsigned short)32736)) : (((/* implicit */int) (signed char)-28))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) min((var_12), (((var_1) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9172))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (unsigned short)9184)) : (((/* implicit */int) (signed char)108))))))) : ((+(max((((/* implicit */long long int) var_7)), (var_6)))))))));
}
