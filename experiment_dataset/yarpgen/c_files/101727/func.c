/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101727
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_4))) == (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) (+(((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) / (((arr_0 [i_0]) / (arr_0 [i_0])))))));
        var_12 = ((/* implicit */long long int) ((unsigned short) var_3));
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_4))))), (((/* implicit */long long int) min(((+(var_0))), (((/* implicit */unsigned int) -1342849279)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                        {
                            var_13 = ((/* implicit */short) max((arr_9 [i_1] [i_2] [i_3]), ((unsigned short)45344)));
                            var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0] [i_1]))));
                            var_15 = ((/* implicit */int) var_6);
                        }
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_3] [i_1] [i_2] [i_3]))))) : (((unsigned int) var_1))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) -4226902939827552652LL)), (arr_13 [i_0] [i_0 - 2] [i_5]))) >> ((((~(((/* implicit */int) (unsigned short)65535)))) + (65579)))));
                        }
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (min((((/* implicit */unsigned short) ((_Bool) var_5))), (arr_3 [i_1] [i_1] [i_1]))))))));
                        var_17 |= ((/* implicit */unsigned char) ((int) ((unsigned int) ((unsigned int) arr_4 [i_3]))));
                        var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) var_1)) / (var_0)));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((65535) & (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (min((var_7), (arr_4 [i_0]))) : (min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0])), (4067701877U))))), (((/* implicit */unsigned int) var_8))));
    }
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (min(((unsigned short)63654), (((/* implicit */unsigned short) min((arr_18 [i_6]), (arr_18 [i_6]))))))));
        var_21 ^= ((/* implicit */long long int) var_8);
        var_22 &= ((/* implicit */short) min(((~(min((((/* implicit */long long int) var_2)), (var_4))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6]))) : (arr_17 [i_6]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6]))))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_17 [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-2958391711123789780LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
        arr_19 [i_6] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(arr_17 [i_6])))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) 3314679571233351093LL)) && (((/* implicit */_Bool) arr_17 [i_6]))))))) : ((((((~(arr_16 [i_6] [i_6]))) + (2147483647))) << (((((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (4067701871U) : (((/* implicit */unsigned int) 536870912)))) - (4067701871U)))))));
    }
    var_24 += var_7;
}
