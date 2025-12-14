/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119194
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
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((unsigned short) (unsigned short)26274))) - ((+(((/* implicit */int) (unsigned short)26288))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) 7980208396567834379LL));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) (_Bool)1))), ((+(((/* implicit */int) var_1))))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-773608033582204381LL))))));
                var_14 = ((/* implicit */int) (+(((unsigned long long int) arr_2 [i_0 - 3] [i_0]))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), ((+(arr_0 [i_0 + 4])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 7; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_16 = var_7;
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (arr_10 [i_2 - 1] [i_2 + 3] [i_2] [i_2 - 1])))));
                            /* LoopSeq 1 */
                            for (long long int i_6 = 2; i_6 < 7; i_6 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) arr_2 [i_3] [i_3])), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39248))) : (123145302310912LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_14 [i_2] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))))));
                                arr_16 [i_2 + 3] [i_3] [i_3] = ((/* implicit */short) (~(((unsigned long long int) (~(arr_1 [i_2 + 1] [i_3]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_1);
}
