/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187594
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)195))));
                            arr_10 [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-10)) ^ (((/* implicit */int) (_Bool)1)))) ^ ((~(((/* implicit */int) var_17))))))) | ((~((~(var_7)))))));
                            arr_11 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (2445583481051826782LL)));
                            var_18 = ((/* implicit */signed char) (-((~(var_7)))));
                            var_19 = ((/* implicit */int) var_11);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 4; i_4 < 20; i_4 += 1) 
                {
                    var_20 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12))))))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) >= (var_14)))) - (((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_15)))))))));
                    arr_15 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_8)) <= ((-(((/* implicit */int) (unsigned char)130)))))))));
                }
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_21 = ((/* implicit */long long int) ((((((((/* implicit */int) var_5)) + (((/* implicit */int) var_17)))) >= ((+(var_14))))) ? (((((var_14) != (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))))) : (((((/* implicit */int) var_15)) * (((/* implicit */int) var_5)))))) : ((~(((/* implicit */int) (_Bool)1))))));
                    arr_19 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) >> (((/* implicit */int) var_17))));
                    arr_20 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))) < (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) - (((/* implicit */int) (_Bool)1))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) >= ((((((_Bool)1) || (((/* implicit */_Bool) -2445583481051826797LL)))) ? (((((/* implicit */int) var_4)) ^ (var_1))) : (((/* implicit */int) var_2))))));
                }
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_15);
                            arr_28 [i_0] [i_1] [i_6] [i_6] [i_7] = var_16;
                            arr_29 [i_1] [i_1] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) ^ ((~(((/* implicit */int) var_4))))))));
                        }
                    } 
                } 
                arr_30 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) (+(((/* implicit */int) var_9))))) - (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
