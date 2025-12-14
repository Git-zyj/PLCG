/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118551
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((var_11), ((unsigned char)28))))))) ? (min((((((/* implicit */_Bool) (unsigned short)36796)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (unsigned short)18368)))) : (((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */int) (unsigned short)32893)) * (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) (short)-2743)))))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3166015095113417809LL)), (min((((/* implicit */unsigned long long int) (signed char)119)), (((4804254527673922023ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((-9223372036854775807LL - 1LL)) >= (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_5 [12U])) : (-3743324156327965360LL))))))));
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0)))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)0)) : (16)))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0] [i_2])) * (arr_5 [i_2]))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            arr_11 [i_3] = ((/* implicit */int) ((arr_7 [i_3]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_21 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_3])))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_10 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [19])))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [0LL])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_6 [i_0] [i_0]))))) : (var_12)));
        }
        arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_10 [18]) : (((/* implicit */unsigned long long int) arr_7 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 4) 
        {
            for (signed char i_5 = 2; i_5 < 19; i_5 += 1) 
            {
                {
                    arr_17 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_4] [i_5])) % (((/* implicit */int) var_13))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_2 [i_4 + 2]))));
                    var_24 |= ((/* implicit */unsigned long long int) ((arr_14 [i_4 + 2] [i_5 - 2] [i_5 - 1]) % (-1605599281)));
                }
            } 
        } 
        var_25 -= ((/* implicit */unsigned short) (unsigned char)120);
        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0])) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)15671)))))));
    }
    for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 2) 
    {
        var_27 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1259664477032174672LL)) ? (arr_7 [i_6]) : (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) arr_15 [i_6 - 1] [i_6 + 4] [i_6 - 3])) : (((/* implicit */int) (short)(-32767 - 1)))))) <= (4290159615411146228LL)));
        arr_20 [i_6 + 1] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 862675735)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) arr_14 [11LL] [i_6] [i_6])) ? (2016161660292854137LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47352)))))))));
        /* LoopNest 2 */
        for (long long int i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)705)) ? (((/* implicit */int) (unsigned char)213)) : (2147483621)));
                    arr_27 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_7 + 1] [i_6 + 1]))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) -1158928853842487673LL)) ? (arr_16 [(unsigned char)12] [i_7] [i_8]) : (((/* implicit */int) (signed char)46)))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_6])), (var_11))))))) : (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */long long int) 4294967265U)) : ((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
        var_29 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967274U)) || ((_Bool)1))))) : (((unsigned long long int) ((unsigned char) var_10)))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_6 + 2]), (arr_3 [i_6 + 1])))) ? ((((((-(((/* implicit */int) (short)18483)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)63)) - (63))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_6])) || (((/* implicit */_Bool) arr_18 [i_6] [11ULL]))))), (min((arr_24 [(unsigned char)8] [i_6] [i_6] [i_6]), (((/* implicit */int) var_4))))))));
    }
}
