/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162972
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
    var_18 = ((/* implicit */short) 6624713367636657463LL);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3712374229206403773LL)) ? (((/* implicit */int) arr_0 [1LL])) : (((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [7LL])) % (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (2911915870238046273ULL)))))));
        var_19 &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) ((signed char) -3712374229206403773LL)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)107))))) : (-3712374229206403777LL)))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (unsigned char)149))));
        arr_5 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((3876488971U) << (((3876488971U) - (3876488963U)))))), (3712374229206403783LL))))));
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((425273450) % (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (1729382256910270464ULL)))) && ((!(((/* implicit */_Bool) arr_0 [7ULL]))))))) : ((~(((/* implicit */int) arr_0 [i_1]))))));
        var_21 |= ((/* implicit */unsigned char) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_1]))));
    }
    for (unsigned short i_2 = 2; i_2 < 23; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) arr_8 [i_2])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-7853547555083487072LL) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1))))) ? (max((var_11), (((/* implicit */unsigned int) arr_8 [i_2 - 2])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)190))))))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_7 [i_2 - 1]), (arr_8 [i_2 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (arr_7 [i_2])))) ? ((~(1834666135491872858LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [i_2]))))))))));
        var_23 = ((/* implicit */unsigned short) (unsigned char)18);
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((4278190080U), (1568156241U))))));
    }
    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        arr_12 [i_3 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 3] [i_3 + 2]))) % (max((3712374229206403773LL), (-3712374229206403784LL))))))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)47181))))), ((short)18561)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_10 [i_3 + 2] [4LL]), (((/* implicit */short) (unsigned char)1))))) && (((((/* implicit */_Bool) (short)-18582)) || (((/* implicit */_Bool) 17776189442560899031ULL)))))))));
        arr_14 [i_3] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_10 [i_3] [i_3 - 1])))) ^ ((~(((/* implicit */int) var_1))))))) || (((/* implicit */_Bool) -3712374229206403773LL))));
    }
    var_25 -= ((/* implicit */short) (-(max(((-(((/* implicit */int) (unsigned char)249)))), (((/* implicit */int) var_17))))));
}
