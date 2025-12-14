/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134659
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
    var_11 = ((/* implicit */unsigned short) (!((!(((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_2 [(unsigned char)1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_5)) & (arr_1 [i_0]))) <= (max((10860039032008773557ULL), (((/* implicit */unsigned long long int) (unsigned char)251))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) (unsigned char)240)), (arr_4 [i_0] [i_1] [i_0])))));
            arr_6 [i_1] = ((/* implicit */long long int) ((unsigned long long int) max((max((((/* implicit */unsigned int) arr_3 [(signed char)5])), (3639336709U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_1]))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_13 = ((signed char) min((arr_8 [i_0] [i_0]), (arr_8 [i_0] [i_2])));
            var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((6467337897110236473LL) ^ (((/* implicit */long long int) 655630587U))))) ? (8774181824900471885ULL) : ((~(var_3))))), (((/* implicit */unsigned long long int) 6766697618086555178LL))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                arr_12 [i_3] [11LL] [i_0] = ((/* implicit */signed char) ((int) -2));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(-6766697618086555183LL)))))) ? (((/* implicit */long long int) ((unsigned int) 14126555576714953085ULL))) : (-6766697618086555188LL)));
                /* LoopSeq 1 */
                for (short i_4 = 4; i_4 < 18; i_4 += 2) 
                {
                    var_16 = ((/* implicit */signed char) var_10);
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) arr_1 [i_3]);
                        arr_17 [i_0] [(signed char)11] [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_2] [i_2]);
                        var_18 = ((/* implicit */signed char) (-(((unsigned int) ((((/* implicit */_Bool) 12053071738584154357ULL)) ? (arr_1 [i_5]) : (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_4])))))));
                        var_19 = ((((((/* implicit */_Bool) max((-18LL), (((/* implicit */long long int) -82369532))))) ? (6766697618086555168LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4273775663732005459LL)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (signed char)-74))))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 12176514678157362332ULL)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (signed char)113))))));
                        arr_18 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (signed char)4);
                    }
                    var_20 = max((((/* implicit */unsigned long long int) (signed char)55)), ((~((~(157098950901015621ULL))))));
                }
                arr_19 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((2139095040), (((/* implicit */int) (_Bool)0))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
                var_21 = ((/* implicit */unsigned long long int) (!(((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))));
            }
            arr_20 [i_0] [1LL] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1704838098U)) ? (((/* implicit */int) (unsigned short)18573)) : (((/* implicit */int) (unsigned char)92))))), (((18446744073709551595ULL) >> (((((/* implicit */int) (unsigned short)65535)) - (65474))))))) >> (((min((((/* implicit */unsigned int) ((short) var_7))), ((~(arr_4 [i_0] [8LL] [8LL]))))) - (184164785U)))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-122)) ? (655630573U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112)))));
        var_22 ^= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (arr_0 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6] [i_6]))))));
    }
    for (short i_7 = 2; i_7 < 21; i_7 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) -5738185829566006661LL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_25 [i_7]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1752)) ? (655630586U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))))) ? ((-(((/* implicit */int) (short)-11591)))) : (((/* implicit */int) (short)-29691))))));
        arr_27 [i_7] = ((/* implicit */unsigned long long int) var_8);
        arr_28 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_7])) ? ((-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_24 [i_7] [i_7])))))) : (((/* implicit */int) ((signed char) ((long long int) arr_24 [18] [i_7]))))));
    }
}
