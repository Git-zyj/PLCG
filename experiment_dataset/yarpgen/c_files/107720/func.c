/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107720
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) (~(((((/* implicit */int) ((var_5) < (((/* implicit */long long int) var_2))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_4)))))) < ((+(((/* implicit */int) var_3))))));
                    var_14 = min((max((max((((/* implicit */unsigned long long int) var_5)), (var_7))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_11)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) var_5);
                            var_17 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_0)))));
                            var_18 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4))))))), (((/* implicit */int) max((var_1), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3))))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) min(((+(var_5))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_3)))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) var_3);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(var_8)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_7)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((((/* implicit */long long int) (+(var_2)))), ((-(min((var_5), (((/* implicit */long long int) var_11))))))));
                                var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_6)), (var_10))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), (var_11)));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (-(((/* implicit */int) min((var_3), (var_11)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        for (short i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (short i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) ((564103153) + (((/* implicit */int) (unsigned char)16))));
                                var_26 = ((unsigned long long int) var_3);
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (((-(var_8))) | (min((((/* implicit */int) var_4)), (var_2))))))));
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775790LL)) || (((/* implicit */_Bool) 330586885))));
                                var_29 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_3)))))), (((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8))))) / (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned char)2))))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        for (signed char i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((unsigned short) var_11))), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_9))))));
                                var_32 = ((/* implicit */long long int) ((_Bool) 142989288169013248ULL));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) | (((/* implicit */int) var_4)))) - (((/* implicit */int) max((((/* implicit */short) (unsigned char)228)), ((short)-16218))))));
                    var_34 = ((/* implicit */short) (~(((/* implicit */int) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
    var_35 = var_5;
}
