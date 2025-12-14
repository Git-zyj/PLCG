/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13668
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
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_4)), (((4922106977400901976LL) / (((/* implicit */long long int) -1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */long long int) ((arr_2 [i_1] [i_0]) & (arr_2 [i_0] [i_1])))) : (((1LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)1023)) : (((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_2 + 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 970483561U)) ? (1325039747) : (((/* implicit */int) arr_3 [(unsigned char)14]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 1]))) : (((((/* implicit */_Bool) 4280746142823827362LL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                    arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((-2115062305) >= (((/* implicit */int) (unsigned short)61571)))) || (((((/* implicit */int) (unsigned char)177)) >= (-359902968)))));
                    arr_11 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1])) - (((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))) ? (min((((/* implicit */long long int) (unsigned char)40)), (((6428981809012643883LL) >> (((-3986619074381152696LL) + (3986619074381152739LL))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53785)) ? (753692261U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_1])) : (min((var_6), (((/* implicit */int) (unsigned char)0)))))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned char)84))))) ? (((((/* implicit */int) arr_7 [i_2] [i_2 - 1])) | (((/* implicit */int) arr_7 [i_2] [i_2 + 1])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_2 - 1])) : (((/* implicit */int) var_8))))));
                    var_17 = ((/* implicit */short) (unsigned char)161);
                }
                arr_12 [i_0] [1LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2668998160417426101LL))));
                arr_13 [i_0] [9LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) 8346414749129224388LL)) ? (-3361454751465501302LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15230))) < (0LL))))))) : (((/* implicit */long long int) -699566164))));
            }
        } 
    } 
    var_18 = var_12;
}
