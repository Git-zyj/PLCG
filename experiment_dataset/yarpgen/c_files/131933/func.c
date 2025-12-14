/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131933
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((((/* implicit */_Bool) 427301872U)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_1))))))))))));
        arr_3 [i_0] |= ((/* implicit */_Bool) (unsigned char)173);
        arr_4 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((long long int) (unsigned char)21)) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_3))))))) : (arr_0 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */short) (((+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_5] [i_5 + 2]) < (arr_1 [(short)17] [i_5 - 2]))))) | (max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_0 [i_1]))), (((/* implicit */long long int) var_1))))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (4110810346U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) min((((((/* implicit */int) arr_7 [(signed char)8])) | (((/* implicit */int) var_0)))), (((/* implicit */int) ((short) var_1)))))) : (max((max((var_2), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (_Bool)0)))))))));
                            var_18 = ((/* implicit */unsigned char) ((((_Bool) arr_0 [i_2])) ? (((unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (((/* implicit */int) var_0)) : (var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        }
                    } 
                } 
            } 
            arr_18 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (_Bool)1))))))) ? ((((((_Bool)1) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (signed char)36)))) / (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_6 [(_Bool)1])))))) : ((+(arr_13 [i_2] [i_2] [i_2] [i_2])))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 3; i_6 < 22; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (unsigned short i_8 = 1; i_8 < 22; i_8 += 4) 
                {
                    {
                        arr_30 [(_Bool)1] [i_6] [i_7] [i_8 - 1] [i_8] [(signed char)17] = ((/* implicit */long long int) var_4);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)7936)) > (((/* implicit */int) (unsigned char)147))));
                        arr_31 [i_1] [i_6] [i_8 - 1] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32762)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_28 [i_8] [(short)7] [i_6]))))));
                        arr_32 [i_1] [i_6 + 1] [21U] [21U] = ((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) var_1))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (-6861719225830770391LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)(-32767 - 1))))))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)22118)) >= (((/* implicit */int) ((short) -10))))))));
            var_23 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (arr_13 [20] [i_6] [i_6] [20]) : (((/* implicit */int) var_1)))));
            var_24 = var_1;
        }
        for (unsigned char i_9 = 2; i_9 < 22; i_9 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_14))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_4))));
        }
        arr_35 [i_1] [i_1] |= (+(((/* implicit */int) ((unsigned char) ((unsigned int) 18446744073709551615ULL)))));
    }
    var_27 = ((/* implicit */signed char) ((int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (short)12428)))), (((var_10) + (((/* implicit */int) (_Bool)1)))))));
}
