/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172579
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
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((-2357072565860326904LL) + (2357072565860326905LL)))));
        var_14 = (((+((-9223372036854775807LL - 1LL)))) / (((/* implicit */long long int) ((/* implicit */int) min(((short)26862), ((short)13938))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_1]))))) << (((2357072565860326917LL) - (2357072565860326902LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 4294967287U)) == ((+(var_4))))))) : (((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) var_11)) : (-2357072565860326927LL))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0 - 2])) && (((/* implicit */_Bool) 2357072565860326908LL)))))))));
            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 3])) << (((3479970722U) - (3479970708U)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) : (((/* implicit */int) ((((-8194736620859404755LL) / (((/* implicit */long long int) 1722966376)))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1722966372)) <= (var_11))))))))));
        }
        var_16 = ((min((((((/* implicit */int) var_10)) << (((((var_7) + (2027815798))) - (14))))), (((/* implicit */int) ((var_0) == (var_0)))))) << (((((((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50433))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (4294916855U))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned int) ((arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 2])))));
        var_18 |= ((/* implicit */short) ((arr_0 [i_2 + 1]) && (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2] [i_2])) * (((/* implicit */int) (unsigned short)50433)))))));
    }
    for (long long int i_3 = 2; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_6 [i_3] [i_3])) && (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) 4121887936147771980LL))));
        var_20 ^= ((/* implicit */long long int) (((((_Bool)1) ? (-4522075241055874582LL) : (((/* implicit */long long int) 814996574U)))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) / (3547193820626451861LL)))));
    }
    for (short i_4 = 4; i_4 < 20; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((((/* implicit */long long int) var_11)) ^ (((-1LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))))))), (((/* implicit */long long int) var_11)))))));
            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_4] [22] [i_5])) && (((arr_12 [i_4]) >= (1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-8961))) >= (-5103185874820207339LL))))) : (3479970732U)));
        }
        for (long long int i_6 = 1; i_6 < 20; i_6 += 3) /* same iter space */
        {
            var_24 = ((max((-2357072565860326895LL), (((/* implicit */long long int) 2620981532U)))) << (((((((/* implicit */_Bool) arr_15 [i_4] [i_6 + 2] [i_4 - 4])) ? (arr_19 [(unsigned char)7] [i_6 + 2] [(unsigned char)7]) : (((/* implicit */int) var_5)))) - (1050498771))));
            var_25 = max((((/* implicit */long long int) ((((((/* implicit */int) arr_17 [i_6 - 1])) & (var_7))) == (((/* implicit */int) arr_18 [i_6] [i_6 + 1]))))), (((((12307866871596720195ULL) == (6218379555488805237ULL))) ? (max((arr_12 [i_6]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
        }
        /* vectorizable */
        for (long long int i_7 = 1; i_7 < 20; i_7 += 3) /* same iter space */
        {
            arr_23 [i_4] [i_4] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_14 [i_4] [i_7] [i_7 + 2]) / (((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) (short)-23729)))) : (((/* implicit */int) arr_17 [i_7 + 3]))));
            arr_24 [i_7] [(_Bool)1] = ((2357072565860326917LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_21 [i_4] [i_4])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4])) && (((/* implicit */_Bool) var_10))))))));
            arr_25 [i_4] [i_4 - 4] [i_4 - 4] = ((/* implicit */_Bool) arr_13 [i_4 - 1]);
        }
        var_27 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((var_11) << (((arr_12 [i_4]) + (3913403325355449365LL))))) == (((/* implicit */unsigned int) var_7))))) : ((+(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (unsigned char)251))))))));
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            var_28 = ((/* implicit */short) var_8);
            arr_29 [i_8] [i_4 - 2] [i_4] = ((/* implicit */unsigned char) (unsigned short)37184);
        }
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            var_29 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (arr_16 [i_4 + 2]) : (arr_16 [i_4 + 2]))) & (((/* implicit */long long int) (~(((((/* implicit */int) var_1)) | (((/* implicit */int) var_10)))))))));
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2085507450U)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
    }
    var_31 = ((/* implicit */short) var_0);
    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 1613897563U)) >= (18269661616566884205ULL)))) >= (((/* implicit */int) var_2)))))));
}
