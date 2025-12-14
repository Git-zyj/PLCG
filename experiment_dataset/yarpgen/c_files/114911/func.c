/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114911
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
    var_19 = ((/* implicit */_Bool) var_8);
    var_20 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-31638))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) (+((+(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
                {
                    var_22 = ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) min(((short)31637), (((/* implicit */short) arr_2 [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_1 [i_0 + 1])))))))));
                    var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) 8388607)) ? (((/* implicit */int) (((-(((/* implicit */int) (short)-20371)))) != ((-(var_15)))))) : (max((min((-1321477621), (((/* implicit */int) arr_6 [i_0])))), ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))));
                    var_24 = ((/* implicit */unsigned short) arr_4 [i_0] [(short)9]);
                }
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    arr_12 [(short)6] = ((/* implicit */unsigned short) var_12);
                    arr_13 [i_0] [i_3] [i_3] = ((/* implicit */long long int) var_11);
                    arr_14 [(signed char)2] [i_1] [(signed char)2] &= (((!(((/* implicit */_Bool) arr_1 [i_0 + 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_5 [i_0] [i_5])) && (((/* implicit */_Bool) 290842093)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)43))))) : (((/* implicit */int) arr_18 [(short)6] [4ULL] [i_3] [i_1 + 3] [(_Bool)1])))), ((~(((((/* implicit */int) arr_0 [i_4])) - (((/* implicit */int) var_12)))))))))));
                                arr_20 [i_0] = var_11;
                            }
                        } 
                    } 
                }
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_0 - 1] [i_0 + 2] [i_1] [i_0 - 1])), ((unsigned char)139)))) ^ ((~((+(((/* implicit */int) var_12)))))))))));
            }
        } 
    } 
    var_27 = ((((/* implicit */int) (((~(((/* implicit */int) (signed char)-118)))) <= ((+(((/* implicit */int) var_2))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (5984349389107254983LL) : (5984349389107254983LL))))))));
    var_28 = var_3;
}
