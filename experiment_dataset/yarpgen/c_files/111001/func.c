/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111001
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
    var_11 = max((((/* implicit */int) (unsigned char)23)), (var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_7 [i_3 + 1] [i_0] [i_1] [i_0]))));
                        arr_10 [i_0] [i_1] [i_2] [i_3 + 1] = ((/* implicit */unsigned int) arr_8 [i_0]);
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((long long int) arr_5 [i_0] [i_3]))))));
                            var_14 = ((/* implicit */unsigned short) (+(max((((arr_2 [i_1] [i_4]) * (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) arr_6 [i_2] [i_2]))))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
                        {
                            arr_15 [i_5] [i_3] [i_2] [i_1] [7] = ((/* implicit */int) var_8);
                            arr_16 [i_0] [i_0] [i_0] [i_3 - 1] [i_5] [i_5 - 1] = min(((+(arr_4 [i_3 + 1]))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))))))) > (max((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */long long int) (signed char)127))))))));
                        }
                        for (int i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) min((((unsigned char) 2147483647)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-7938))))))))));
                            arr_20 [i_0] [(unsigned char)3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((unsigned char)82), (arr_19 [(unsigned char)9] [i_6] [(unsigned char)9] [i_3] [i_2] [i_1] [i_0])));
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_0] [i_3] = ((((((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) / (arr_12 [i_3 + 1] [(_Bool)1] [(_Bool)1] [i_2] [i_1] [i_1] [(_Bool)1]))) * (((((/* implicit */_Bool) ((arr_13 [i_2] [2] [i_2]) & (((/* implicit */int) var_4))))) ? (max((arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]), (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [(_Bool)1] [(_Bool)1] [i_2 + 1] [i_0] [i_2 + 1] [(unsigned char)9])) == (var_10))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_24 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1])) || (((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_7]))))), (((((/* implicit */_Bool) (short)29176)) ? (var_10) : (var_1))))) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [(_Bool)1] [i_0] [i_0] [i_1] [i_1]))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) -2147483636))) / (min((((((/* implicit */int) var_7)) << (((2147483628) - (2147483617))))), ((-2147483647 - 1))))));
                        var_17 = ((/* implicit */unsigned char) ((2147483647) == (((/* implicit */int) (unsigned short)0))));
                        var_18 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) arr_12 [i_0] [i_2 + 1] [i_2] [i_0] [i_2] [i_0] [i_7])), (arr_14 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))), (((/* implicit */long long int) ((arr_12 [i_0] [i_2 - 1] [i_7] [i_7] [i_1] [i_2] [i_7]) > (arr_12 [i_0] [i_2 - 1] [i_2 + 1] [i_7] [i_2] [i_1] [i_2]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (long long int i_9 = 2; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_8 [i_2 - 1])) - (190458124))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_0 [i_2 + 1]) <= (arr_0 [i_2 - 1])))) << (((max((arr_0 [i_2 + 1]), (arr_0 [i_2 + 1]))) - (2602060769U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) - (2147483647)));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (((((var_6) >= (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (((long long int) var_10)) : (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))))));
}
