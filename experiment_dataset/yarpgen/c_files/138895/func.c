/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138895
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) arr_3 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) -1172626249);
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (141863388262170624ULL)))));
                    }
                } 
            } 
        } 
        var_14 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) (unsigned char)255)))));
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)6580)) < (((/* implicit */int) (signed char)0))))) * ((+(((/* implicit */int) arr_15 [i_4] [i_4]))))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            arr_21 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7077913579161133703LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) arr_19 [13]))) : ((-(((/* implicit */int) (unsigned char)220))))))) ? ((~(((/* implicit */int) (signed char)64)))) : ((+(((/* implicit */int) (_Bool)1))))));
            arr_22 [i_4] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))) : (2946331002U))))));
        }
    }
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((arr_23 [i_6] [i_6]) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))) : (max((18304880685447380996ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned long long int) ((long long int) arr_24 [i_6]))))));
        arr_25 [(unsigned short)5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6])) ? (arr_24 [i_6]) : (arr_24 [i_6]))))));
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            arr_29 [i_6] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((65528) == (((/* implicit */int) arr_23 [i_6] [i_6]))));
            var_18 = ((/* implicit */long long int) arr_28 [i_6] [i_6]);
            arr_30 [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [15] [15] [15])) ? (arr_24 [i_7]) : (((/* implicit */int) (unsigned char)0))))))))));
            arr_31 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) != (((((((/* implicit */_Bool) 9007199252643840ULL)) ? (arr_24 [(_Bool)1]) : (arr_26 [(_Bool)1] [(_Bool)1] [(_Bool)1]))) | ((+((-2147483647 - 1))))))));
        }
        /* vectorizable */
        for (short i_8 = 2; i_8 < 21; i_8 += 2) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned char)145))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_28 [3] [3]))));
            var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6])) ? (1030761035160669932ULL) : (((/* implicit */unsigned long long int) arr_24 [i_6]))))));
        }
        var_22 -= ((/* implicit */int) ((((((/* implicit */long long int) (+(((/* implicit */int) var_2))))) % (((((/* implicit */_Bool) (unsigned short)32768)) ? (-6931842750425387779LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) & (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_6])))));
    }
    var_23 = ((/* implicit */unsigned short) -844535396103723702LL);
    var_24 = ((/* implicit */unsigned char) (_Bool)1);
}
