/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116095
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) & (var_1))) : (((/* implicit */unsigned long long int) ((var_8) & (9129337093102186416LL)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (var_0))) < (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_9)))))))));
                        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (short)15517)) : (((/* implicit */int) (short)-15535))))), (min((var_11), (((/* implicit */long long int) (short)14947)))))))));
                        arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) var_5));
                    }
                } 
            } 
        } 
        var_14 -= ((/* implicit */unsigned short) max(((+(((/* implicit */int) min((var_5), (((/* implicit */short) var_4))))))), (min((((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_0]))), ((-(((/* implicit */int) (signed char)59))))))));
        arr_14 [i_0] = ((/* implicit */signed char) max((((((/* implicit */long long int) var_3)) / (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))), (((/* implicit */long long int) (~(((/* implicit */int) min((arr_0 [(signed char)15]), (var_4)))))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_15 += ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_4] [i_4])) - (((/* implicit */int) var_10))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((long long int) arr_17 [i_4])))));
    }
    for (signed char i_5 = 3; i_5 < 23; i_5 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            arr_26 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_24 [i_5])))) % (3944608198U)));
            arr_27 [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [(short)24] [3U])) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) ^ (var_8))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_30 [i_5])) ? (((/* implicit */int) arr_30 [i_5])) : (var_3)))));
            var_18 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_5]))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) ^ (var_11))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)123)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((arr_29 [i_5 - 2]) != (((/* implicit */int) ((unsigned short) var_8)))))) : (((/* implicit */int) ((((/* implicit */long long int) min((var_0), (((/* implicit */int) arr_22 [i_5] [i_5] [i_5]))))) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_5 + 1] [i_7] [i_5 + 1]))) : (var_8))))))));
            var_20 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) ((unsigned char) var_11))) & ((-(((/* implicit */int) var_10)))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 2; i_8 < 24; i_8 += 3) 
        {
            var_21 = ((/* implicit */long long int) (((+(arr_29 [i_5]))) + (((/* implicit */int) ((((/* implicit */_Bool) (short)-15496)) || (((/* implicit */_Bool) 918157648)))))));
            arr_33 [i_5] [(unsigned char)7] [i_5] = ((/* implicit */signed char) ((-2147483639) > (((/* implicit */int) (unsigned char)12))));
        }
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
        var_23 = ((((((/* implicit */int) max((var_2), (var_9)))) + (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_22 [(_Bool)1] [i_5] [i_5]))))))) + (min((((/* implicit */int) (unsigned char)135)), (arr_32 [i_5] [i_5]))));
    }
    var_24 = ((/* implicit */unsigned char) var_6);
}
