/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127720
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5))));
    var_15 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) (unsigned short)31827)) ? (((/* implicit */int) (unsigned short)47212)) : (((/* implicit */int) var_8)))))) & (((((/* implicit */int) var_10)) & (((/* implicit */int) var_8))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12918)) ? ((-((~(((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1] [(unsigned short)15])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28082)))))))));
                                var_18 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47920)) ? (((/* implicit */int) (unsigned short)7537)) : (((/* implicit */int) (unsigned short)8312))))))) ? (((/* implicit */int) arr_2 [i_2] [i_4])) : (((((/* implicit */_Bool) min(((unsigned short)62812), ((unsigned short)62817)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26592))))) : ((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_19 [(unsigned short)10] [(unsigned short)10] [i_0] [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) min((((((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned short)58234)))) | (((((/* implicit */int) (unsigned short)46637)) | (((/* implicit */int) (unsigned short)19213)))))), ((~(((/* implicit */int) max((arr_14 [i_0] [i_2] [i_0]), ((unsigned short)27168))))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) (((~(((/* implicit */int) arr_17 [i_2])))) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_2]))))))) | (((((/* implicit */int) (unsigned short)1541)) & ((-(((/* implicit */int) (unsigned short)62801)))))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)59031)) : (((/* implicit */int) arr_0 [(unsigned short)10] [i_2])))) & (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
