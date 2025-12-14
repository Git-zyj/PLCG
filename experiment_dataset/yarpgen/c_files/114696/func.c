/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114696
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (((((+(var_6))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_13 &= ((/* implicit */long long int) ((((((/* implicit */int) var_5)) + (((/* implicit */int) var_3)))) << (((((/* implicit */int) ((signed char) 23781421U))) - (34)))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                            {
                                arr_11 [4ULL] [i_1] [i_2] [8U] [i_4] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
                                var_14 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))) % (4271185875U)))));
                            }
                            for (long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned char) ((((((unsigned long long int) var_5)) <= (((/* implicit */unsigned long long int) (-(var_7)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_1))))) : (var_7)))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_2))))))));
                                arr_15 [i_5] = ((unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_1))))) >= (((var_11) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                            }
                            arr_16 [1U] [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((short) 4271185880U));
}
