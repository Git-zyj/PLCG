/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152758
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29304))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                var_18 ^= ((/* implicit */unsigned short) var_10);
                var_19 = ((/* implicit */short) var_7);
                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_9), (max((var_9), (((/* implicit */unsigned int) (short)31511))))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((int) var_3))) : (((var_16) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (min((1352543001), (((/* implicit */int) (unsigned short)57562)))) : ((~(((/* implicit */int) var_16)))))))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_17 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7956))))) ? (((((/* implicit */_Bool) -2081340243)) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_3] [i_2])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57562))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2312844278U)) ? (512773062) : (((/* implicit */int) (_Bool)1))));
                                var_25 ^= ((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) (short)-32756))) : ((~(((/* implicit */int) (short)-15))))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_7 [i_2] [i_3]) + (var_8))) / (arr_7 [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39165)) ? (((/* implicit */int) (unsigned char)37)) : (-1146205791)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (_Bool)1))))) : (var_11)))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) min((var_26), ((~((~((~(var_8)))))))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (unsigned short)26370))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_21 [i_3]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)57570)) ? (490363180U) : (((/* implicit */unsigned int) -926041423))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
