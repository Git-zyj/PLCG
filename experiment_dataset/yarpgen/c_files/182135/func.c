/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182135
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
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 14697672053823867748ULL)) ? (226251627) : (((/* implicit */int) (unsigned short)65535))))))))) ^ (min((((/* implicit */unsigned int) var_7)), ((-(18U)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) 3749072019885683858ULL)) ? (var_8) : (((/* implicit */long long int) 4294967284U))))));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_6)))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1])))), ((~(((/* implicit */int) arr_4 [i_1 - 1]))))));
            var_13 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) -9223372036854775782LL)), (((unsigned long long int) 13442237559356315746ULL))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                arr_13 [i_2] = (unsigned char)13;
                arr_14 [i_1 - 1] [i_3] [i_3] |= ((/* implicit */int) min((((/* implicit */unsigned int) arr_10 [i_1 - 1] [i_1] [i_1])), (2595886560U)));
            }
        }
        var_14 ^= ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (var_8) : (((/* implicit */long long int) 3U)))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1])))))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */signed char) var_5);
        arr_19 [i_4] = ((/* implicit */unsigned short) 9223372036854775802LL);
        arr_20 [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967284U)) : (3749072019885683872ULL))) > (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4 - 1])))))));
        arr_21 [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-11378))))) != (((/* implicit */int) var_2)))))));
    }
    var_15 -= ((/* implicit */unsigned short) min((14566257314560093037ULL), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) -242329347))))))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)55934))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18659)))) << (((/* implicit */int) (!(((/* implicit */_Bool) 15U)))))))) : (var_4)));
}
