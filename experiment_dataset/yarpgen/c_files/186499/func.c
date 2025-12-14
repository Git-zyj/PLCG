/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186499
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((long long int) 621892190));
        var_17 = var_13;
    }
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_5))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_10 [6U] [i_2] [i_1] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) 602119404)), (16794966648688843953ULL))), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 16; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */short) ((signed char) ((unsigned char) var_13)));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) 1623451771)), (var_8)))) & (max((var_7), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) ((int) var_14));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (min((((/* implicit */unsigned int) var_15)), (var_10))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (-602119404))))));
            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) / (((unsigned int) var_15)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) 111431383)), (var_3)))))))));
            var_24 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) (unsigned short)61087))))) | (8802464597922524091ULL)))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_10)) : (var_0)));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (((+(var_8))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))))))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) (~(var_11)));
            var_28 = ((/* implicit */unsigned char) ((short) var_8));
            var_29 = ((/* implicit */int) 927463581U);
        }
    }
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3106629681U)) ? (var_10) : (var_8))) < (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (1159427643)))), (4294967295U))))))));
    var_31 = ((/* implicit */unsigned char) ((unsigned short) (-(var_12))));
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 21; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */long long int) var_8))));
                                var_33 = ((/* implicit */long long int) min((max((((/* implicit */int) var_5)), (-937976255))), (((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (signed char)94))), ((-(1159427628)))));
                }
            } 
        } 
    } 
}
