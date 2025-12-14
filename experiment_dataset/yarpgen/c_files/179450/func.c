/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179450
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [(unsigned short)5] [i_0] = arr_4 [i_0] [i_1] [i_1];
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(max((((arr_3 [i_0] [i_1]) * (arr_5 [i_0]))), (((/* implicit */unsigned long long int) arr_6 [(unsigned char)14])))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 4; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) var_1)))));
                            var_22 = max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_15)), (arr_8 [i_3 + 1] [i_3 - 3] [i_3 - 2] [i_3 - 3])))), (max((arr_1 [i_2]), (((/* implicit */unsigned long long int) var_5)))));
                            arr_14 [i_0] [i_0] [4ULL] [i_2] = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((int) (+(-4777478362276591270LL)))))));
                arr_15 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (arr_8 [i_0] [i_0] [(unsigned short)12] [(unsigned short)23])))) ? (((/* implicit */unsigned long long int) (+(arr_8 [(unsigned short)21] [i_1] [(unsigned short)21] [i_1])))) : (((((/* implicit */_Bool) arr_8 [i_0] [(signed char)11] [i_1] [i_0])) ? (var_17) : (((/* implicit */unsigned long long int) arr_8 [(signed char)4] [i_0] [i_1] [(unsigned char)0]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) (_Bool)0);
    var_25 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4231922009473598529ULL)))) ? (var_19) : (((((/* implicit */_Bool) (unsigned short)34938)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-96)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            {
                arr_22 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (arr_1 [i_4 + 2]) : (arr_1 [i_4 + 3])))) ? (max((((/* implicit */unsigned long long int) var_0)), (arr_1 [i_4 + 3]))) : (((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (arr_1 [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))));
                var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5662191888040140179ULL)) ? (arr_5 [i_4 + 1]) : (arr_5 [i_4 + 1])))) ? ((~(arr_18 [i_5] [i_4 + 2]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40977))) : (arr_5 [i_4 + 1])))));
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_30 [i_4] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_4 + 3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_5] [i_4] [i_4])) == (((/* implicit */int) arr_9 [i_6] [i_4] [i_8 - 1])))))) : (-5372384621811134871LL)));
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (max((((/* implicit */int) (_Bool)1)), (arr_2 [16ULL] [i_4]))) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
