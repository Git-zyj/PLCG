/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16415
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
    var_19 = ((/* implicit */unsigned long long int) (((-(min((((/* implicit */unsigned int) var_2)), (var_7))))) ^ (2024147401U)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((3571210161697782506LL) - (3571210161697782506LL)))))) + (min((((/* implicit */long long int) 2270819900U)), (((3571210161697782506LL) + (-3571210161697782508LL)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    var_21 ^= ((/* implicit */long long int) var_6);
                    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_2] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                                arr_16 [i_0] [i_1] [i_0] [(unsigned short)16] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(signed char)3] [i_1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) 3571210161697782508LL)))))));
                                arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(arr_8 [i_0] [i_1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) 246289101)) ? (3571210161697782506LL) : (((/* implicit */long long int) 2024147401U)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_2] [i_2 + 3] [(signed char)3] [i_2 + 2] [i_2 - 1] [i_2 + 3])), (var_10)))))));
                            }
                        } 
                    } 
                }
                arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (arr_8 [i_0] [i_1]))), ((~(arr_8 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_7)) : (min((3571210161697782518LL), (-3571210161697782484LL)))));
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_34 [i_5] [i_5] [i_6] [i_7] [i_6] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)41)) == (((/* implicit */int) ((signed char) ((unsigned char) (unsigned short)24490))))));
                                arr_35 [i_5] [i_6] [(unsigned char)10] [i_6] [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-3571210161697782519LL) ^ (((/* implicit */long long int) -1876560510))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) ^ (3571210161697782528LL))))))));
                                arr_36 [i_6] [i_9] [i_9] [6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((1783794564U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))))) < (((/* implicit */int) (short)17002))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
