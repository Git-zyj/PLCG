/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100556
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 &= ((/* implicit */int) (+(min((((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))))), (((/* implicit */unsigned long long int) (unsigned char)92))))));
                var_21 -= ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]);
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)26969)) ? (var_5) : (((min((var_18), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)26978)))))))));
                arr_5 [i_0] = max((min((arr_3 [i_1] [i_0] [i_0]), (arr_3 [i_1] [i_1] [i_1]))), (min((arr_3 [i_1] [i_0] [(unsigned char)5]), (arr_3 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            {
                arr_10 [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_9 [i_3 + 1] [i_3 - 1] [i_3 - 1]), (arr_9 [i_3 + 2] [i_3 + 1] [i_3 - 1])))) ? (((/* implicit */int) max((((((/* implicit */int) arr_3 [i_2] [i_3 - 1] [i_3 - 1])) == (((/* implicit */int) (unsigned char)158)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) == (var_7)))))) : (((/* implicit */int) ((unsigned char) arr_3 [(unsigned short)1] [i_3 - 1] [i_3 - 1])))));
                var_23 = ((/* implicit */int) var_0);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_3 + 2] [(unsigned char)0] [i_3 + 2] [i_3 - 1] [i_3 + 2])) : (((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 2] [i_3 + 1] [(unsigned char)2] [i_3 + 2])))), (((/* implicit */int) (unsigned char)62))));
                            var_25 = ((/* implicit */unsigned char) var_3);
                            var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) arr_12 [i_2] [i_3] [i_4] [i_5]))))) ? (min((var_7), (((/* implicit */unsigned long long int) arr_7 [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 + 1] [i_3]))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_14 [i_3 + 1] [9] [9] [(unsigned short)5] [i_3 + 2])))));
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)26969)))))))));
                            arr_16 [i_5] [0] [6ULL] [0] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))), (max((max((((/* implicit */unsigned long long int) (unsigned short)29137)), (var_7))), ((+(var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((unsigned long long int) var_8)) == ((~(var_14)))))), (var_4)));
    var_29 = ((/* implicit */unsigned char) min((min((((unsigned long long int) var_19)), (((((/* implicit */_Bool) var_1)) ? (var_5) : (var_16))))), (((/* implicit */unsigned long long int) var_4))));
}
