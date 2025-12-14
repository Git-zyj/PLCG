/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186839
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
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (31525197391593472LL) : (-7498328968472138739LL)))) ? (((/* implicit */long long int) 3960430124U)) : (min((var_0), (((/* implicit */long long int) var_7)))))) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_17 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_13)) == (var_4))))) != (((((/* implicit */_Bool) (unsigned short)16603)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_4))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) -5290437773718997291LL);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) > (var_2)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) 5086537220646839409LL);
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            for (unsigned char i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_4 [i_1]))));
                    arr_10 [i_1] [i_2 - 3] [i_3 + 1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1]))))) < (((((/* implicit */_Bool) (unsigned short)58971)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) : (7535688955320735095LL)))))), ((+(((/* implicit */int) arr_8 [i_2 + 2] [i_3 + 1] [i_3]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((-3187957952747850308LL) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)3)), (arr_14 [i_2 + 1] [i_3 + 1])))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6565)) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)5426))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) arr_5 [i_3] [i_1] [i_1])) ^ (((/* implicit */int) var_7)))))) - (9981)))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) 861815418U))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (min(((unsigned short)42803), (((/* implicit */unsigned short) (unsigned char)245))))));
                        arr_16 [i_1] = ((/* implicit */unsigned short) ((((-5290437773718997291LL) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_3 [i_1])))) + (41701)))));
                    }
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1047552LL)) ? (((/* implicit */int) (unsigned short)48416)) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max(((unsigned char)181), (arr_11 [3U] [i_2] [3U])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) : ((+(((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        var_25 *= ((/* implicit */unsigned short) ((unsigned char) (~(((((/* implicit */_Bool) (short)20933)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (var_3))))));
        arr_19 [i_5] [(unsigned short)7] = ((/* implicit */unsigned short) 17592186044415LL);
        var_26 = arr_3 [i_5];
        var_27 = ((/* implicit */long long int) arr_6 [i_5]);
        var_28 = (unsigned short)5;
    }
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
    {
        var_29 = max((((((-4092670062654245675LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)132)) - (132))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((5005803475751240811LL) >> (((/* implicit */int) var_10)))))))));
        arr_24 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((var_3) ^ (var_4)))))) ? (1837278005U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151)))));
        arr_25 [i_6] = ((/* implicit */short) (unsigned char)174);
    }
}
