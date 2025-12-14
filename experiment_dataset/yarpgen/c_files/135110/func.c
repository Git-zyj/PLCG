/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135110
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
    var_20 = ((((/* implicit */int) ((((/* implicit */int) (signed char)76)) > (((/* implicit */int) (signed char)-76))))) <= (((/* implicit */int) var_3)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_0] [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_2] [i_0])) >= (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    arr_8 [i_0] = ((/* implicit */signed char) ((short) ((short) var_17)));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned char)134))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : ((~(((/* implicit */int) arr_3 [i_0] [i_2] [i_3]))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10279479478118929781ULL)) ? (17852663809497165537ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_2] [i_0]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)128))))) : ((+(var_9))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1 - 2])) == (((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1 + 1]))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_1 + 2] [i_1] [i_0])) | (var_13)));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-74)) ? (((((/* implicit */_Bool) (signed char)67)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((unsigned int) var_7)))));
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_26 ^= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)30143)) : (((/* implicit */int) (signed char)-62))));
                        var_27 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)229)) == (((/* implicit */int) (signed char)-74))));
                        var_28 = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) (signed char)95)))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((unsigned long long int) 2199022731264ULL));
                        var_30 = ((/* implicit */_Bool) (signed char)-80);
                        arr_19 [i_0] [i_6] = ((/* implicit */unsigned char) 5061846118500986444LL);
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_22 [i_0] = ((/* implicit */unsigned char) (signed char)106);
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_3)) + (92)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)124)) <= (var_11)))) : (((/* implicit */int) (signed char)-67))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 23; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 2; i_9 < 23; i_9 += 1) 
                        {
                            arr_28 [i_0] = ((/* implicit */unsigned char) ((_Bool) var_1));
                            var_32 = ((/* implicit */_Bool) (signed char)-76);
                            arr_29 [i_9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (_Bool)1)) % (-1526869722))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(short)15] [i_0] [i_1] [i_0])) | (var_2)))) ? ((((_Bool)1) ? (2058414285989130424LL) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_9 - 2] [i_1] [i_1] [i_0])))));
                        }
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_2])) ? (((/* implicit */long long int) arr_23 [(unsigned char)22] [i_0] [i_0] [i_0] [3] [i_0])) : (var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_2] [i_1])) : (var_13)))) : (((var_17) - (((/* implicit */unsigned long long int) var_16)))))))));
                    }
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) ((int) (unsigned char)252));
                        var_36 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-117)))));
                    }
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) (short)-15900)))));
        var_38 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_0))));
    }
    var_39 = ((/* implicit */_Bool) (signed char)-38);
}
