/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103883
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
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1507081166U)) ? (((/* implicit */int) (_Bool)1)) : (-1563630522))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32050))) == (var_1))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */unsigned int) -1)) : (1531038760U)))))))));
    var_19 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
            var_20 = ((/* implicit */long long int) min((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), ((~(((/* implicit */int) (unsigned char)107)))))), (((((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0])))) / (((/* implicit */int) max((((/* implicit */short) (unsigned char)216)), (arr_3 [i_0] [i_1]))))))));
        }
        arr_7 [i_0] [3U] = ((/* implicit */_Bool) (-(-1563630499)));
        arr_8 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967286U))))) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] [i_2] &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2] [(unsigned char)7])) * (((/* implicit */int) arr_10 [i_2]))))), (arr_1 [i_2])));
        var_21 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(1563630521)))) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (unsigned short)65535)))))), ((~(((/* implicit */int) arr_5 [i_2]))))));
        var_22 += ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_2] [i_2]))));
    }
}
