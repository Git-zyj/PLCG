/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187439
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_19 |= ((/* implicit */int) min((max(((unsigned char)0), ((unsigned char)148))), ((unsigned char)154)));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (unsigned char)47))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_1])) == (-158016684))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_22 = ((((/* implicit */int) (unsigned short)10860)) == (((/* implicit */int) var_4)));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) min(((unsigned char)16), ((unsigned char)226)))) & (((/* implicit */int) ((((/* implicit */int) (signed char)120)) != (((/* implicit */int) (_Bool)1))))))) + (((/* implicit */int) ((var_12) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)8)))))))));
                var_23 = ((/* implicit */signed char) ((((2502713690U) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)5544)) / (((/* implicit */int) (unsigned short)22187))))))) % (2141859097U)));
            }
        }
        var_24 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (1906053045) : (((/* implicit */int) arr_6 [i_1] [i_1 + 2]))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (7740371606744850561LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1486435540U)) && (((/* implicit */_Bool) 2142962797)))))) : (arr_9 [i_1] [i_1] [i_1 + 3])))));
    }
    for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) / (1421557230U)))), (((((/* implicit */_Bool) 4294967295U)) ? (5547810648259539508ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1033))))))))));
        var_26 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned char)251))))) || (((/* implicit */_Bool) 2154028357U)))) ? (((/* implicit */int) (short)7738)) : (((/* implicit */int) (short)32767))));
    }
    var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) & (632803153974378654LL)))) ? (max((2743406791U), (4294967295U))) : (((/* implicit */unsigned int) var_2))));
}
