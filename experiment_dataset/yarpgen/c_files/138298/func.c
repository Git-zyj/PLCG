/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138298
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) * (5493262781639670844LL)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_5 [i_0] [(short)9] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((int) 5493262781639670836LL)));
            var_21 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)129));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            arr_8 [i_0] [i_2] [i_0] = ((/* implicit */int) ((unsigned long long int) (signed char)(-127 - 1)));
            arr_9 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_16))) / (((/* implicit */int) (unsigned char)242))));
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_3] = (((~(var_1))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) < ((+(((/* implicit */int) var_14)))))))));
            arr_14 [(unsigned short)10] &= ((/* implicit */unsigned int) ((((long long int) arr_12 [i_0] [i_0] [i_3])) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1])))))));
            arr_15 [(unsigned short)2] [i_3] = ((((((/* implicit */_Bool) ((signed char) var_19))) ? (((((/* implicit */int) (signed char)120)) + (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_12 [6] [9ULL] [6]))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            arr_18 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((signed char) (-(var_9)))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 3) 
        {
            for (unsigned char i_6 = 4; i_6 < 9; i_6 += 2) 
            {
                {
                    arr_25 [i_6 - 1] [i_0] [i_5 - 1] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((281337537757184ULL), (((/* implicit */unsigned long long int) var_12))))))) + (min((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [(short)9])) ? (var_6) : (((/* implicit */long long int) 4262644939U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_21 [i_5 + 1])) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
                    var_23 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((arr_7 [i_0]) ? (((/* implicit */int) arr_21 [i_0])) : (var_17)))))) < (((((/* implicit */_Bool) max((((/* implicit */short) var_16)), (arr_0 [i_0])))) ? ((+(18446462736171794405ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) var_19)))))))));
                    var_24 = ((long long int) min((((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (short)32761)) : (-2147483637))), ((+(arr_22 [(_Bool)1] [i_0])))));
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        arr_29 [i_7] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7] [i_7]))) : (279223176896970752ULL))) + (((/* implicit */unsigned long long int) ((long long int) arr_28 [i_7] [(signed char)23]))))) + (((/* implicit */unsigned long long int) ((int) (!((_Bool)1)))))));
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned int) (_Bool)1)) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_7] [i_7])) && (((/* implicit */_Bool) (short)32765))))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483637)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_27 [i_7] [(signed char)10]))))), (max((((/* implicit */unsigned long long int) (signed char)126)), (281337537757184ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_11))))))))))));
        var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)132))));
    }
}
