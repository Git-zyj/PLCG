/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117215
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (_Bool)1)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 += var_18;
                                var_21 = ((/* implicit */unsigned int) -977188922936796835LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 3; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) (-(min((-262144), (216185471)))))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_0] [8])), ((signed char)99)))) ? (arr_11 [i_0] [i_0] [i_2] [i_6 - 3] [i_5 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned short)65535)))), ((-(-262144))))))));
                                var_23 = ((/* implicit */unsigned short) (_Bool)1);
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -216185472)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_16)) : (-605579378)))) : (((((/* implicit */_Bool) 1895546683)) ? (1489100155814613445LL) : (((/* implicit */long long int) -1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_25 |= max((9223372036854775807LL), (((/* implicit */long long int) -216185452)));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_9)) - (46654)))));
    }
}
