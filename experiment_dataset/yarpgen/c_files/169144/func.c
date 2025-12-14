/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169144
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) (+((~(min((64512LL), (((/* implicit */long long int) var_11))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_11 [(unsigned char)12] [19U] [i_1 + 3] [i_0] [i_2] = ((/* implicit */short) ((unsigned int) (((~(var_6))) & (((var_3) | (var_3))))));
                            var_16 = ((/* implicit */unsigned char) ((int) ((unsigned short) (+(((/* implicit */int) arr_3 [i_2]))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((min((var_9), (var_15))), (((/* implicit */unsigned char) var_8))));
                /* LoopNest 3 */
                for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) var_13);
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_6)) % (-64513LL))))));
                                var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (arr_9 [i_5] [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -64536LL)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) var_7))))));
                                var_21 = ((/* implicit */unsigned int) max(((~(((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_17 [(_Bool)1])) - (182))))))), (((((/* implicit */_Bool) (short)-32758)) ? (var_4) : (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [9U]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 2; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned int i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        {
                            arr_24 [i_7] [i_7] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_22 [i_8 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_17 [i_1 + 1])))));
                            var_22 = ((/* implicit */short) var_4);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (arr_20 [i_7] [i_7])))) ? (var_14) : (arr_1 [(_Bool)0])))) ? (-64509LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)12405)), (3107829437U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -64499LL)) && (((/* implicit */_Bool) 197527850U))));
    /* LoopNest 2 */
    for (signed char i_9 = 1; i_9 < 11; i_9 += 4) 
    {
        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 10; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        for (short i_13 = 1; i_13 < 8; i_13 += 1) 
                        {
                            {
                                var_25 = arr_36 [i_9] [i_11] [i_9] [i_10];
                                var_26 -= ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) var_11))))))));
                                var_27 = min((16777215), (((/* implicit */int) ((unsigned char) 64519LL))));
                                arr_38 [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)28793))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_9 + 1])) / (var_6)))) * (var_14))))));
                arr_39 [i_9 - 1] [i_10] = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_10 + 2]))))), (max((((/* implicit */long long int) var_6)), (64503LL)))));
                arr_40 [i_10] [6U] [(short)4] = ((/* implicit */unsigned char) var_8);
                var_29 ^= ((/* implicit */long long int) (~(((int) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_10] [(unsigned char)9] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_18 [i_10 + 1])))))));
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (-1707817991)))), (min((var_14), (((/* implicit */unsigned int) var_13)))))), (((((/* implicit */_Bool) min((var_11), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)23), (var_9))))) : (((unsigned int) var_10))))));
}
