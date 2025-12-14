/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160920
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
    var_10 = ((-1762237757) / (((/* implicit */int) var_8)));
    var_11 = ((((/* implicit */_Bool) var_6)) ? (max((-924019986), (((/* implicit */int) (unsigned short)32640)))) : (((/* implicit */int) min((var_8), ((!(((/* implicit */_Bool) var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((((((var_1) + (2147483647))) << (((((/* implicit */int) arr_5 [i_1] [i_1])) - (1))))) >> (((((((/* implicit */int) (unsigned short)19514)) << (((142447465) - (142447455))))) - (19982309))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) min((var_13), (var_5)));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0])) * (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_5))))))) : (((/* implicit */int) arr_5 [i_0] [i_1])));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                            {
                                var_14 *= ((/* implicit */unsigned short) var_2);
                                var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), ((unsigned short)32640)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)156)) == (arr_11 [i_4] [i_4] [i_3] [i_0] [i_1] [i_0])))) : (((/* implicit */int) arr_4 [i_0]))))));
                                var_16 += (+(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [12])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_7 [i_4] [i_1] [i_1])))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_17 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_3])) < (arr_2 [i_3])))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)60938)) : (((/* implicit */int) var_6))))));
                                arr_18 [i_5] [i_1] [i_2] [(unsigned char)6] [i_5] = ((/* implicit */int) arr_5 [i_0] [i_0]);
                                var_17 = ((/* implicit */unsigned char) (~(((var_1) + (((((/* implicit */_Bool) arr_11 [i_5] [i_3] [i_2] [6] [i_1] [i_0])) ? (((/* implicit */int) var_3)) : (-142447465)))))));
                                var_18 = min((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_1])))), (max((((((/* implicit */_Bool) arr_10 [i_5] [i_3] [i_2] [i_1] [i_0])) ? (arr_13 [i_5] [i_5] [i_3] [i_1] [i_1] [i_1] [14]) : (((/* implicit */int) var_4)))), (max((-142447466), (arr_0 [i_0] [i_2]))))));
                            }
                            var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((-1465873670) + (2147483647))) << (((((/* implicit */int) (unsigned short)6)) - (5)))))) || (((/* implicit */_Bool) max((var_2), (arr_11 [i_3] [i_2] [(unsigned char)10] [i_1] [i_0] [i_0])))))), (((((((/* implicit */_Bool) 627278404)) ? (((/* implicit */int) arr_4 [i_0])) : (920210432))) <= (max((var_2), (((/* implicit */int) arr_8 [i_2] [i_2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
