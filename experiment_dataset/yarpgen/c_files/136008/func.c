/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136008
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
    var_17 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((short) (unsigned short)928))), ((unsigned short)64607)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                    arr_7 [i_0 + 1] [i_0] [i_1 - 2] [9] = (~(max((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])), (min((-968045627), (((/* implicit */int) var_14)))))));
                    arr_8 [(signed char)12] [i_0] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (signed char)-111)) + (((/* implicit */int) arr_5 [i_0] [i_0] [22U]))))));
                    var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)51300))))), (((unsigned long long int) 15))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~((-(arr_1 [i_0 + 1])))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    arr_14 [i_0] = ((/* implicit */short) ((arr_5 [i_1 - 2] [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_0] [i_0 + 1]))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        arr_20 [i_0] = (signed char)125;
                        var_21 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (+(-654805415)))) ? (((((/* implicit */int) (unsigned char)117)) % (((/* implicit */int) (signed char)5)))) : (((/* implicit */int) (unsigned short)40112))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 2; i_6 < 23; i_6 += 2) 
                    {
                        arr_23 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) != (((((/* implicit */int) arr_13 [i_6] [i_6] [i_6])) - (((/* implicit */int) arr_18 [i_0] [i_0] [14U] [i_0]))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) arr_17 [i_0] [6] [i_4] [i_6 - 1])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_1 - 1]))));
                        arr_24 [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_15 [i_6 - 2] [i_6 - 2] [i_4]));
                    }
                    arr_25 [i_0] [i_1 + 1] [i_0] [i_4] = ((signed char) ((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [13]))) >> (((((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (387285316U)))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)98)) * (((/* implicit */int) (unsigned short)25424)))), (((968045626) / (((/* implicit */int) (signed char)6))))))) ? (-968045627) : (-101736520))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 4; i_8 < 22; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_28 [i_8 + 1] [i_8 + 1] [i_8 + 2]) | (arr_28 [i_8 + 2] [i_8 - 2] [i_8 - 1])))) ? ((~(arr_30 [i_0] [i_0 - 1] [i_0] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)62), ((signed char)5)))))));
                                var_25 = (signed char)122;
                            }
                        } 
                    } 
                }
                var_26 = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    var_27 *= ((/* implicit */_Bool) (-((-(((/* implicit */int) (short)22058))))));
}
