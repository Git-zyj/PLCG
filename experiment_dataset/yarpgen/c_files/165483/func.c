/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165483
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
    var_19 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [6U] = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_5 [i_1 - 1] [i_3 + 3] [i_3 - 1]))));
                                var_20 = ((arr_3 [11LL]) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-12175)) : (((/* implicit */int) var_9))))) ? ((-(2404971889U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7388318546300745476LL)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (short)10373))))))) - (1889995406U))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_10 [i_6])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_10 [i_0])))), ((+(((/* implicit */int) (signed char)-26))))));
                            arr_21 [i_5] [i_1] [i_2] [i_5] [(short)9] = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_19 [(signed char)8] [i_5]))))));
                        }
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) / (2894414304U))))) % (((/* implicit */int) arr_18 [i_0] [i_2] [i_1] [i_0]))));
                            var_23 = var_11;
                            arr_26 [i_5] [i_1] [8LL] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (short)9296))) ? (((/* implicit */int) min((((/* implicit */short) arr_24 [i_0] [i_1] [i_2] [i_5] [2ULL] [i_0] [i_7])), (arr_9 [i_0])))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_9 [(signed char)2])) / (((/* implicit */int) var_10))))))));
                        }
                        arr_27 [i_0] [6ULL] [i_2] [2ULL] [i_5] = ((/* implicit */long long int) var_14);
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 4; i_8 < 11; i_8 += 3) 
                    {
                        for (signed char i_9 = 2; i_9 < 8; i_9 += 1) 
                        {
                            {
                                var_24 = ((max((arr_31 [i_1 + 1] [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [0ULL]), (((/* implicit */long long int) var_13)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (short)-24064))))) ? (max((arr_3 [i_0]), (((/* implicit */long long int) (short)-10372)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-37)))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((short) ((((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20236))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28504)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */int) var_10)) <= (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13352))) + (var_8)))))))));
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (short)10373)) ? (416600851663897888ULL) : (14985908383324099869ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
}
