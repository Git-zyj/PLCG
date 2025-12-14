/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122717
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
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (8388352) : (((/* implicit */int) var_4))))), (var_6)))), (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), ((((+(((arr_1 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))) - (var_11)))));
        arr_4 [i_0] [i_0] = (unsigned char)12;
        arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [(signed char)16]);
        var_14 &= ((/* implicit */unsigned int) 9281972558746237506ULL);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_9 [i_1] [i_0] |= ((/* implicit */unsigned int) arr_0 [i_0 - 1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_1]))))))) ? (((((/* implicit */unsigned long long int) (+(8388352)))) * (min((((/* implicit */unsigned long long int) arr_6 [i_2])), (9164771514963314093ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [8] [i_2] [(_Bool)1] [10] [i_1] [i_0])) ? (((/* implicit */unsigned int) arr_13 [i_3] [i_2] [i_1] [i_0])) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (21U))))))));
                        arr_14 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_0);
                        arr_15 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                        arr_16 [i_2] [i_2] [i_2] [i_2] [(signed char)8] [i_2] = ((/* implicit */_Bool) var_9);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_16 = ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56416)));
            /* LoopNest 2 */
            for (long long int i_5 = 1; i_5 < 17; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    {
                        arr_25 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(var_8)));
                        var_17 *= ((/* implicit */signed char) ((((7357970728301584068ULL) * (var_8))) == (((((/* implicit */_Bool) 10294293152286953000ULL)) ? (((/* implicit */unsigned long long int) var_6)) : (0ULL)))));
                        var_18 = ((/* implicit */short) ((((-2147483640) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_0] [i_4] [i_0 + 1] [i_5 + 1])) - (145)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_7 = 2; i_7 < 17; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            arr_37 [i_7] [i_7] = ((/* implicit */_Bool) ((var_11) << (((14493449494236748913ULL) - (14493449494236748907ULL)))));
                            var_19 *= ((((/* implicit */unsigned long long int) -2147483636)) | (var_8));
                        }
                        arr_38 [i_0] [i_7] = ((/* implicit */unsigned short) (unsigned char)3);
                        var_20 |= ((((/* implicit */unsigned long long int) (~(arr_0 [9ULL])))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 2147483639)) : (var_8))));
                    }
                } 
            } 
        }
    }
    for (int i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        arr_41 [i_10] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (arr_39 [i_10] [i_10])))) : (var_5))), (((/* implicit */unsigned long long int) min((arr_39 [i_10] [i_10]), (((/* implicit */long long int) 2654253197U)))))));
        arr_42 [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((short) arr_39 [i_10] [i_10]))))));
    }
}
