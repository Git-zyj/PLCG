/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115248
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (676616117) : (((/* implicit */int) var_1))))))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_13 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)14855)))) ? (((/* implicit */int) max((var_12), (((/* implicit */unsigned char) arr_5 [2ULL] [i_0] [i_1 - 1]))))) : ((+(((/* implicit */int) (unsigned char)28))))))) ^ ((~(min((arr_2 [i_1]), (((/* implicit */long long int) var_5))))))));
            var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)134))));
            var_15 = ((/* implicit */int) (+(((unsigned long long int) arr_2 [i_1 + 3]))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [2ULL] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 16248491))))), (((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2 - 3]))))))), (max((max((((/* implicit */unsigned long long int) (unsigned char)134)), (5740570936646718382ULL))), (((/* implicit */unsigned long long int) max((-6773501700188732955LL), (((/* implicit */long long int) (unsigned char)59)))))))));
                        arr_12 [i_1] = (+(((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_1))) >= (((/* implicit */int) max((arr_1 [i_2] [i_1]), ((signed char)63))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                var_16 = ((/* implicit */short) var_12);
                arr_15 [i_0] [i_1] = ((/* implicit */int) max(((+(arr_13 [i_1 - 1] [i_4 - 1] [i_4 - 1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_0] [3ULL]))))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_8 [i_0] [i_1 + 2] [i_1])))) ? ((+(arr_14 [i_1 + 2] [(signed char)1] [i_5]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) (signed char)-82))))), (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_5])) ? (arr_8 [i_0] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1]))))))));
                arr_19 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)6764)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)13)), ((unsigned short)62853)))) : (((/* implicit */int) var_4))))), ((+(arr_10 [i_5] [i_1] [i_5] [i_0])))));
                var_18 = ((/* implicit */signed char) max((((/* implicit */int) max((var_12), (arr_4 [i_1])))), ((-(((/* implicit */int) (signed char)69))))));
            }
        }
    }
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
    {
        var_19 *= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_21 [i_6])), (var_2))) << (((((/* implicit */int) arr_21 [i_6])) - (34277)))));
        var_20 = ((/* implicit */short) max((((/* implicit */int) ((signed char) arr_21 [i_6]))), ((+(((/* implicit */int) arr_21 [i_6]))))));
    }
    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) arr_20 [i_7])) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), (var_0)))))) : (2147483647)));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_21 [i_7]))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3940893934U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41941))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) ((((((var_6) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned short)25140)))) + (2147483647))) << (((((/* implicit */int) var_8)) - (57662)))));
        arr_28 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))) && (var_7)));
        /* LoopNest 2 */
        for (unsigned int i_9 = 1; i_9 < 18; i_9 += 3) 
        {
            for (unsigned char i_10 = 1; i_10 < 19; i_10 += 2) 
            {
                {
                    arr_34 [i_8] [2LL] [(unsigned short)4] = ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_12)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                arr_39 [i_8] [i_9] [i_10 + 1] [i_11] [i_8] [i_9] = ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (unsigned char)180)));
                                arr_40 [(_Bool)1] [i_8] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_9 + 2])) / (((/* implicit */int) var_3))));
                                var_25 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)188))));
                                arr_41 [15U] [i_8] [i_8] [(unsigned char)0] [i_8] [i_12] = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 7746033349334225601LL)) ? (var_10) : (((/* implicit */unsigned long long int) arr_38 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((int) arr_32 [i_8] [(signed char)7] [i_8] [i_8])))));
    }
    /* LoopNest 2 */
    for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
    {
        for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            {
                var_28 = ((/* implicit */unsigned long long int) arr_43 [i_13]);
                var_29 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 144112989052600320LL)) ? (((/* implicit */int) (unsigned short)14427)) : (((/* implicit */int) (unsigned char)206))))) ^ (((((/* implicit */_Bool) (signed char)110)) ? (max((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                var_30 += ((/* implicit */signed char) ((((min((-9223372036854775793LL), (((/* implicit */long long int) arr_42 [i_14] [14ULL])))) == (((/* implicit */long long int) (~(var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [(unsigned short)0] [i_13])))))))) : (((/* implicit */int) max((max((((/* implicit */unsigned char) arr_44 [i_14] [i_14])), ((unsigned char)4))), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_13] [i_13]))) <= (3343989431U)))))))));
                arr_46 [i_14] [i_14] = ((/* implicit */int) ((_Bool) min((((/* implicit */int) arr_43 [i_14])), ((~(((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_3);
    var_32 -= ((/* implicit */unsigned short) (!((!(var_7)))));
}
