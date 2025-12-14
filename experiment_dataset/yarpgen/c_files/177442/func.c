/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177442
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
    var_13 ^= var_4;
    var_14 = var_2;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)2), ((unsigned char)113))))))) ? ((~(((/* implicit */int) var_8)))) : ((~((-(((/* implicit */int) var_11))))))));
                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_4 [i_1 + 2] [i_0] [i_0 - 1]), (arr_4 [i_1 + 1] [i_0] [i_0 - 1]))))));
                arr_5 [(unsigned char)8] [i_0] = ((/* implicit */unsigned char) max((min((((((/* implicit */int) (unsigned char)197)) | (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [(unsigned char)1] [i_0 - 1])) : (((/* implicit */int) (unsigned char)255)))))), ((((~(((/* implicit */int) (unsigned char)12)))) ^ (((/* implicit */int) (unsigned char)12))))));
                arr_6 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned char)12), (var_7))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)43)) <= (((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) arr_0 [i_0 - 1] [(unsigned char)1])) : (((/* implicit */int) var_1)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_0 + 1])) < (((/* implicit */int) arr_1 [i_0]))))), (min(((unsigned char)209), ((unsigned char)17)))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238))))) > ((+(((/* implicit */int) (unsigned char)127)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            {
                arr_13 [i_2] [i_3 + 2] [i_3] = max(((unsigned char)58), (arr_11 [(unsigned char)4] [i_2] [i_2]));
                arr_14 [i_3] [i_3] = (i_3 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) < (((((((/* implicit */int) (unsigned char)0)) << (((/* implicit */int) arr_4 [i_2] [i_3] [i_2])))) >> (((((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) arr_10 [i_3] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_3])))) - (48)))))))) : (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) < (((((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) arr_4 [i_2] [i_3] [i_2])) - (43))))) >> (((((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) arr_10 [i_3] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_3])))) - (48))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_3] = ((unsigned char) (unsigned char)43);
                            arr_21 [i_2] [i_4] [i_4] [i_5] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_16 [(unsigned char)10] [i_3 - 1] [i_5 - 2] [i_4])) ? (((/* implicit */int) arr_16 [i_2] [i_3 + 2] [i_5 + 1] [i_2])) : (((/* implicit */int) (unsigned char)3)))), (((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_3 - 3] [i_5 - 2] [i_2])) < (((/* implicit */int) (unsigned char)0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned char) max((((/* implicit */int) max((var_11), (var_6)))), (((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (unsigned char)199)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
}
