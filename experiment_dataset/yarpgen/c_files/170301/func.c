/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170301
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
    var_14 += var_12;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1906920385), (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_1 [i_0]))))) | (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_0 [i_0] [i_1]))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) var_2)) ? (7720028077353246298LL) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (short)-16384))))))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_0 [i_1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) <= (((/* implicit */int) arr_2 [i_0] [i_0 - 2] [i_1])))))))))));
        }
        for (short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_19 = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_0 [i_0] [i_2]) : (((/* implicit */unsigned long long int) 7720028077353246290LL)))))), (((/* implicit */unsigned long long int) var_13))));
            var_20 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_2] [i_0 + 2])) ? (arr_0 [i_0 - 1] [i_0 + 3]) : (arr_0 [i_0] [i_0 - 1]))) * (min((arr_0 [i_0 + 2] [i_0 + 2]), (arr_0 [i_2] [i_0 - 1])))));
        }
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) (((+(((/* implicit */int) arr_10 [i_3] [i_3])))) != ((+(((/* implicit */int) var_9))))))) - (min((arr_6 [i_0] [i_0 + 2]), (arr_6 [i_0] [i_0 + 2])))));
            arr_12 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (signed char)-126);
            var_22 *= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 1]))) < (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_5))))) ? ((-(-7720028077353246296LL))) : (min((((-7720028077353246276LL) + (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) arr_9 [i_0 + 2]))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 11; i_5 += 3) 
            {
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_4] [i_5])) ? (((((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_3 [i_0] [i_4]))))) - (((((/* implicit */_Bool) var_12)) ? (arr_6 [i_4] [i_5 + 4]) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0 - 1])))))) : (((((/* implicit */_Bool) arr_0 [i_4] [i_0 - 1])) ? (arr_4 [i_0 - 1] [i_0 + 3] [i_0]) : (((/* implicit */int) (signed char)126)))))))));
                    var_24 = (~(min((min((var_5), (((/* implicit */long long int) arr_13 [i_0 - 1] [i_4] [i_5 - 1])))), (((/* implicit */long long int) min((arr_8 [i_4]), (((/* implicit */unsigned short) arr_2 [i_5 + 3] [i_5 + 1] [i_5]))))))));
                    arr_19 [i_4] [i_4] [i_0 + 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_4])), (-1293192936)))) ? (((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) arr_5 [i_4])))) : (((/* implicit */int) var_4))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) + (max((((/* implicit */unsigned long long int) var_1)), (13ULL)))))))))));
                    var_26 = ((/* implicit */int) (unsigned char)255);
                }
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_22 [i_7]) : (((long long int) arr_0 [i_6] [i_7]))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_5 [i_7])) : (((/* implicit */int) var_11))));
            var_29 = ((/* implicit */unsigned int) arr_1 [i_7]);
        }
        var_30 = ((/* implicit */short) min(((~(var_7))), (((/* implicit */long long int) (short)16600))));
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6])) ? (arr_22 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)16588)))))) ? (arr_22 [i_6]) : (((((/* implicit */_Bool) arr_22 [i_6])) ? (arr_22 [i_6]) : (arr_22 [i_6]))))))));
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((min((arr_6 [i_6] [i_6]), (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_10 [i_6] [i_6]))))))) <= (((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_2 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_8 [i_6])))))))));
    }
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) max(((~(((/* implicit */int) ((signed char) arr_17 [i_8]))))), (min((((((/* implicit */_Bool) arr_20 [i_8] [i_8])) ? (((/* implicit */int) arr_8 [i_8])) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_15 [i_8] [i_8] [i_8])))))))));
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_20 [i_8] [i_8]))) * (((((/* implicit */int) arr_7 [i_8] [i_8] [i_8])) / (((/* implicit */int) var_2))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-126)), (arr_0 [i_8] [i_8])))) ? (((((/* implicit */int) arr_10 [i_8] [i_8])) - (((/* implicit */int) arr_2 [i_8] [i_8] [i_8])))) : (((((/* implicit */int) arr_3 [i_8] [i_8])) - (((/* implicit */int) (signed char)114)))))))));
        arr_27 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))))) << (((((((/* implicit */_Bool) var_5)) ? (min((4294967295U), (arr_9 [i_8]))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)16))))))) - (412789453U)))));
    }
}
