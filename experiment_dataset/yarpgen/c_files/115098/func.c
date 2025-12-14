/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115098
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_8))));
    var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32766)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50279)))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_10))))) : (((((/* implicit */int) (_Bool)1)) * (var_7))))), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) | (((1073741824) * (((/* implicit */int) var_10))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_2 [8ULL] = ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [6U]))) < (arr_0 [i_0] [i_0 - 2]))) ? ((((-(var_5))) | ((-(arr_0 [i_0 + 1] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((var_10) || (((/* implicit */_Bool) -31193327)))), (((((/* implicit */int) (unsigned char)240)) != (-31193326))))))));
        var_13 = ((/* implicit */long long int) min((((/* implicit */int) ((((-2952652120100261119LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))))) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (((((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_1))))) * (min((31193332), (((/* implicit */int) arr_1 [i_0]))))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) >= (-5044628480835742627LL))) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0])))))))) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) <= (-497561504))))));
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) ((2069912827) >= (((/* implicit */int) (unsigned short)4094))));
        }
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 2; i_4 < 16; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (2681920200U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) < (-1045755426214187812LL))))));
                        var_16 = ((/* implicit */unsigned long long int) var_5);
                        arr_16 [i_5] [i_1] [i_4] [i_5] [(unsigned char)14] [i_1] = ((/* implicit */signed char) arr_5 [i_5] [i_3]);
                        var_17 ^= (+(arr_9 [i_4 - 2] [i_5]));
                        arr_17 [i_5] [i_4] [i_5] [i_3] [i_1] = ((/* implicit */unsigned int) ((arr_13 [i_4 + 1] [i_3] [(short)1]) | ((-(((/* implicit */int) var_9))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_6 = 3; i_6 < 15; i_6 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) (((-(arr_15 [i_3] [i_3]))) == (-31193344)));
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_5))))));
            }
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                var_20 = ((/* implicit */int) (((+(21ULL))) >> (((/* implicit */int) ((arr_13 [i_7] [14U] [i_1]) != (((/* implicit */int) arr_18 [i_1] [i_3])))))));
                arr_24 [i_7] [i_7] = ((/* implicit */unsigned int) arr_18 [i_1] [4]);
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (short)6228)) : (((/* implicit */int) (signed char)-115))))) ? (((/* implicit */unsigned long long int) (~(arr_9 [i_1] [i_3])))) : ((+(arr_20 [5U] [4LL] [i_7] [i_1]))))))));
            }
            for (unsigned short i_8 = 1; i_8 < 14; i_8 += 3) 
            {
                var_22 -= ((/* implicit */signed char) (-(((((var_5) + (9223372036854775807LL))) >> (((2105762356493114570LL) - (2105762356493114561LL)))))));
                arr_27 [i_3] [i_8] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_1))))));
            }
            arr_28 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1183614910)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_3] [i_3])))));
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (short)15360))));
        }
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(arr_20 [8LL] [i_1] [3LL] [3LL]))))));
    }
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        arr_32 [12LL] |= ((/* implicit */unsigned char) 2105762356493114563LL);
        arr_33 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((405105926035075469LL) == (((/* implicit */long long int) -497561492))))) : (((/* implicit */int) arr_5 [i_9] [i_9])))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14336)) ? (((/* implicit */long long int) 1073741832)) : (var_5)))) ? (((((/* implicit */_Bool) -1073741822)) ? (var_7) : (((/* implicit */int) (unsigned short)4092)))) : (((/* implicit */int) max((arr_10 [5U] [i_9] [i_9]), (((/* implicit */unsigned short) (short)32756)))))))));
    }
}
