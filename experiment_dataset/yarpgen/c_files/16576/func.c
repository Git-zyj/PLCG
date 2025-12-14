/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16576
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_13))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (signed char)108))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((unsigned long long int) var_14)))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */signed char) 11143815958568327687ULL);
                            var_18 += ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) min(((signed char)-108), (((/* implicit */signed char) arr_9 [i_0] [i_1] [i_4] [i_3] [i_4 + 1] [i_4]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)93)))))))) && ((!(((/* implicit */_Bool) arr_10 [i_4 - 1] [i_1 + 4]))))));
                            var_19 -= ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_4 + 1])) + (((/* implicit */int) arr_7 [i_1] [i_3] [i_4]))))) ? ((+(((/* implicit */int) arr_7 [i_1] [i_3] [i_4 - 1])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_3])))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((~(11637707987207899834ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_1 + 2] [i_1 + 4] [i_5 + 1]), (arr_7 [i_1 + 1] [i_1 + 2] [i_5 + 1]))))))))));
                            arr_14 [i_5] [i_5] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (33292288U)))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_1] [i_2]))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_21 = ((/* implicit */int) max((var_21), (min(((~(arr_13 [i_0] [i_0] [i_0] [i_0]))), ((+(((/* implicit */int) var_4))))))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((min((arr_9 [i_1 + 1] [i_5 - 1] [i_2] [i_3] [i_5 - 1] [i_2]), (arr_9 [i_1 - 1] [i_5 - 1] [i_2] [i_3] [i_5 - 1] [i_0]))), (arr_9 [i_1 - 1] [i_5 + 1] [i_2] [i_3] [i_5 - 1] [i_5 + 1]))))));
                        }
                        for (short i_6 = 2; i_6 < 20; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((var_12), (var_12)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)27668))))) : ((+(var_7))))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_13))))) ? ((-(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_3] [i_2])) ? (((/* implicit */int) var_5)) : (arr_13 [i_2] [i_1] [i_2] [i_3]))))) : (max((((/* implicit */int) min((((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_0] [i_6 - 1] [i_0])), (var_13)))), ((~(((/* implicit */int) var_1))))))));
                        }
                        for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_25 |= ((/* implicit */signed char) arr_2 [i_0] [i_3]);
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_7 [i_1 + 2] [i_1] [i_1 - 1]), (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 4]))))));
                        }
                        arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (signed char)100);
                        arr_20 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) max((max(((-(((/* implicit */int) arr_5 [i_1] [i_2] [i_3])))), (((((/* implicit */_Bool) 1539651652)) ? (-573478428) : (((/* implicit */int) (signed char)6)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (max((var_3), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_3] [i_2] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
    var_29 = ((/* implicit */short) ((unsigned long long int) var_11));
}
