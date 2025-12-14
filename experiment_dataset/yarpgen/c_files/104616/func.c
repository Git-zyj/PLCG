/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104616
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
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned char)95))))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))) : (var_0))))) ? (((/* implicit */int) ((signed char) 1684699511U))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) (unsigned short)49344)))) : (((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)195)) : (var_7))) >> (((((/* implicit */int) var_10)) - (35191)))))) ? (min((max((var_9), (((/* implicit */unsigned long long int) -1934640729)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (5413827813534372270ULL) : (var_9)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)43044)))) : ((-(((/* implicit */int) (signed char)110)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [8] [(unsigned short)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(168610842)))) ? (arr_0 [15ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        var_13 = ((/* implicit */int) var_6);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_5 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(signed char)12] [i_1] [i_0])) && (((/* implicit */_Bool) arr_3 [12U] [i_0] [i_0]))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_2] [i_1] [(unsigned short)15] [i_2])) ? (arr_10 [i_4] [(unsigned short)0] [(_Bool)1] [(_Bool)0]) : (629214921U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 3221225472U))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(4292870144U)))) ? (((long long int) arr_10 [7U] [(short)9] [(unsigned char)5] [i_0])) : (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0])))))));
                            arr_13 [i_2] [i_2] [i_2] [(unsigned short)9] [i_1] [i_2] = ((/* implicit */short) (((~(12440956002827864060ULL))) >> (((var_5) - (6922738300863547196LL)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
        {
            arr_16 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [5U] [8U])) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_10 [15LL] [i_0] [i_0] [i_0])) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (3968U)))))));
            arr_17 [9ULL] [13U] [9ULL] = ((/* implicit */int) (~(((((/* implicit */_Bool) (signed char)12)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15107)))))));
            var_17 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned char)163)) * (((/* implicit */int) var_6)))));
        }
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
        {
            arr_21 [i_0] [(unsigned char)5] = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_10))))));
            arr_22 [i_0] [i_0] = ((/* implicit */int) (~(arr_14 [i_6])));
            var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) var_8)) : (var_7))));
        }
    }
    for (unsigned long long int i_7 = 4; i_7 < 18; i_7 += 1) 
    {
        arr_26 [(unsigned short)11] [(unsigned short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)0))))) : ((+(((long long int) var_5))))));
        var_19 &= ((_Bool) ((6795776708654523487LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-99)))));
        arr_27 [i_7] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) * (4027697422038115528LL)))) ? (((((/* implicit */int) arr_24 [12])) / (((/* implicit */int) arr_24 [5U])))) : (((/* implicit */int) (_Bool)1)))));
        var_20 = -4607533863871430364LL;
    }
}
