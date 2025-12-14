/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102148
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
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) (short)18653)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) -1452009009256033467LL);
                                arr_15 [i_4] [i_0] [i_2 - 1] [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_0])) ? (arr_3 [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 + 1] [i_0]))))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1)))));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((arr_3 [i_0]) >> (((((/* implicit */int) (short)18650)) - (18602))))) + (((/* implicit */long long int) arr_11 [i_2 + 1] [i_3 - 1] [(signed char)8] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned int) arr_7 [i_0] [i_6] [i_6])))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_0] [i_6] [i_5] [i_6])) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_0] [i_6]))))) : (max((((/* implicit */long long int) (unsigned short)48737)), (arr_18 [i_6])))))) ? (((/* implicit */unsigned int) ((arr_9 [i_0] [i_1] [i_5] [i_6]) | (((/* implicit */int) arr_17 [i_0] [i_1] [i_6]))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_5]))))))));
                            var_26 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */int) (short)-18654)), ((-(((/* implicit */int) var_13))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)5007)) : (((/* implicit */int) var_3))))), (arr_12 [i_5] [i_0] [i_5] [i_1] [i_5])))));
                            var_27 -= ((/* implicit */unsigned char) (short)-18658);
                        }
                    } 
                } 
                var_28 = (+(((/* implicit */int) (short)18653)));
                arr_21 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) + (2147483647))) << (((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1])) - (180)))))) ? (((/* implicit */long long int) (~(arr_11 [i_0] [i_0] [i_0] [i_1] [i_1])))) : (((long long int) (unsigned short)4900))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)-18654))) != (var_8))))) : (-7578675900672421422LL)))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) + (2147483647))) << (((((((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1])) - (180))) + (41))) - (7)))))) ? (((/* implicit */long long int) (~(arr_11 [i_0] [i_0] [i_0] [i_1] [i_1])))) : (((long long int) (unsigned short)4900))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)-18654))) != (var_8))))) : (-7578675900672421422LL))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38954)) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-5008)))))))), (((unsigned int) (~(var_5))))));
}
