/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130140
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
    var_19 |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 24; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 3110179281U)) ? (((/* implicit */int) (unsigned short)1331)) : (((/* implicit */int) (unsigned short)58300))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 2; i_4 < 24; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((arr_0 [i_2] [i_2]) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_4 - 1]))));
                            arr_13 [i_0] [i_1 + 1] [i_2] [i_0] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                            arr_14 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) (+(var_9)));
                            var_22 = ((/* implicit */unsigned short) arr_12 [i_0]);
                            arr_15 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 4] [i_2] [i_1 + 4] [i_4])) ? (((/* implicit */int) (unsigned short)7236)) : (((/* implicit */int) var_2))))) ? (4737764832834594606ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)7236)))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_3 - 1]))))) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_3]))));
                            var_24 = ((((/* implicit */int) (unsigned short)58300)) != (((/* implicit */int) (unsigned short)58300)));
                        }
                        var_25 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2373))))))) ? (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)31573))))) : (((var_17) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58300)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)58297)))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_3 - 3] [i_1] [i_1] [i_1] [i_0 - 1]))))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((unsigned short) var_4)))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_0])) < (((((/* implicit */_Bool) (unsigned short)58300)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58300))))));
        arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -824251293)) ? (((/* implicit */int) (short)26535)) : (((/* implicit */int) (unsigned short)32456))))) ? (((/* implicit */int) ((_Bool) arr_12 [i_0 - 1]))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 1])) < (((/* implicit */int) (_Bool)1)))))));
    }
    for (int i_6 = 1; i_6 < 24; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [i_6 + 1] [i_6 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1535034407781240697LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) / (arr_10 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1])))));
        arr_23 [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_4 [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_4 [i_6 - 1] [i_6 + 1])))), (((/* implicit */int) ((((/* implicit */int) var_14)) <= ((((_Bool)1) ? (((/* implicit */int) (short)4923)) : (((/* implicit */int) arr_3 [i_6] [i_6] [i_6])))))))));
    }
    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1535034407781240697LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */signed char) var_14)))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1184788025U))))))));
}
