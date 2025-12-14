/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153575
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
    var_10 = ((/* implicit */int) (~((((_Bool)1) ? (-6911924303540963894LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32963)))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) arr_1 [i_2] [i_2]);
                            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((var_0), (((/* implicit */unsigned int) arr_8 [13] [(_Bool)1] [(_Bool)1] [9U])))))));
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_9 [i_0] [i_1 + 1] [i_0] [(unsigned short)7] [i_0] [11]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 3; i_4 < 14; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_18 [(unsigned char)14] [i_5 - 1] [i_0] [i_4 - 3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_0 [i_5 - 1])), (var_4))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6])))));
                                arr_19 [i_0] [i_1] [i_4 + 1] [i_5] [i_6] = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) 18446744073709551612ULL)) ? (746416336415091973ULL) : (((/* implicit */unsigned long long int) arr_11 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32732)) && (((/* implicit */_Bool) (unsigned short)22828))))))), (((/* implicit */unsigned long long int) (unsigned char)147))));
                                var_14 = 13221136249311585671ULL;
                                var_15 = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) arr_4 [i_0])), (var_0))), (((/* implicit */unsigned int) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1)))))));
                var_17 = ((/* implicit */unsigned long long int) ((-1LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)18022))))) ? (2086415450U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))))))));
            }
        } 
    } 
}
