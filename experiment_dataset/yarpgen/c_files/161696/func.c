/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161696
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)15307));
                var_13 = ((/* implicit */int) ((min((var_1), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)255))))))) >= (((/* implicit */int) (unsigned char)0))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned long long int) var_8);
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)24838)) : (((/* implicit */int) (unsigned char)108)))) + (-1356740412)))) ? (((/* implicit */unsigned long long int) -1)) : (((((/* implicit */_Bool) ((17244438988021946633ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238)))))) ? (max((9947644434782716624ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))))));
                    var_16 += ((/* implicit */_Bool) -599242762);
                    arr_8 [0] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? ((-(max((((/* implicit */unsigned long long int) (unsigned short)33595)), (arr_6 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned short)62754), (((/* implicit */unsigned short) var_10))))))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(17914504501358693481ULL)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (var_3))))))) / (min((var_2), (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (var_7)))))))))));
    var_18 += ((/* implicit */int) (unsigned char)209);
}
