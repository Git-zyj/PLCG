/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105492
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) (~(((unsigned long long int) var_7))));
                                var_11 = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [(signed char)10] |= ((/* implicit */long long int) (+(var_1)));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) (+(var_0)));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_13 -= ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) (unsigned short)30824)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 - 1]))))), (var_7)));
                    arr_24 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 0U)) ? (4017881950214135448ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30824))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)188), (((/* implicit */unsigned char) (_Bool)1))))) ? (min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) (signed char)-26)))) + (((/* implicit */int) (signed char)-25)))) <= (((((/* implicit */int) (signed char)-29)) ^ ((+(((/* implicit */int) arr_18 [i_5] [i_5]))))))));
    }
}
