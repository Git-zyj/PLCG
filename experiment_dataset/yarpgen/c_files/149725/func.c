/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149725
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 |= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 3007050992U)) ? (12231365602806974056ULL) : (7713008160695434539ULL))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((arr_1 [i_1]) >> (((((/* implicit */int) var_5)) - (85)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0])) << (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_5))))))) : (((min((((/* implicit */unsigned long long int) 7513393745103738756LL)), (9223363240761753600ULL))) << (((((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_1] [i_0]))) - (155)))))));
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6)))))) : (((unsigned int) 10733735913014117089ULL))))));
                    arr_9 [15LL] [i_0] [i_0] = ((/* implicit */unsigned int) max((((arr_6 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))), (((arr_6 [i_0] [(unsigned char)19] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 1; i_5 < 22; i_5 += 3) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_4] [i_0] = ((unsigned char) var_4);
                        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_3] [6U])), (((unsigned long long int) var_7))))) ? ((((~(((/* implicit */int) (unsigned short)60864)))) & ((~(((/* implicit */int) arr_16 [i_0] [i_3] [(unsigned char)16] [i_5])))))) : (-1085211830)));
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned char)16])) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_8 [i_4] [i_3] [i_5 - 1])), (((((/* implicit */_Bool) 3007050976U)) ? (((/* implicit */int) (unsigned short)33218)) : (((/* implicit */int) (unsigned short)6247))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (524288U))) % (((/* implicit */unsigned int) arr_1 [i_5 + 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [22] [22])) >> ((-(((/* implicit */int) (_Bool)0)))))))));
                            var_17 = min(((((-(-9171355889400987060LL))) / (((/* implicit */long long int) ((unsigned int) (unsigned char)194))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 479680450)) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        var_18 = ((/* implicit */unsigned int) -2147483639);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))));
        var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)17] [i_0])) ? (((/* implicit */int) (unsigned char)184)) : (((((/* implicit */int) arr_20 [(_Bool)1])) | (((/* implicit */int) arr_2 [10LL] [10LL]))))))) && (((/* implicit */_Bool) (+(((2516798390U) - (var_2))))))));
    }
    var_21 *= ((/* implicit */_Bool) ((long long int) ((int) -9171355889400987052LL)));
    var_22 = ((/* implicit */unsigned short) var_2);
    var_23 += var_8;
}
