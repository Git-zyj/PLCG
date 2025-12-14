/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179083
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)12)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))))) : (max((((/* implicit */long long int) var_7)), (arr_0 [i_0])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_14)))));
        var_18 = ((/* implicit */unsigned char) (+(((int) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((14296447789180196550ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32750)))))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max(((short)32741), (var_4))), (((/* implicit */short) (unsigned char)19)))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */_Bool) 10825697306480557953ULL)) && (((/* implicit */_Bool) arr_6 [i_1] [i_1]))))))) & (max((((/* implicit */int) ((10825697306480557961ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))), (((((/* implicit */int) arr_6 [i_1] [i_1])) << (((((/* implicit */int) (short)-8707)) + (8712)))))))));
        var_19 -= ((/* implicit */short) max((min((((((/* implicit */unsigned long long int) (-2147483647 - 1))) / (var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned short)61234))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_1] [i_1])))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (unsigned short)40216))), (max((var_0), (arr_6 [2U] [i_1]))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_20 -= ((/* implicit */int) (((~(min((((/* implicit */unsigned int) arr_3 [i_2] [i_2])), (arr_10 [i_2]))))) < (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (short)-8707)))) != (-322296983)))))));
        var_21 *= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 398677406)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) (unsigned short)45628)))) << (((min((((/* implicit */long long int) (short)(-32767 - 1))), (var_11))) + (32775LL))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) && (((/* implicit */_Bool) var_11)))))));
        var_22 = ((/* implicit */signed char) (((+(((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))) < (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), (max((arr_1 [i_2]), (((/* implicit */unsigned short) (signed char)6))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned long long int) var_11)) : (var_14))))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2] [i_3])) % (((/* implicit */int) var_10))));
            arr_17 [i_2] [i_3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (((7621046767228993672ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
            var_25 *= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_13)))) != (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3] [i_2])) < (((/* implicit */int) (signed char)115)))))));
            /* LoopSeq 1 */
            for (int i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                arr_20 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) 4294967295U))));
                arr_21 [i_2] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) (!(((12751739468978527142ULL) == (var_14)))));
                arr_22 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6511185269105128245LL)))))) ^ (arr_18 [i_4 - 1] [i_3] [i_4] [i_4])));
            }
        }
    }
    var_26 = (~(((/* implicit */int) var_12)));
    var_27 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) var_7)), ((+(((/* implicit */int) var_6))))))));
    var_28 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) & (var_14))), (((max((var_14), (((/* implicit */unsigned long long int) 6511185269105128245LL)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (signed char)67))))))))));
}
