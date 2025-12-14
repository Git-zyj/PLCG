/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125803
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1631294836)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (unsigned short)50874))));
    var_20 |= ((/* implicit */unsigned int) ((long long int) var_9));
    var_21 += ((/* implicit */unsigned long long int) (((+(((var_17) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14649))))))) | (min((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) var_8)) ? (var_16) : (var_17)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) (unsigned short)50874)))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) (_Bool)1)))) != (((int) arr_0 [i_0]))));
        arr_6 [i_0] [i_0] = ((/* implicit */short) (~(max((3690505120U), (((/* implicit */unsigned int) (unsigned short)33637))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_9 [11LL] [(_Bool)1] = ((((/* implicit */_Bool) var_4)) ? ((+(((((/* implicit */_Bool) -629860315)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)14623))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_14 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned int) var_2)), (var_16))))), ((-(min((var_10), (((/* implicit */long long int) var_14))))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_13 [i_1] [1]), (((/* implicit */long long int) 3296175282U))))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_2])) ? (arr_13 [i_1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (arr_13 [i_1] [i_1])));
                        arr_21 [8U] [i_2] [i_3] [i_4] = (!(((/* implicit */_Bool) ((int) ((unsigned long long int) var_8)))));
                    }
                } 
            } 
            arr_22 [i_1] = ((int) max((((/* implicit */unsigned char) arr_17 [i_1] [i_2] [i_1] [i_2] [i_1] [i_2])), (arr_7 [i_1])));
        }
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((((/* implicit */int) arr_10 [i_1] [i_1])) / (((/* implicit */int) arr_10 [i_1] [i_1])))))))));
        arr_23 [(_Bool)1] = ((/* implicit */long long int) (+(min((var_11), (((/* implicit */unsigned long long int) arr_3 [i_1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        arr_27 [i_5] = ((/* implicit */unsigned int) (-((-(arr_25 [i_5])))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    arr_32 [i_5] [i_6] [i_7] [i_7] &= ((/* implicit */unsigned long long int) ((arr_30 [i_5] [i_5]) ? (1845501313) : (((/* implicit */int) (unsigned short)52847))));
                    arr_33 [i_6] = ((/* implicit */unsigned char) var_6);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_7)) + ((-(var_3)))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (signed char)-28)) / (((/* implicit */int) (short)25039))))))));
    }
}
