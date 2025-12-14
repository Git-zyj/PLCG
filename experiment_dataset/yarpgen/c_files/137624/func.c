/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137624
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
    var_10 *= ((/* implicit */unsigned char) (-((+((+(var_8)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned short)12610)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) 7593570102788967797LL)) && (((/* implicit */_Bool) var_1))))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) (unsigned short)0))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_6)))))) : ((~(((/* implicit */int) arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (unsigned short)4907);
                        var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)127))));
                        var_14 ^= ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 3] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))))))));
                        var_16 -= ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_10 [i_0] [i_2] [i_2 - 2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)10524)))))))), ((+((+(((/* implicit */int) (unsigned short)27533))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        arr_15 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_1)))));
                        arr_16 [i_2] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (max(((~(arr_7 [i_1] [i_0] [i_1] [i_0]))), (((long long int) (_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))) ? (arr_12 [i_0] [i_2 - 2] [i_2]) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)27548)))))))));
                    }
                    arr_17 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)15])))))) : (((/* implicit */int) arr_8 [i_2 - 2] [i_2 + 1] [i_2] [i_2 - 2]))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
    {
        var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_7 [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5])) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_1))))))));
        arr_21 [8LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? ((+(arr_7 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5]))))))));
        var_19 += ((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5] [i_5]);
        var_20 = max(((~(-5229809845087257470LL))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)10913))))));
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
    {
        arr_26 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -7708418669849511130LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)29629))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_6]))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)23)))))))));
        arr_27 [i_6] = ((/* implicit */signed char) var_0);
        var_21 = var_6;
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
    {
        arr_30 [i_7] = ((/* implicit */long long int) var_6);
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((arr_14 [i_7]) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))))))));
        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_18 [i_7]))));
    }
    var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
    var_26 += ((/* implicit */unsigned char) (-((+((+(var_0)))))));
}
