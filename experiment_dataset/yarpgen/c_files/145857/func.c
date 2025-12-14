/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145857
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_16 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6007))) >= (4798842413905564440ULL))))) * (arr_2 [i_0 + 2] [i_0 + 3])));
        var_17 = ((/* implicit */short) (-(26U)));
    }
    for (short i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        arr_6 [(_Bool)0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (-5856962846871274444LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_14)))))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)2]))) : (arr_5 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_5 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (-5162797936697837034LL)))))))))));
        var_18 = ((/* implicit */short) ((((((/* implicit */int) var_4)) >> (((((((-5856962846871274417LL) + (9223372036854775807LL))) << (((var_0) - (494043401))))) - (3366409189983501369LL))))) >= ((~(((/* implicit */int) ((-5856962846871274443LL) >= (5856962846871274417LL))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10))))) != (((((/* implicit */int) var_3)) << (((arr_5 [i_2]) - (372344684006395253ULL)))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_4))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) -5162797936697837040LL))))) >= (((((/* implicit */int) (unsigned short)50974)) >> (((((/* implicit */int) (signed char)-65)) + (80)))))))) + ((((~(((/* implicit */int) (unsigned short)14563)))) | (((arr_10 [i_3] [i_3]) - (arr_11 [i_3])))))));
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_15))))) > (((var_9) ? (5856962846871274417LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)9)))))));
        arr_13 [i_3] = ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-5162797936697837034LL))) % (((/* implicit */long long int) ((/* implicit */int) var_15))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((arr_11 [i_3]) > (arr_11 [(unsigned char)0]))))))));
    }
    var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (5856962846871274437LL) : (((/* implicit */long long int) var_11))))) ? (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_2)) - (63094))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) var_12)) : (((((/* implicit */_Bool) ((-5856962846871274417LL) | (((/* implicit */long long int) var_12))))) ? (((5856962846871274450LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) var_12))))))));
}
