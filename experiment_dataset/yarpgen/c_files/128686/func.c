/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128686
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
    var_18 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) var_1))), ((+(((((/* implicit */_Bool) (unsigned short)17921)) ? (13636932582478870765ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41475)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) max((var_14), (((/* implicit */short) arr_0 [11ULL]))))) : (((/* implicit */int) var_4))))));
            arr_5 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_4 [i_1 - 1] [i_1 - 1] [i_1]))))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((long long int) max(((unsigned short)65521), (((/* implicit */unsigned short) arr_3 [7ULL]))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0 + 1]))))))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) 2147483646);
                        var_23 &= ((/* implicit */short) arr_2 [i_0]);
                        arr_11 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) var_6);
                        var_24 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32749))))), (max((1353465731992559011ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_0))))))));
                    }
                } 
            } 
        }
        for (int i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10831190583420295384ULL)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (var_16))))))), (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_4 + 1] [i_4 + 1] [i_4])), (max((7615553490289256231ULL), (((/* implicit */unsigned long long int) (short)-32762))))))));
            var_26 = ((/* implicit */_Bool) var_6);
        }
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                var_27 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_0 - 1] [10ULL] [i_0 + 2])) && (((/* implicit */_Bool) 144560244)))) ? (((var_12) ? (max((17093278341716992605ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_6]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)17921)))))))));
                var_28 += (~(((/* implicit */int) ((_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1]))));
                var_29 *= ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0 - 2] [i_0 - 2] [i_0 + 2])), (var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))))), (((((((/* implicit */_Bool) 2147483642)) || (((/* implicit */_Bool) var_11)))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned short)65522))))))));
            }
            arr_18 [i_0 - 2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((_Bool) (short)11134)) || (((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_5])))))), (((((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))))) << (((((/* implicit */int) (short)32767)) - (32721)))))));
        }
        var_30 *= ((/* implicit */signed char) (short)-32767);
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) min((((((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 2])) & (((/* implicit */int) arr_7 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0 - 2])))))))));
    }
    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)62)) ? (((arr_20 [i_7]) | (((/* implicit */unsigned long long int) arr_19 [i_7] [i_7])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47614))) : (((((/* implicit */_Bool) 2147483639)) ? (((/* implicit */long long int) -2147483643)) : (-2115024868419690894LL)))));
        arr_22 [i_7] = ((/* implicit */signed char) (!((!(((_Bool) 2985163632U))))));
        var_33 = ((/* implicit */signed char) var_10);
    }
}
