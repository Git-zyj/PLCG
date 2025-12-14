/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109453
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
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (-((~(((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))))));
    var_21 = ((_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [8] = ((/* implicit */unsigned int) (((-(var_3))) / (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [(_Bool)0] [i_3] [i_4])) ? (((/* implicit */int) arr_5 [i_0] [0] [i_3])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [i_3 + 2]))))));
                                arr_12 [(unsigned short)12] [i_1] [(_Bool)1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_4] [i_1] [i_0])) * (((((/* implicit */int) var_13)) * (((/* implicit */int) arr_4 [i_1 - 1] [i_0 + 1]))))));
                                var_22 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_4 [(_Bool)1] [i_1 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) min((var_23), ((-(min((((-2840169394788067397LL) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))))), (((/* implicit */long long int) (+(var_10))))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        {
                            arr_18 [i_6] [i_5] [i_5] [0U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((108700611U), (((/* implicit */unsigned int) arr_4 [i_6] [i_1 + 1]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_5] [i_0 + 1])) : (((/* implicit */int) (unsigned short)0)))) : ((((_Bool)0) ? (arr_17 [i_0 - 2] [(_Bool)1] [i_1] [i_1] [(unsigned short)10] [i_6]) : (((/* implicit */int) var_14))))))) && (((/* implicit */_Bool) var_3))));
                            var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(2147483647))) != ((-(2147483647))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 2] [5LL] [i_5] [i_5] [i_6] [i_6]))) % ((-(arr_1 [i_6])))))));
                            var_25 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_14 [5] [i_1 + 1]))))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_13 [i_1]) : (((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)7] [i_6])))))))), (((unsigned char) (short)63)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_14);
}
