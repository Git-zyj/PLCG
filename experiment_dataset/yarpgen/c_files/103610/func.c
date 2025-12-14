/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103610
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (~(746303821U))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_6))))))) : (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9333)))))));
    var_11 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) ((unsigned char) var_3))), ((~(3381460276335057607ULL)))))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = (-((-(((8766030683162172789ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
                    var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((unsigned long long int) min((((/* implicit */unsigned char) var_2)), (arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) (_Bool)1))))) || (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_3 [i_1] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)65418)) < (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0]))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] [i_3] [i_4 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_3)) : (var_0))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_0] [(unsigned short)3] [i_2] [i_3] [(unsigned char)12])))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4 + 1]))) * (3548663474U))) : (max((((((/* implicit */_Bool) arr_0 [i_3])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) >= (var_0))))))));
                                arr_17 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) var_8);
                                var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)9333))))) : (((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1] [i_1] [i_0] [i_2] [(_Bool)1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))))) ? (((min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_3])), (var_0))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_4 - 1])) : (((/* implicit */int) var_2)))) - (36))))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1] [i_1])))) / ((~(((/* implicit */int) arr_1 [i_1])))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) == (3730930289U))))));
                }
            } 
        } 
    } 
}
