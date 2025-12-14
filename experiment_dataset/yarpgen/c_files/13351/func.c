/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13351
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((var_12) >= (((/* implicit */unsigned int) arr_2 [i_0 - 2] [i_0 - 1]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((arr_2 [i_0 + 1] [i_0 - 1]) >= (arr_2 [i_0 + 1] [i_0 - 2])));
        var_17 = -7;
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((int) ((((((/* implicit */int) var_13)) <= (var_15))) ? (((unsigned int) -7)) : (((/* implicit */unsigned int) var_10))))))));
    var_19 = var_11;
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            {
                arr_11 [i_1 - 2] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 2])) ? (((long long int) 2480660465182577581LL)) : (((/* implicit */long long int) var_10)))) : (arr_0 [13] [i_2])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (int i_4 = 2; i_4 < 8; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_13))));
                            var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned int) var_10)))) + (((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1])), (var_3))))));
                            arr_17 [i_4 + 3] [i_3] [i_2] [(unsigned char)7] = (+(((arr_16 [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 1]) + (((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 2] [i_4 + 2] [i_4 + 1])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_22 ^= ((/* implicit */long long int) (~(max(((~(var_15))), (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */int) var_16))))))));
                    var_23 = ((/* implicit */int) max((var_23), (max(((-(min((-1), (((/* implicit */int) var_5)))))), (((/* implicit */int) (!(((/* implicit */_Bool) -301778586)))))))));
                    var_24 = ((/* implicit */long long int) max((max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))))))), (arr_5 [i_1 + 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) ((((long long int) var_6)) <= (((/* implicit */long long int) max((max((arr_9 [i_1 - 1] [i_2]), (((/* implicit */int) var_5)))), (((((/* implicit */int) var_14)) & (var_11))))))));
                        arr_24 [i_1 + 2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) (-(4294967295U)));
                        arr_25 [i_5] [i_5] [i_2] [i_1 - 2] = ((((/* implicit */_Bool) var_15)) ? (arr_14 [i_1] [i_1 - 2] [i_6 - 1]) : (((((/* implicit */_Bool) var_16)) ? (((int) var_0)) : (((/* implicit */int) ((var_9) == (0LL)))))));
                        var_26 = ((/* implicit */long long int) var_11);
                    }
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) min((6), (((/* implicit */int) (unsigned char)120))))) ? (var_2) : (((((/* implicit */_Bool) var_8)) ? (var_10) : (arr_21 [i_1] [i_2] [i_1 - 2] [(unsigned short)8]))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 2; i_7 < 19; i_7 += 2) 
    {
        for (unsigned short i_8 = 3; i_8 < 20; i_8 += 2) 
        {
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)105)) ? (var_15) : (var_3)))) ? (arr_30 [i_8 - 3]) : (((/* implicit */unsigned int) ((var_15) + (var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (1903054639) : (22)))) ? (max((((/* implicit */unsigned int) var_10)), (var_12))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (var_10)))))) : (((/* implicit */unsigned int) max((max((var_0), (arr_28 [i_7]))), (max((1386687002), (-625666099))))))));
                var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) ((max((((/* implicit */int) (unsigned char)144)), (var_8))) >= (arr_27 [i_7 - 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) max((-15), (arr_28 [i_7])))) || (((/* implicit */_Bool) var_9)))))));
                var_30 = ((/* implicit */unsigned char) max((arr_28 [i_7 + 3]), (max((max((var_3), (var_10))), (min((((/* implicit */int) var_14)), (var_2)))))));
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((unsigned char) (+(((unsigned int) var_0))))))));
                var_32 -= ((/* implicit */int) ((((int) 1529887570001236222LL)) >= (((/* implicit */int) (((~(((/* implicit */int) var_5)))) == ((+(var_11))))))));
            }
        } 
    } 
}
