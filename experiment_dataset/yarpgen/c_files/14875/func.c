/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14875
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
    var_10 &= ((/* implicit */short) max((13880001255211437625ULL), (((/* implicit */unsigned long long int) -754471763))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((arr_5 [i_0] [i_1 + 1] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-16)) != (max((var_3), (((/* implicit */int) (unsigned short)8341))))))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= ((arr_5 [i_2] [i_2] [i_2]) & (((/* implicit */unsigned long long int) var_3)));
                }
            } 
        } 
        var_12 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0]))))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (min((((/* implicit */long long int) (signed char)-16)), (arr_7 [i_0] [i_0] [i_0]))) : (((arr_7 [i_0] [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((_Bool) -7127628773411946686LL));
                    var_15 ^= ((/* implicit */short) (signed char)108);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_3] [i_4] [i_4] [(unsigned short)10] &= ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_3]))));
                            var_16 += ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-126));
                            arr_20 [i_0] [i_4] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31612))) | (var_2));
                            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_10 [i_5] [i_3] [i_5])));
                        }
                        for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((unsigned short) var_7)), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))))), ((+(((int) var_1))))));
                            var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)10275)), (556972867U)));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_6))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_22 [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] [0]))))))), (((unsigned long long int) arr_0 [i_4] [i_7])))))));
                        }
                        arr_25 [5] [i_3] [i_4] [i_5] [i_5] = arr_11 [i_0];
                        var_20 = ((/* implicit */unsigned int) -982062736);
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 4) 
                    {
                        arr_29 [i_0] [i_3] [i_4] [i_4] |= ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) ((arr_5 [i_3] [i_4] [i_8]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) < (((/* implicit */int) arr_0 [i_0] [i_0]))))), (var_1)));
                        var_21 -= ((/* implicit */int) arr_4 [i_3] [i_3] [i_3]);
                        var_22 |= ((/* implicit */short) min((var_0), (((/* implicit */unsigned short) arr_4 [i_0] [(unsigned short)8] [i_4]))));
                    }
                    var_23 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)-31607)), (18446744073709551611ULL))) >= (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_3] [i_4] [i_3])))))));
                }
            } 
        } 
    }
    var_24 &= ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)7)), (var_9))))));
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 11; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            {
                arr_34 [i_9] [i_9] = ((/* implicit */unsigned short) min((arr_30 [(short)13]), (((/* implicit */signed char) (_Bool)1))));
                var_25 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_31 [i_9 - 1]), (arr_33 [i_9 + 1]))))));
            }
        } 
    } 
}
