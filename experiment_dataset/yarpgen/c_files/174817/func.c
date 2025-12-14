/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174817
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_1] [i_2] [i_3 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_9 [i_0] [i_1] [i_0] [i_3 - 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))))) : ((+(((((/* implicit */_Bool) (signed char)-119)) ? (788060882U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [13U] [i_1] [i_2]))))))))))));
                            var_21 = ((/* implicit */unsigned short) var_13);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [2LL] [(signed char)18] [i_4 - 1] [i_5]))))) ? (arr_13 [i_5] [i_4 - 1] [i_1] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)43170)) | (((/* implicit */int) var_16)))))))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) arr_7 [i_4 - 1] [i_4 + 1] [i_4]))));
                            arr_17 [i_0] = ((/* implicit */short) var_2);
                            arr_18 [i_0] [i_5] [i_4 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_4 + 1] [i_4])) % (((/* implicit */int) arr_5 [i_1] [i_4 - 1] [i_5]))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)27872)) - (((/* implicit */int) (signed char)120)))) >= ((-(((/* implicit */int) var_14))))))) : (((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (unsigned short)48065)))) : (((/* implicit */int) (unsigned char)2))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = var_11;
}
