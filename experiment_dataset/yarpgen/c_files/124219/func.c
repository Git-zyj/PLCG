/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124219
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
    var_20 ^= ((/* implicit */int) ((((/* implicit */int) (unsigned char)244)) == (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_21 = ((((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (var_19))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)11)) + (((/* implicit */int) arr_1 [i_0]))))))) - (((/* implicit */long long int) ((((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_1 [i_0])))))))));
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_0 [i_0] [i_0])))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) | (274877906943LL))))) | (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)244)) < (((/* implicit */int) (unsigned short)26187)))) && (((/* implicit */_Bool) ((var_15) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))))))));
        var_23 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_2 [i_0])))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (2704698309U))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((2023985010352033480LL) << (((((/* implicit */int) (unsigned char)143)) - (141))))) != (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (unsigned short)8860)))))))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((1542633482348501796LL) << (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((-1219278697) / (((/* implicit */int) (unsigned short)30720)))))))) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) + (arr_3 [i_0])))) || (((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) & (var_19))) < (((((/* implicit */long long int) ((/* implicit */int) (short)23322))) - (var_6)))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            arr_9 [(_Bool)1] [i_2] [(_Bool)1] &= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_14)))) == (((/* implicit */int) ((arr_7 [i_1] [i_1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))))))));
            arr_10 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))) - (var_7))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1] [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1])))))))));
            var_26 *= ((((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) (unsigned short)65535))))) % (((((/* implicit */int) (unsigned short)24074)) % (((/* implicit */int) (unsigned char)229)))));
        }
        var_27 = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))) > (var_6)))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_8 [i_1] [i_1]))))));
    }
    var_28 = ((/* implicit */int) ((7018414770483321502LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))));
}
