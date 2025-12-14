/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155016
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
    var_10 = ((/* implicit */unsigned char) var_6);
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (unsigned short)19550))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0 + 1] = (unsigned short)19550;
                    var_12 = ((/* implicit */signed char) ((unsigned int) 13967913303962935121ULL));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    arr_15 [i_3] [i_4] [i_5] = ((/* implicit */int) (((+(((unsigned long long int) arr_13 [i_4] [i_4] [i_4] [i_4])))) > (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -773636616)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (var_9))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [i_3] [i_4] [i_5] [i_6] [i_7] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_5] [i_6] [7ULL] [i_6]))))) >> (((/* implicit */int) ((((/* implicit */_Bool) 876510438U)) && (((/* implicit */_Bool) (unsigned char)245))))));
                                arr_23 [i_3] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) arr_21 [(unsigned short)2] [i_3] [i_3] [i_3] [i_3]);
                                var_13 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (unsigned short)46007)))))) ? (((773636615) / (((/* implicit */int) ((unsigned char) -773636616))))) : ((+(((/* implicit */int) ((signed char) (signed char)-111))))));
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)19550)) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_6] [i_7])) : (((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_6] [i_7] [i_4]))))) <= (min((876510438U), (((/* implicit */unsigned int) arr_17 [i_3] [i_3] [i_4] [i_5] [i_3] [i_7]))))));
                                var_15 = var_7;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
