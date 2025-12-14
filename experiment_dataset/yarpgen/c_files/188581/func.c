/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188581
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
    var_17 ^= ((/* implicit */int) max((var_4), (((short) ((((var_5) + (2147483647))) >> (((var_14) - (3549284931822292571ULL))))))));
    var_18 = ((/* implicit */long long int) var_5);
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_9)) / (((1473642396) / (((/* implicit */int) (unsigned char)250))))))))));
    var_20 ^= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) min((-1636205827), (((/* implicit */int) (unsigned char)250))))) : (((var_2) << (((((/* implicit */int) var_16)) - (57092))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_21 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_0] [i_0])))) : (var_10));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_13 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [i_1] = min((arr_12 [i_3 - 1] [i_1] [i_1] [i_0]), (arr_8 [18U] [(unsigned short)18] [(short)18] [(_Bool)1]));
                        var_22 = ((short) (unsigned short)42849);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */int) var_1);
                            var_24 = ((_Bool) arr_8 [i_3 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                            var_25 &= ((579735998) > (-1448981291));
                            arr_16 [i_0] [i_1] [(short)11] [i_2] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))) > (((unsigned long long int) var_10))));
                            arr_17 [i_0] [(short)4] [i_1] [i_3 - 1] [i_2] = ((/* implicit */unsigned short) var_0);
                        }
                        for (short i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_26 += ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0]))) ? (min((-870704850), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) arr_10 [i_3] [i_2] [i_1]))))), (((/* implicit */int) arr_7 [i_2] [(unsigned short)4]))));
                            var_27 = ((/* implicit */unsigned short) (-((+(arr_5 [i_0])))));
                        }
                        for (short i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_1] [(_Bool)1] [(_Bool)1] = arr_21 [i_0] [i_1 - 1];
                            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_9 [i_0]))))) << (((/* implicit */int) ((_Bool) arr_3 [i_1] [i_2])))))) ? (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) var_6))))) : (((18446744073709551615ULL) & (11296046066713490519ULL)))));
                        }
                    }
                } 
            } 
        } 
        arr_24 [i_0] [18U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3807905741042086705ULL)) ? (((/* implicit */long long int) -870704871)) : (4580063809214075262LL)))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10))))));
        var_29 ^= max((arr_18 [i_0] [i_0] [18] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >> (((var_10) - (16256768115521938283ULL)))))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        var_30 = ((/* implicit */_Bool) max((var_30), (((((/* implicit */long long int) -870704863)) != (3513787127437409004LL)))));
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((arr_10 [(_Bool)1] [i_7] [i_7]) % (arr_6 [i_7] [5]))))));
    }
}
