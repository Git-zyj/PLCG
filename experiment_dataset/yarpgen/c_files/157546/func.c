/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157546
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
    var_14 = ((/* implicit */short) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned char) ((-307101759) <= (((/* implicit */int) (unsigned short)61705))));
        var_16 = ((/* implicit */unsigned short) ((arr_0 [i_0]) == (arr_0 [i_0])));
        var_17 = ((((/* implicit */_Bool) -2058290530)) && (((/* implicit */_Bool) (+(var_1)))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), ((+(arr_4 [i_1 + 1])))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (short i_4 = 4; i_4 < 19; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 2; i_5 < 16; i_5 += 2) 
                        {
                            var_19 -= ((/* implicit */short) max((((/* implicit */unsigned int) ((arr_9 [i_1] [i_2] [i_1] [i_1]) & (max((((/* implicit */int) (unsigned short)3860)), (307101759)))))), (min((((((/* implicit */_Bool) arr_12 [i_5] [i_4] [i_3] [i_2] [i_1 - 2])) ? (arr_4 [17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [(short)2] [i_3] [i_4 - 3]))))), (((/* implicit */unsigned int) (_Bool)0))))));
                            var_20 |= ((/* implicit */short) min((max((((/* implicit */unsigned int) var_10)), (arr_13 [14] [i_5 - 2]))), (((var_8) ? (((((/* implicit */_Bool) -1120240112)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)3805))))))));
                        }
                        var_21 = ((/* implicit */unsigned int) (short)-32763);
                        var_22 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))) > (((/* implicit */int) (unsigned short)3856)))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_1 - 1])) + ((((_Bool)1) ? (((/* implicit */int) (unsigned short)26255)) : (((/* implicit */int) (unsigned short)24535))))))) ? (307101758) : (((/* implicit */int) (unsigned short)40978))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_16 [i_6] [i_4] [i_3] [i_2] [i_1])), ((-(((/* implicit */int) var_9))))));
                            var_25 = ((/* implicit */unsigned char) ((_Bool) var_0));
                            var_26 = ((/* implicit */_Bool) (+(((((/* implicit */int) min((var_9), ((_Bool)1)))) - (((/* implicit */int) arr_16 [i_1 - 1] [i_2] [i_3] [i_4 - 3] [i_6]))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) (+(var_2)));
                            var_28 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned short)37462))))));
                            var_29 = ((/* implicit */unsigned char) (_Bool)1);
                            var_30 = ((/* implicit */short) -307101786);
                            var_31 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_18 [i_1] [i_1 - 1] [i_2] [i_3] [i_3] [(unsigned short)0] [i_7])), (var_5)));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_32 = ((/* implicit */short) min(((-(((/* implicit */int) arr_6 [i_8 - 1])))), (((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))) + (((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_2] [i_3] [i_4] [i_4])) ? (-627472948) : (((/* implicit */int) arr_7 [(unsigned short)1] [(unsigned short)1]))))))));
                            var_33 = ((/* implicit */_Bool) min((2839292137U), (((/* implicit */unsigned int) (unsigned char)107))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_9 = 3; i_9 < 15; i_9 += 1) 
    {
        var_34 = ((/* implicit */_Bool) max((var_34), (arr_18 [i_9 - 2] [i_9 - 2] [i_9] [i_9 - 2] [10] [10] [i_9])));
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-1585020627), (((/* implicit */int) (unsigned short)0))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) arr_7 [i_9 + 1] [i_9 - 2])) ^ (((/* implicit */int) arr_7 [i_9 - 2] [i_9 - 2]))))));
        var_36 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((var_0) >> (((var_3) - (802394160)))))) ? (((((/* implicit */_Bool) 811564379U)) ? (arr_0 [(short)0]) : ((-2147483647 - 1)))) : ((+(-1489142430)))))));
        var_37 = (~((-(((/* implicit */int) var_13)))));
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((-99246790) < (((/* implicit */int) arr_6 [i_9])))))));
    }
    var_39 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)1)), (var_1)))))))));
    var_40 = ((/* implicit */unsigned int) ((unsigned short) var_8));
}
