/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160769
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) * (((((/* implicit */_Bool) ((short) (short)-13817))) ? ((-(((/* implicit */int) (signed char)19)))) : (((((/* implicit */_Bool) var_11)) ? (arr_0 [i_3]) : (((/* implicit */int) (_Bool)1))))))));
                                arr_15 [i_4] [i_1 + 3] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) (signed char)-19);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), (var_6)))) >= (((/* implicit */int) var_3))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)11)) : (arr_7 [i_1] [i_1] [i_0] [i_1])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-19)) : (16252928))) : (((/* implicit */int) max((((/* implicit */short) arr_11 [i_0] [i_0 - 2] [i_1] [i_1] [i_1])), (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] [i_2])))))), (((/* implicit */int) ((((unsigned long long int) (_Bool)1)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        {
                            arr_27 [i_5] [i_5] [i_6] [i_5 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)21463))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) 274341036032LL)))))))) >> (((min(((-(((/* implicit */int) (_Bool)1)))), (((int) (unsigned short)39298)))) + (1)))));
                            arr_28 [0LL] [i_6] [0LL] [i_8] &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-34)))) ? (min((((((/* implicit */int) var_6)) - (((/* implicit */int) arr_24 [i_5] [i_6] [i_6] [i_8])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_23 [(unsigned short)12] [(unsigned short)12])))))) : (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)8))))) : (1743487791)))));
                        }
                    } 
                } 
                arr_29 [i_5 + 2] [i_6] [i_5] = (unsigned short)16128;
                arr_30 [i_6] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)19)) ? (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (var_7))) : (1073737728U)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (signed char i_9 = 2; i_9 < 16; i_9 += 2) 
    {
        for (unsigned short i_10 = 4; i_10 < 17; i_10 += 1) 
        {
            {
                arr_38 [i_10] [i_10] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)16128)) : (((/* implicit */int) (unsigned short)40308))));
                arr_39 [i_10] [i_9] [i_10] = ((/* implicit */_Bool) arr_33 [i_10 - 4]);
            }
        } 
    } 
}
