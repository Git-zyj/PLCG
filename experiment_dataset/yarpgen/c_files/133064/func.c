/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133064
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_19))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)11225)) < (((/* implicit */int) (short)-10858))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_21 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11221))) : (1681481474U))), (((/* implicit */unsigned int) ((arr_6 [i_2] [i_0 - 1] [i_2]) == (((/* implicit */unsigned long long int) var_19)))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((-1227372637) >= (((/* implicit */int) (short)-1))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((4294967286U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)54310)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) : (var_19))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11225)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_13)) ? (var_16) : (var_19)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)167), ((unsigned char)72))))) + (var_6)))));
                    var_23 &= ((/* implicit */unsigned long long int) (unsigned short)34524);
                }
            } 
        } 
    }
    for (short i_3 = 1; i_3 < 15; i_3 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24712)) ? (((((/* implicit */_Bool) var_19)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [(unsigned char)4]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)60071), (((/* implicit */unsigned short) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((1228957415) ^ (-1233196)))) : (35184372088832ULL))))));
                        /* LoopSeq 1 */
                        for (short i_7 = 1; i_7 < 14; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) (~(var_15)));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) 2101103000U)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (short)14237)))), (((/* implicit */int) var_5)))))));
                            arr_21 [i_3] [i_3] [i_3] [i_6 + 2] [i_7] = var_18;
                            var_27 |= ((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
                            var_28 = ((/* implicit */short) (~(((/* implicit */int) (short)-17062))));
                        }
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) var_11)), (var_19))));
    }
}
