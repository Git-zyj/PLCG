/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114910
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned int) ((signed char) (((!(((/* implicit */_Bool) (unsigned short)0)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)0)), (arr_1 [i_0])))))));
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6327302083145458476ULL)) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-94))))) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (((/* implicit */long long int) ((unsigned int) arr_3 [i_1] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_7)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_0)))))))), ((~(((long long int) var_0))))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) (+(((unsigned long long int) ((arr_11 [i_2]) / (((/* implicit */int) var_4)))))));
                    arr_15 [i_3] = ((/* implicit */long long int) ((unsigned long long int) min((((unsigned int) arr_13 [i_2] [i_2] [i_3] [i_4])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 4; i_5 < 17; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_9 [i_5 - 1])) && (((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_4] [i_3]))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_17 [i_2] [i_5 - 2] [i_4] [i_4]))))));
                            arr_20 [i_5] [i_6] [i_5] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((int) var_6)));
                        }
                        var_16 = (+(1207597813U));
                    }
                    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        arr_24 [i_7] = ((/* implicit */signed char) min(((+(arr_23 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7 + 2] [i_7]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)71)) ? ((-(var_7))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)207)) / (((/* implicit */int) var_5))))))))));
                        var_17 = ((/* implicit */long long int) max((((unsigned int) (unsigned short)65518)), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_7 + 3] [i_7 + 1])))))));
                    }
                    arr_25 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned int) -7139366258302610187LL)) / (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7427)))))))) ? ((+(-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2813010186U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_4] [i_4])))))));
                }
            } 
        } 
    } 
}
