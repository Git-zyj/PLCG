/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106872
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
    var_10 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    var_11 = var_5;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 2128677404)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) -2128677393)))))));
                    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) (short)-24653))))) ? (((((/* implicit */int) var_9)) | (-1031335399))) : (((/* implicit */int) var_6))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 2])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) (short)(-32767 - 1))) / (var_8)))));
                }
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((arr_0 [i_0]) ? (((((/* implicit */int) arr_3 [i_0])) | (((((/* implicit */int) arr_6 [i_1] [i_1] [i_0])) & (-2128677393))))) : ((~(((2128677404) ^ (((/* implicit */int) arr_1 [i_0])))))))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */int) ((min((((/* implicit */int) var_0)), ((-2147483647 - 1)))) == (((/* implicit */int) (((+(((/* implicit */int) var_2)))) <= (((/* implicit */int) arr_0 [i_1])))))));
                            arr_11 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((short) max((((/* implicit */int) ((short) (unsigned short)58991))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_1)))))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 1952996856))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 4; i_5 < 10; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (short i_7 = 2; i_7 < 13; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_25 [i_5 + 1] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) max((-2147483623), (((/* implicit */int) (_Bool)1))));
                                arr_26 [i_7 - 1] = ((short) (unsigned short)65519);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 12; i_10 += 2) 
                    {
                        for (short i_11 = 1; i_11 < 11; i_11 += 1) 
                        {
                            {
                                arr_33 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((int) ((((((/* implicit */_Bool) (short)-9433)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_6])))) % (((/* implicit */int) min((((/* implicit */short) var_0)), ((short)25388)))))));
                                var_18 = ((/* implicit */int) min((var_18), (max((1615059157), (arr_16 [(short)10] [i_7 - 2])))));
                                var_19 = (~(((/* implicit */int) min((arr_22 [i_5 - 3] [i_10 + 1] [i_11] [i_11 + 2] [i_11 - 1]), (arr_12 [i_5 - 3] [i_7 - 2])))));
                                var_20 = ((((/* implicit */int) arr_14 [i_5])) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26617)) ? (((/* implicit */int) arr_32 [i_5 - 1] [i_5] [(_Bool)1] [i_5] [i_5])) : (((/* implicit */int) arr_27 [i_5 - 1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)21852)))) : (arr_15 [i_5 - 2] [i_7 + 1] [i_10 + 2]))));
                                var_21 = ((/* implicit */_Bool) arr_27 [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
