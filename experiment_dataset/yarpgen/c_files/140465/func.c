/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140465
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
    var_17 &= ((/* implicit */signed char) var_14);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (unsigned char)188)))))))) ? (((((((/* implicit */int) var_6)) / (((/* implicit */int) var_11)))) >> ((((~(((/* implicit */int) (unsigned char)56)))) + (60))))) : (min((((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1)))), ((~(var_14)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_19 = ((/* implicit */int) (_Bool)1);
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)40304);
                    var_20 = var_15;
                    arr_10 [(unsigned char)2] [i_1] [(unsigned char)2] = ((((/* implicit */_Bool) max((min((arr_6 [i_0]), (((/* implicit */unsigned short) (unsigned char)64)))), (((/* implicit */unsigned short) min((arr_5 [i_1]), ((unsigned char)255))))))) ? (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)181)) >= (-1590062516)))), ((signed char)-90)))) : ((-(((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) var_4)))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), ((unsigned short)16384)));
                    arr_13 [(unsigned short)0] [i_0] [i_0] &= ((/* implicit */_Bool) (unsigned char)73);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [(unsigned short)2] [i_1] [i_3])) ? (((/* implicit */int) var_2)) : (arr_7 [i_0] [i_1] [i_3])));
                }
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (unsigned short)7233))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_5])), (555891005U))) % (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-90)), ((unsigned char)12)))), ((-(arr_7 [i_0] [i_5] [i_0]))))))));
                                arr_20 [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)11)), (((((/* implicit */_Bool) (unsigned char)129)) ? (max((((/* implicit */int) (unsigned short)58303)), (arr_15 [i_0] [i_6] [i_4] [i_0]))) : (((/* implicit */int) (unsigned short)0))))));
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) var_9);
                    var_25 += ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_8 [(_Bool)1] [i_1]), ((unsigned char)252))))));
                    arr_22 [i_1] = ((/* implicit */unsigned int) ((min((arr_12 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */long long int) var_11)))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)-99))) / (arr_12 [i_0] [i_1] [i_1] [(unsigned char)7])))));
                }
                arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0]);
            }
        } 
    } 
}
