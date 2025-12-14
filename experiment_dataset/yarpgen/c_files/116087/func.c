/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116087
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
    var_17 = ((/* implicit */unsigned long long int) var_12);
    var_18 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)96)) - (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((var_9) < (((/* implicit */int) (unsigned char)96))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */signed char) (~(-118722363)));
                        var_19 &= ((/* implicit */int) var_6);
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) == (3367970662603825630LL)));
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2] [i_4])) << (((var_15) - (13006774361825896880ULL)))))) ? (((((/* implicit */int) arr_1 [i_0] [i_1])) & (((/* implicit */int) arr_1 [i_0] [i_2])))) : (((/* implicit */int) var_13))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_3])) ? (arr_17 [i_0] [i_0] [i_1] [i_0]) : (0)))) ? (arr_17 [i_5] [i_5] [i_5] [i_5]) : (1782046066)));
                            var_22 = ((/* implicit */int) arr_15 [i_3] [i_2] [i_0] [i_0] [i_0]);
                            arr_21 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) var_4)))) ? ((-(((/* implicit */int) (unsigned char)96)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (unsigned char)80)))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 10; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    arr_32 [i_8] [i_8] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_6] [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8]))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) 528854047)) : (arr_14 [i_8] [i_7])))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_27 [i_6] [i_7 - 1]);
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)96))));
                    }
                    for (int i_10 = 3; i_10 < 12; i_10 += 2) 
                    {
                        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) -3367970662603825630LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_7 + 1] [i_7 + 1] [i_8] [i_8] [i_10 + 1])));
                        arr_39 [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_6] [i_6 + 1])) && (((/* implicit */_Bool) arr_29 [i_6] [i_6 + 1] [i_6 + 1]))));
                        var_26 += ((var_8) * (((/* implicit */int) arr_1 [i_6 + 1] [i_8])));
                    }
                    arr_40 [i_6 + 1] [i_6 + 1] [i_7] [i_8] = ((/* implicit */unsigned int) (~(((long long int) (signed char)-58))));
                }
            } 
        } 
        var_27 = ((/* implicit */int) (+(1710871582U)));
    }
}
