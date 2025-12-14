/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151890
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) min((var_7), (((/* implicit */int) var_6)))))));
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) max((((((/* implicit */_Bool) ((var_6) ? (var_2) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) : (var_4))), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-23)) + (2147483647))) >> (((4059679764423119557ULL) - (4059679764423119542ULL)))))))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    var_12 *= ((/* implicit */signed char) var_9);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_13 &= ((/* implicit */short) ((((/* implicit */int) var_3)) & (var_7)));
                                var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (short)26306))))), (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))))));
                                var_15 = var_8;
                                var_16 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_6)), (max((var_9), (((/* implicit */unsigned int) var_8)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_7)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) & (((/* implicit */int) var_1)))) < (min((var_7), (((/* implicit */int) var_8))))));
                }
                for (int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned long long int) var_1);
                    var_19 = ((/* implicit */unsigned short) var_4);
                }
                for (int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */int) max((var_20), (var_2)));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (min((((/* implicit */unsigned long long int) -1473756862)), (((14387064309286432058ULL) ^ (4059679764423119557ULL)))))));
                }
                for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    var_22 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))) : (((var_7) / (((/* implicit */int) var_5))))))), (var_4)));
                    var_23 ^= ((/* implicit */_Bool) var_2);
                }
                /* LoopNest 3 */
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 13; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)26306), (((/* implicit */short) (signed char)8)))))) | (max((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_7)))), (var_9)))));
                                var_25 = ((/* implicit */signed char) min((min((min((var_4), (var_9))), (((var_4) & (var_9))))), (var_4)));
                                var_26 = ((/* implicit */unsigned short) ((max((max((((/* implicit */unsigned int) var_8)), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_6))))))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_9)))) ? (min((var_9), (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (var_2))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 -= ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_2)), (var_9))) << (((var_2) + (577274405)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) && (((/* implicit */_Bool) max((var_7), (var_2)))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (var_7)))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (var_9))))));
}
