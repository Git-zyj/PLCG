/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120111
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
    var_15 = ((/* implicit */unsigned int) var_6);
    var_16 = ((/* implicit */int) (unsigned char)166);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [(unsigned char)6] |= ((/* implicit */short) var_10);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_2] [i_0] [i_2 + 2] [i_2] [i_0] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (1364717383U)))) ? (((/* implicit */int) max(((unsigned short)25803), (((/* implicit */unsigned short) (short)32321))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)10555)), (var_7)))))) : ((-(((/* implicit */int) (unsigned short)11651))))));
                                arr_13 [i_2] [i_1 - 1] [i_2] [i_3] [i_4] [i_1 - 1] = ((/* implicit */unsigned long long int) (short)31768);
                                arr_14 [i_2] = ((/* implicit */signed char) max((var_12), (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)31756))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) (~(arr_2 [i_4 + 1] [i_2 + 3] [i_0])))) ? (var_6) : (((/* implicit */unsigned long long int) var_10)));
                                arr_16 [i_4] [i_4] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_4 - 1])) ? (-1447874671) : (((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1]))))) ? (((((/* implicit */_Bool) min((4584302506471002185LL), (((/* implicit */long long int) -1186755260))))) ? (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_4])), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31755))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 1] [i_0] [i_4])) : (((/* implicit */int) (short)-31749)))))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) ((arr_11 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_2] [i_2 + 2]) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_2 - 1])) : (1156333864)))) ? (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (unsigned char)178))))) : ((~(((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((((/* implicit */int) var_14)) << (((((-863506127) + (863506147))) - (8)))))))), ((~(min((3980418081U), (((/* implicit */unsigned int) (short)-31756))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44013)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2755)) ? (((/* implicit */int) max((((/* implicit */short) var_4)), (arr_8 [i_6] [i_6] [i_5] [i_6] [i_0] [i_0])))) : (((arr_23 [i_2] [i_2] [i_2 + 3] [i_2] [i_0]) ? (((/* implicit */int) arr_8 [i_6] [i_1] [i_2] [i_1] [i_1] [i_0])) : (arr_2 [i_1] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) max((314549214U), (((/* implicit */unsigned int) -1186755275))))) ? (((((/* implicit */_Bool) var_8)) ? (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))) : (max((((/* implicit */unsigned long long int) 358606551)), (var_11))))) : (((/* implicit */unsigned long long int) ((((var_0) ? (((/* implicit */int) var_4)) : (-863506127))) - (((/* implicit */int) (short)-31757)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))), ((+(var_6)))))) ? (var_10) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)31728)))))));
    var_21 = ((/* implicit */int) (!(((((/* implicit */int) ((unsigned char) var_9))) < (var_10)))));
}
