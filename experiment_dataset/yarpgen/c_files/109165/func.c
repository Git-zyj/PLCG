/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109165
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((((16758187844806059908ULL) != (((unsigned long long int) arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])))))) : (arr_4 [i_0]));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((unsigned long long int) ((short) (+(((/* implicit */int) arr_11 [i_0] [i_2]))))))));
                                arr_17 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 211009991312377366ULL)) ? (var_12) : (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_9 [i_1]))))))) ? (((((/* implicit */_Bool) 18235734082397174247ULL)) ? (18235734082397174247ULL) : (arr_16 [i_3] [i_0] [i_2] [i_2] [i_4] [i_0] [i_4]))) : (5868594339401973380ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_0] [(short)6] [i_6 - 1] [i_1] = ((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_1] [i_1] [i_6] [i_6] [i_7]);
                                var_17 = min((((arr_13 [i_0] [i_1] [i_6 - 2] [i_6]) + (arr_13 [i_0] [i_1] [i_6 - 3] [i_6 - 1]))), (var_8));
                            }
                        } 
                    } 
                } 
                var_18 = ((((/* implicit */_Bool) max((10726462037291248669ULL), (18235734082397174242ULL)))) ? (((((var_8) < (arr_21 [(short)10] [i_1] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16395637175865737835ULL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26518))) * (arr_15 [i_0] [i_0] [i_0] [i_1] [i_1]))))) : ((+(arr_3 [i_0] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 3) 
                    {
                        {
                            arr_33 [i_0] [i_1] [i_8 - 1] = min((((unsigned long long int) 17351174013647845805ULL)), (min((((((/* implicit */_Bool) var_15)) ? (5771889860115303788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1])))));
                            var_19 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) arr_29 [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_14 [i_0] [i_1])) ? (arr_31 [6ULL] [i_1] [i_8 + 1] [5ULL]) : (9098856274765876650ULL)))))) ? (min((arr_6 [i_9 - 1] [i_9] [i_8 + 2] [i_8 + 3]), ((-(arr_3 [4ULL] [i_1] [i_9]))))) : (((9820846656054265065ULL) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) (+(((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) min((var_15), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) : (12578149734307578235ULL))) : (((((((/* implicit */_Bool) 18235734082397174275ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9119))) : (var_3))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))));
}
