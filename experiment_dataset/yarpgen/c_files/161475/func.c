/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161475
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_2))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            arr_10 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (-1) : (((/* implicit */int) (signed char)10))));
            var_16 = ((/* implicit */unsigned long long int) min(((signed char)-13), ((signed char)-103)));
        }
        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_17 = ((((/* implicit */int) (unsigned char)169)) << (((((((/* implicit */int) (signed char)-11)) + (41))) - (24))));
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) min((4276797257U), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26490)))))) : (18446744073709551598ULL))) ^ ((((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) % (18446744073709551598ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_2] [i_4])), (4294967295U)))))))))));
        }
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                {
                    var_19 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) 74377042)), (0U)))) ? (arr_15 [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)26)) - (var_0)))))), (max((((/* implicit */unsigned long long int) arr_12 [i_2] [i_5])), (min((arr_11 [15U]), (((/* implicit */unsigned long long int) (unsigned char)178))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 2; i_7 < 16; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_20 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) ((unsigned short) arr_7 [i_2]))))));
                            arr_25 [i_2] [i_7] [i_8] [i_7] [i_8] [i_8] = ((/* implicit */long long int) (~((~(-1872311275)))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((int) 1872311281)) + (((/* implicit */int) min((arr_3 [i_8] [i_7 + 1]), (((/* implicit */unsigned char) (signed char)127))))))))));
                            var_22 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [(signed char)14] [i_7 + 1]))) : (var_7))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((var_0), (arr_19 [i_2]))))))));
                            var_23 = ((/* implicit */unsigned char) min((2147483637), ((+(-427902851)))));
                        }
                        var_24 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2] [i_7 + 1] [i_6] [i_7])) ? (arr_21 [i_6] [i_5] [0U] [i_6]) : (arr_21 [3LL] [3LL] [i_6] [i_7 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) : (2197949513728ULL))))))) : (((((/* implicit */int) arr_23 [12LL] [16ULL] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_6] [i_7 - 1])) & (((int) -1280607337)))));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) : (((((/* implicit */_Bool) var_9)) ? (4294967295U) : (((/* implicit */unsigned int) arr_12 [i_2] [8ULL]))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_7 + 1]))))))) : ((~(var_4))))))));
                    }
                    arr_26 [i_6] [i_2] [i_2] = ((/* implicit */unsigned char) ((max((((14281079626976119998ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)8] [i_5]))))), (((/* implicit */unsigned long long int) ((arr_0 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2] [8] [i_6] [i_6] [i_2] [i_5] [i_2])))))))) * (((/* implicit */unsigned long long int) -1))));
                }
            } 
        } 
        var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) < (((((((/* implicit */int) (unsigned char)78)) <= (arr_21 [i_2] [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_2] [i_2]), ((unsigned char)144))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 161246574)) : (var_1)))))));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned short) (short)-6213)), ((unsigned short)22801)))))));
        var_28 ^= ((/* implicit */unsigned char) 13480542093058266378ULL);
    }
    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [(unsigned char)9]))))) ? (arr_4 [18] [i_9]) : (arr_4 [9] [i_9])));
        var_30 *= ((/* implicit */short) arr_29 [i_9]);
    }
    var_31 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -643023149)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) : (4294967295U))))))));
}
