/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1714
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
    var_15 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (unsigned short)52712)))), ((~(((/* implicit */int) var_4))))));
                var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)28464)) << (((((/* implicit */int) (unsigned char)179)) - (165)))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_4 [(signed char)12] [i_2] [(unsigned char)14])))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_2]))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) (short)-24384);
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-110)), (var_14)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (short)11712)) > (((/* implicit */int) arr_6 [i_3] [i_3] [(unsigned short)14]))))))) + (((/* implicit */int) min((arr_1 [i_2]), (arr_1 [i_4]))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)12823)) > (((/* implicit */int) arr_13 [(short)4] [i_3] [i_4]))));
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 8; i_6 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_15 [i_5] [i_5] [(signed char)4]), (arr_3 [i_5])))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (var_8)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), (var_11)))) : (((/* implicit */int) ((_Bool) -2384254945412561495LL)))))));
                    var_23 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_16 [i_5 + 1] [(unsigned short)4])))), (((/* implicit */int) min((arr_18 [i_5 + 1] [i_5 + 1] [i_5]), (arr_18 [i_5 + 1] [i_5 + 1] [i_5]))))));
                    arr_19 [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_3] [i_5] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) < (((/* implicit */int) (_Bool)1))))))))) : (max((((unsigned long long int) (unsigned char)5)), (((/* implicit */unsigned long long int) (unsigned short)52712))))));
                }
                arr_20 [(signed char)1] [(unsigned char)5] [i_5] = ((/* implicit */_Bool) arr_12 [i_5] [i_2]);
            }
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(((((((/* implicit */int) (signed char)-87)) + (2147483647))) >> (((((/* implicit */int) var_6)) + (65))))))))));
                var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [(unsigned char)2]))) | (((unsigned long long int) (unsigned short)44600))));
                var_26 = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)4064), (((/* implicit */unsigned short) (signed char)-87))))) <= (((/* implicit */int) ((signed char) max((arr_9 [i_2]), (var_3)))))));
            }
            var_27 = ((unsigned char) (!(((/* implicit */_Bool) (signed char)96))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max((min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)159))), (((/* implicit */unsigned char) (signed char)127)))))));
        }
        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
    }
}
