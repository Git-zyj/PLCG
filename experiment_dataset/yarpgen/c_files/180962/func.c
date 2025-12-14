/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180962
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
    var_15 = ((/* implicit */short) (-(((/* implicit */int) min((var_5), (var_13))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_8 [(short)2] [(short)2] &= ((/* implicit */short) max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) arr_4 [i_0] [(short)6] [i_2] [i_3])))))));
                        var_16 += ((/* implicit */short) (((+(((((/* implicit */int) var_1)) * (((/* implicit */int) var_4)))))) / ((-(((/* implicit */int) min(((unsigned short)65525), (arr_1 [(unsigned short)6]))))))));
                        var_17 += ((/* implicit */unsigned short) ((max((((/* implicit */int) min((arr_3 [i_0] [i_1] [(short)12]), (((/* implicit */unsigned short) var_10))))), (((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [(unsigned short)6])) / (((/* implicit */int) var_12)))))) / (((/* implicit */int) arr_2 [i_2] [i_2]))));
                        arr_9 [i_0] [i_1] [i_2] [(short)15] = ((/* implicit */short) (unsigned short)65535);
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_12 [i_4] [i_3] [i_1 - 1] [i_3 - 1] |= ((/* implicit */unsigned short) (short)-16067);
                            var_18 = ((/* implicit */short) ((unsigned short) var_9));
                        }
                        for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_19 += ((/* implicit */unsigned short) var_10);
                            arr_16 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)39011)), ((-(((/* implicit */int) (short)16532))))));
                        }
                    }
                } 
            } 
        } 
        var_20 |= var_8;
        /* LoopNest 2 */
        for (unsigned short i_6 = 3; i_6 < 14; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max(((-((-(((/* implicit */int) arr_5 [i_0] [i_6] [i_6 + 2] [i_7])))))), (((((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_7])) : (((/* implicit */int) arr_1 [i_7])))) / (((/* implicit */int) max(((unsigned short)0), (arr_7 [i_0] [i_6] [i_0] [i_0] [i_6 + 1] [i_6]))))))));
                    var_22 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-6231))));
                    var_23 += ((/* implicit */short) ((((/* implicit */int) arr_13 [i_6 + 1] [i_7] [i_6])) <= (((/* implicit */int) var_4))));
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */short) min((min((max(((unsigned short)8361), (((/* implicit */unsigned short) (short)-8496)))), (((/* implicit */unsigned short) ((short) var_10))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))));
        arr_22 [(short)12] |= ((/* implicit */unsigned short) arr_10 [(unsigned short)6] [i_0] [(unsigned short)6] [i_0] [(unsigned short)6]);
    }
}
