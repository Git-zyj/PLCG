/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176565
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
    var_15 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_16 &= ((/* implicit */unsigned char) (+(((long long int) var_12))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */short) ((arr_0 [i_0] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
            arr_7 [i_0] |= ((/* implicit */unsigned int) (+(((unsigned long long int) 264964778))));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_17 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5287886291753929129LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8882))) : (var_1))))));
            var_18 = (-(var_3));
            var_19 = ((/* implicit */unsigned short) arr_4 [i_2] [i_0]);
            var_20 = ((/* implicit */unsigned long long int) -636562308);
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2]))));
        }
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            arr_15 [i_0] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)8854))));
            arr_16 [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_3 [i_3] [i_3]));
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_25 [16LL] [i_6] [i_4] [i_5] [i_0] [i_6 + 2] [i_0] = ((((/* implicit */_Bool) ((var_6) / (((/* implicit */int) (unsigned char)236))))) ? (arr_10 [i_6 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3]))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(var_3))))));
                            arr_26 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_0] [i_4] [i_0] [i_0]))));
                            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31081)) << ((((((~(((/* implicit */int) arr_5 [i_4] [i_0])))) + (77))) - (12)))));
                            var_24 &= ((/* implicit */unsigned int) ((((long long int) var_14)) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_6 - 1])))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned short) ((unsigned char) var_8));
        }
    }
    for (short i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
    {
        var_26 |= ((/* implicit */long long int) (+(var_11)));
        var_27 = ((/* implicit */unsigned char) ((_Bool) min((arr_24 [12LL] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]), ((_Bool)1))));
        var_28 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) (unsigned char)115)), (1498420515))) | ((+(((/* implicit */int) arr_4 [i_7] [i_7]))))));
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned char)153)), (var_3))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)13942)), (-1649680176))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0)));
}
