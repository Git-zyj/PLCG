/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16868
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_12 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)201)) >= (((/* implicit */int) (unsigned char)201))));
                        var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_10 [6ULL])) ? (arr_9 [i_2] [i_2] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((short) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3])))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) arr_6 [i_0] [6] [i_0]))));
                        var_16 = ((/* implicit */signed char) (unsigned char)183);
                    }
                } 
            } 
        } 
        var_17 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)55))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), ((+(arr_2 [1ULL])))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)202)) ? ((+(var_0))) : (774607654))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)13147))))) : (((/* implicit */int) arr_3 [i_4]))))));
        var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_4] [i_4] [i_4]) < (arr_6 [i_4] [i_4] [i_4]))))) & (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) : (arr_6 [i_4] [i_4] [i_4]))));
        var_21 = ((/* implicit */int) arr_6 [i_4] [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        for (int i_6 = 3; i_6 < 15; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) ((((2147483647ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))))) == ((((~(2860830926270747506ULL))) % (1623627852515272912ULL)))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)206)) % ((-(((/* implicit */int) (signed char)-1))))));
                var_24 = ((/* implicit */unsigned char) min(((+((~(var_8))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 391936717U)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) (unsigned char)3);
}
