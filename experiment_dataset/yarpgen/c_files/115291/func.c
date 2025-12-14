/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115291
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
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) (unsigned char)183);
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_16 = var_8;
                        arr_11 [i_1] [i_1 - 1] [i_1] [1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned int) max((var_10), ((signed char)96)))), (((unsigned int) (signed char)-110)))));
                        var_17 = ((/* implicit */signed char) arr_8 [i_2]);
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((max((var_4), (((/* implicit */long long int) arr_10 [i_0 - 1] [i_1 - 2] [i_1 + 1] [i_3] [6ULL])))), (((/* implicit */long long int) (unsigned char)98)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned long long int) max(((~((+(4199905144U))))), (((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) arr_6 [i_4])), (0U)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_19 ^= ((/* implicit */long long int) ((unsigned long long int) arr_4 [i_0] [i_0] [i_0]));
                            arr_19 [i_1] [i_1] [i_2] [22LL] [i_5] [17U] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)65535))) && (((_Bool) arr_6 [i_0 - 2]))));
                            var_20 += ((/* implicit */unsigned long long int) (signed char)-16);
                        }
                        for (short i_6 = 4; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) (((~((-(var_13))))) % (((/* implicit */long long int) ((unsigned int) ((unsigned char) var_12))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(min((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-120)), (var_2)))), ((-(((/* implicit */int) (signed char)-96)))))))))));
                        }
                        for (short i_7 = 4; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) (_Bool)1);
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_0))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_8 = 4; i_8 < 21; i_8 += 1) 
                    {
                        arr_27 [i_1] = ((/* implicit */short) ((arr_26 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_1]) << (((/* implicit */int) var_8))));
                        var_25 = ((((/* implicit */_Bool) 0U)) ? (((4227858432U) + (4262837238U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-115))))));
                    }
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_12))));
                        var_27 -= ((/* implicit */unsigned long long int) ((short) ((unsigned int) 3396085428U)));
                        arr_31 [i_1] [i_1] [(unsigned char)7] [i_1] = ((/* implicit */signed char) arr_0 [i_9]);
                    }
                    arr_32 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_14);
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_14);
}
