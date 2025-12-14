/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103052
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_12 -= ((((((/* implicit */_Bool) (+(var_0)))) ? (arr_8 [i_1] [i_1] [13U] [13U]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_3 [i_0] [i_0]))))))) << ((+((+(((/* implicit */int) var_3)))))));
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_2] [(short)19] [0] = ((/* implicit */unsigned int) arr_9 [i_2] [i_3] [i_3 + 1] [i_3] [i_3]);
                                arr_14 [i_0] [i_2] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (min((24U), (3135942065U)))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_1]);
                /* LoopNest 3 */
                for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        for (signed char i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] [i_1] [(unsigned short)16] [(short)11] [i_5] = ((/* implicit */unsigned long long int) min((3135942065U), (max((1159025231U), (((/* implicit */unsigned int) min(((short)-1), (((/* implicit */short) arr_16 [i_1] [(unsigned char)9])))))))));
                                var_14 = ((/* implicit */unsigned int) var_4);
                                var_15 = ((/* implicit */unsigned short) (~(((unsigned int) (unsigned short)65535))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (unsigned int i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) var_4);
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) max((arr_22 [12ULL] [i_1] [i_1] [(unsigned char)6] [i_1]), ((unsigned short)42451))))))) + (1159025249U)));
                            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_8]))))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) ((signed char) arr_6 [i_9]))) - (((((/* implicit */_Bool) arr_9 [i_0] [12U] [i_1] [i_1] [i_1])) ? (arr_12 [i_0] [i_0]) : (((/* implicit */int) var_2))))))));
                            arr_28 [i_9 + 3] [i_8] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_15 [i_8])))) ? (max((var_0), (((/* implicit */int) arr_22 [i_9 + 1] [i_9 + 2] [(short)11] [i_9 + 2] [i_9 - 1])))) : ((-(((/* implicit */int) arr_22 [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 + 3]))))));
                            var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        {
                            arr_36 [i_10] [i_1] [i_1] [i_10] = ((/* implicit */unsigned long long int) max(((+(max((-6324561275485943777LL), (((/* implicit */long long int) 192666936U)))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_0] [i_0] [i_0])))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_16 [i_11] [i_0]))));
                            arr_37 [i_10] [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) arr_27 [i_0] [i_0] [i_10] [i_0] [i_0] [i_10]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) : (var_6)));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_10))));
}
